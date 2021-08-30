#include<bits/stdc++.h>
using namespace std;

int main()
{
	/* code */
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int rem,count=0;
		while(n>0){
			rem = n%10;
			if(rem==4){
				count++;

			}
			n=n/10;
		}
		cout<<count<<endl;
	}
	return 0;
}	