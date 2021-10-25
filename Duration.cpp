#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,sh,sm,eh,em;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>sh>>sm>>eh>>em;
       int d=((eh*60+em)-(sh*60+sm));
       int hr=d/60;
       int mn=d%60;
       cout<<hr<<" "<<mn<<endl;    
    }

}