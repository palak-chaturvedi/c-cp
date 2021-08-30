#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int sum1=0,sum2=0;
	vector<int>vec1(N);
	vector<int>vec2(N);
	for(int i=0;i<N;i++){
		int n1,n2;
		cin>>n1>>n2;
		sum1 += n1;
		sum2 +=n2;
		if(sum1>sum2){
			vec1.push_back(sum1-sum2);
		}
		else
		vec2.push_back(sum2-sum1);
		
	}
	int x= *max_element(vec1.begin(), vec1.end());
	int y= *max_element(vec2.begin(),vec2.end());
	if(x>y){
		cout<<"1 "<<x;
	}
	else 
	cout<<"2 "<<y;
}
