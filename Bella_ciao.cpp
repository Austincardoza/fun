#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'findSubstring' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string findSubstring(string s, int k) {
int n=s.size();
int c=0;
for(int i=0;i<k;++i){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        c++;
    }
    
}string str=s.substr(0,k);
int t=c;
for(int i=1;i<n-k+1;++i){
     if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u')
     {
         t-=1;
     }
      if(s[i+k-1]=='a'||s[i+k-1]=='e'||s[i+k-1]=='i'||s[i+k-1]=='o'||s[i+k-1]=='u'){
          t+=1;
      }
      if(c<t){
          c=t;
          str=s.substr(i,i+k);
      }
}
if(c==0){
    return "Not found!";
}
return str;

}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = findSubstring(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
