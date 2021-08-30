#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int count =0;
	if(a+c<2*b){
		
	}
	if(~(a%2==0 ^ c%2==0)){
		count++;
		count = count + ((a+1+c)/2 -b);
		cout<<count<<endl;
	}
	else{
		cout<<(a+c)/2 - b<<endl;
	}
	return 0;
}