#include <bits/stdc++.h>
using namespace std;


int main()
{


	int i, n;
	cin >> n;
	string s;
	 

		cin >> s;

	
	bool f;
	f = true;
	for (i = 0; i <= n; i++)
	{
		if (s[i] == 'H' && s[i+1] == 'H'){
			f = false;
		break;
        }

        else
        {
            if (s[i] == '.')
				s[i]='B';
        }
        
	}
	if (f)
	{
		cout << "YES"<<endl;	
		cout << s;
		
	}
	else
		cout << "NO"<<endl;
	return 0;


}
