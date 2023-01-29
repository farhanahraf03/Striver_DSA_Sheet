#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<v.size(); j++)
            if(v[i]>v[j])swap(v[i], v[j]);
    }
}

void print(vector<int> v)
{
    for(auto x: v)cout<<x<<" ";
}

int main()
{
    vector<int> v = {13,5,2,7,9,1};
    
    selectionSort(v);
    print(v);
    
    return 0;
}

/*

output->
1 2 5 7 9 13 

*/
