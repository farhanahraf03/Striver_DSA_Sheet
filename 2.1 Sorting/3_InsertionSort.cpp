#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v)
{
    for(int i=1; i<v.size(); i++)
    {
        for(int j=i-1; j>=0; j--)
            if(v[j]>v[j+1])swap(v[j], v[j+1]);
            else break;
    }
}

void print(vector<int> v)
{
    for(auto x: v)cout<<x<<" ";
}

int main()
{
    vector<int> v = {13,5,2,7,9,1};
    
    insertionSort(v);
    print(v);
    
    return 0;
}

/*

output->
1 2 5 7 9 13 

*/
