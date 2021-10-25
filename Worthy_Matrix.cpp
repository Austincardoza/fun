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
ll m,n,kl,c=0;
double arr[n+1][n+1];
cin>>n>>m>>kl;
for(ll i=0;i<n;++i){
    for(ll j=0;j<m;++j){
        if(i==0||j==0){
            arr[i][j]=0;
        }
        else
        cin>>arr[i][j];
    }
}

for(ll i=0;i<n;++i){
    double pr=0;
    for(ll j=0;j<m;++j){
        arr[i][j]+=pr;
        pr=arr[i][j];
    }
}
for(ll i=0;i<m;++i){
    double pr=0;
    for(ll j=0;j<n;++j){
        arr[j][i]+=pr;
        pr=arr[j][i];
    }
}
ll lim=min(m,n);
for(ll i=1;i<=lim;++i){
    for(ll j=i;j<=n;++j){
        for(ll k=i;k<=m;++k){
            if((arr[j][k]+arr[j-i][k-i]-arr[j-i][k]-arr[j][k-i])/(i*i)>=kl){
                c++;
            }

        }

    }
}
cout<<c<<endl;
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