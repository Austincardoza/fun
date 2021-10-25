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
 
 
bool solve() {
int n,ele,sum=0;
bool co=true;
cin>>n;
vector<int> nums;
for(int i=0;i<n;++i)
{
    
    cin>>ele;
    nums.pb(ele);
    sum+=ele;
}
sort(nums.begin(),nums.end());
for(int j=0;j<n;j++)
{
  if(nums[j]>(j+1))
  {
      co=false;
  }
 
}
if(co){
int x = n*(n+1)/2;
  sum-=x;
  if(abs(sum%2)==0)
  {
      co=false;
  }
  else{
      co=true;
  }}
  return co;
}
 
int main() {
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
int t = 1;
bool xo;
cin >> t;
while(t--) {

if(solve()){
    cout<<"First"<<endl;
}else{
    cout<<"Second"<<endl;
}
}
return 0;
}