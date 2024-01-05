/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<int>, int, int);
int maxSubArraySum(vector<int>);

void print(vector<int> v, int i, int j)
{
    for(;i<=j;i++)cout<<v[i]<<" ";
    cout<<endl;
}


int maxSubArraySum(vector<int> v)
{
    int maxSum=0;
    int sumUntilNow=0;
    
    int start=0, ansStart=-1, ansEnd=-1;
    
    for(int i=0; i<v.size(); i++)
    {
        if(sumUntilNow==0)start=i;
        
        sumUntilNow+=v[i];
        
        if(sumUntilNow>maxSum)
        {
            maxSum=sumUntilNow;
            ansStart=start;
            ansEnd=i;
        }
        
        
    }
    
    print(v,ansStart, ansEnd);
    
    return maxSum;
}

int main()
{
    vector<int> v = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    
    cout<<maxSubArraySum(v);

    return 0;
}
