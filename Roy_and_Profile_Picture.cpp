#include <bits/stdc++.h>
using namespace std;


int main()
{  
    int l,n;
    cin>>l;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int w,h;
        cin>>w>>h;
        if((w<l)||(h<l))
        {
            cout<<"UPLOAD ANOTHER\n";
        }
        else if(w==l&&h==l){
            cout<<"ACCEPTED\n";

        }
        else{
             cout<<"CROP IT\n";
        }
    }

}