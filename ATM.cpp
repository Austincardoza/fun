#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int  y;
	double x;
	cin>>y;
	cin>>x;
	
	if(y%5 != 0 || (y+0.5)>x){
	    printf("%.2f",x);
	}else{
	    printf("%.2f",x-0.5-y);
	}
	return 0;
}
