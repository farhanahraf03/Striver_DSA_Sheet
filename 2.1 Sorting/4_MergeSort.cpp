#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for(auto x: v)cout<<x<<" ";
    cout<<endl;
}

void merge(vector<int> &v, int l, int mid, int r)
{
    vector<int> temp(r,INT_MIN);
    int i=l;
    int j=mid+1;
    int k = l;

    while(i<=mid && j<=r)temp[k++] = v[i]<v[j]? v[i++]: v[j++];
    while(i<=mid)temp[k++]=v[i++];
    while(j<=r)temp[k++]=v[j++];
    
    for(int x = l; x<=r; x++)v[x]=temp[x];
    
}


void mergeSort(vector<int> &v, int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        
        mergeSort(v, l, mid);
        mergeSort(v, mid+1, r);
        
        merge(v,l,mid,r);
    }
}



int main()
{
    vector<int> v = {13,5,-2,7,9,-1};
    
    mergeSort(v, 0, v.size()-1);
    print(v);
    
    return 0;
}
