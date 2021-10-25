#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    int sum=0;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
       sum=sum+(s[i]-'a'+1);
       
    }cout<<sum;
}