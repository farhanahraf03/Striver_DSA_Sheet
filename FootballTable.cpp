#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct team
{
    int p;
    int gd;
    int ind;
};

void print(vector<team*> v)
{
    for(auto s: v)cout<<s->ind<<"->"<<s->p<<"->"<<s->gd<<endl;
}

int calcWinner(vector<int> wins, vector<int> draws, vector<int> scored, vector<int> conceded)
{
    vector<team*> v;
    for(int i=0; i<wins.size(); i++)
    {
        team *t = new team;
        t->p = wins[i]*3 + draws[i];
        t->gd = scored[i]-conceded[i];
        t->ind=i;
        
        v.push_back(t);
    }
    
    
    sort(v.begin(), v.end(), [](team* a, team* b)->bool{
        
        if(a->p==b->p)return a->gd>b->gd;
        return a->p>b->p;
    } );
    
    print(v);
    
    return v.front()->ind;
}

int main()
{
    vector<int> wins = {1,2,3,1,2,3,1,4,1,3,3};
    vector<int> draws = {4,3,2,5,4,2,6,1,2,4,0};
    vector<int> scored = {2,5,6,4,1,2,5,4,2,4,2};
    vector<int> conceded = {7,5,3,5,4,3,2,1,2,4,7};
    
    cout<<calcWinner(wins,draws,scored,conceded);
    
    return 0;
}
