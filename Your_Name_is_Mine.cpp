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
  string m,w;
  cin>>w>>m;
  int f=0,k=0;
  if(w.size()==m.size())
  {
      f=1;
      for(int i=0;i<m.size();++i)
      {
          if(m[i]!=w[i])
          {
              f=0;
              break;
          }
      }
  }
  else if(w.size()>m.size()){
      for(int i=0;i<w.size();++i)
      {
          if(w[i]==m[k]){
              k++;
          }
      }if(k==m.size()) 
      f=1;

  }else{
      for(int i=0;i<m.size();++i)
      {
          if(m[i]==w[k])
          {
              k++;
          }

      }if(k==w.size())
      f=1;
  }if(f){
      cout<<"YES\n";
  }else{cout<<"NO\n";}
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