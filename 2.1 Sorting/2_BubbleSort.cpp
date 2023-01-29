#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=0; j<v.size()-1-i; j++)
            if(v[j]>v[j+1])swap(v[j],v[j+1]);
    }
}

void print(vector<int> v)
{
    for(auto x: v)cout<<x<<" ";
}

int main()
{
    vector<int> v = {13,5,2,7,9,1};
    
    bubbleSort(v);
    print(v);
    
    return 0;
}

/*

output->
1 2 5 7 9 13 

*/
