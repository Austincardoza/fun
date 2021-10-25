#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{ 
    int n;
    cin>>n;

    ll  ans=1;
    while(n--)
    {
         ll  r;
        cin>>r;
        ans=(ans*r);
    }
    cout<<ans;
        

     
}
