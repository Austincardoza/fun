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
char a[3][3],nx=0,no=0,e=0;
int wx=0,wo=0;
for(int i=0;i<3;++i)
{
    for(int j=0;j<3;++j){
        cin>>a[i][j];
        if(a[i][j]=='X'){
            nx++;
        }if(a[i][j]=='O'){
            no++;
        }if(a[i][j]=='_'){
            e++;
        }
        
    }
}
if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X'){
wx=1;
}
if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'){
wx=1;
}
if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X'){
wx=1;
}
if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X'){
wx=1;
}
if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X'){
wx=1;
}
if(a[1][2]=='X'&&a[2][2]=='X'&&a[0][2]=='X'){
wx=1;
}if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X'){
wx=1;
}
if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'){
wx=1;
}
if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O'){
wo=1;
}
if(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'){
wo=1;
}
if(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O'){
wo=1;
}
if(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O'){
wo=1;
}
if(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O'){
wo=1;
}
if(a[1][2]=='O'&&a[2][2]=='O'&&a[0][2]=='O'){
wo=1;
}if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O'){
wo=1;
}
if(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'){
wo=1;
}

if((wo==1 && wx==1)|| nx-no<0 || nx-no>1 ){
    cout<<3<<endl;
}
else if((nx==0 && no==0 && e==9)){
    cout<<2<<endl;
}
else if(wx==1 && wo==0 && nx>no){
    cout<<1<<endl;
}
else if(wx==0 && wo==1 && nx==no){
    cout<<1<<endl;
}
else if(wx==0 && wo==0 && e==0){
    cout<<1<<endl;
}
else if(wx==0 && wo==0 && e>0){
    cout<<2<<endl;
}
else{
    cout<<3<<endl;
}
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