#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for(auto x: v)cout<<x<<" ";
    cout<<endl;
}

int partition(vector<int> &v, int low, int high)
{
    int pvt = v[low];
    int i=low;
    int j=high;
    
    while(i<j)
    {
        while(v[i]<=pvt)i++;
        while(v[j]>pvt)j--;

        if(i<j)swap(v[i], v[j]);
    }
    
    swap(v[j],v[low]);
    
    return j;
}

void quickSort(vector<int> &v, int l, int r)
{
    if(l<r)
    {
        int prt = partition(v,l,r);
        quickSort(v,l,prt-1);
        quickSort(v,prt+1,r);
    }
}


int main()
{
    vector<int> v = {13,5,-2,7,9,-1};
    
    quickSort(v, 0, v.size()-1);
    print(v);
    
    return 0;
}

/*
output->
-2 -1 5 7 9 13 
*/
