#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<string> tokenize(string s, string delimiter)
{
  size_t pos=0;
  vector<string> tokens;

  string token="";

  while((pos=s.find(delimiter)) != string::npos)
    {
        token = s.substr(0,pos);
        tokens.push_back(token);
        s.erase(0,pos+delimiter.length());
    }

    tokens.push_back(s);

    return tokens;
  
}

void print(vector<string> s)
{
  for(auto i: s)cout<<i<<endl;
}

int main()
{

  string s = "Hello;World";
  string delimiter = ";";
  
  vector<string> tokens = tokenize(s,delimiter);
  print(tokens);

  return 0;
}
