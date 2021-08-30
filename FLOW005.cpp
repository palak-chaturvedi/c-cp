#include <iostream>
using namespace std;

//Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.

int main() {
    int t,count,i,q,r;
    long int n;
    int money[]={100,50,10,5,2,1};
    cin>>t;
    
    while(t>0)
    {
        cin>>n;
        count=0;
        for(i=0;i<6;i++)
        {
            q=n/money[i];
            r=n%money[i];
            count=count+q;
            n=r;
          
        }
        t--;
    cout<<count<<"\n";
        
    }
    
    
    
    
	// your code goes here
	return 0;
}
