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
#define mod 1000000007
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
ll n,sum=0,noo=0;
cin>>n;
ll arr[n];
for(ll i=0;i<n;++i){
    cin>>arr[i];
    sum+=arr[i];
}
bool dp[n+1][sum+1];
for(ll i=0;i<=n;++i)
{
    dp[i][0]=true;
}
for(ll i=1;i<=sum;++i)
{
    dp[0][i]=false;
}
for(ll i=1;i<=n;++i){
    for(ll j=1;j<=sum;++j)
    {
        if(arr[i-1]<=sum){
            dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
        }
        else{
            dp[i][j]=dp[i-1][j];
        }
    }
}
for(ll i=1;i<=sum;++i)
{
    if(dp[n][i]==false){
         cout<<i;
         noo=1;
         break;
    }
}
if(!noo)
{
    cout<<sum+1;
}
 }
 
 
int main() {
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
// int t = 1;
// cin >> t;
// while(t--) {
solve();
// }
return 0;
}