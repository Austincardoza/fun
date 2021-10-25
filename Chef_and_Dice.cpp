#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
 
 
void solve() {
ll n;
cin>>n;
ll sum=0;
ll rem=n%4;
ll stack=n/4;
if(n==1)
{
    sum=20;
}
else if(n==2){
    sum=36;
}else if(n==3)
{
    sum=52;
}
else if(n>=4){
    if(rem==0){
        sum+=4*(5+6)*stack;
        sum+=4*4;
    }
    else if(rem==1)
    {
        sum+=4*(5+6)*stack;
        sum+=3*4;
        sum+=6+5+4+3+2;
    }
    else if(rem==2){
        sum+=4*(5+6)*stack;
        sum+=2*4;
        sum+=2*(6+5+4+3);
    }
    else if(rem==3)
    {
        sum+=4*(5+6)*stack;
        sum+=4*1;
        sum+=2*(6+5+4+3)+6+5+4;
    }
}
cout<<sum<<endl;
}
 
 
 
int main() {
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
int t = 1;
cin >> t;
while(t--) {
solve();
}
return 0;
}