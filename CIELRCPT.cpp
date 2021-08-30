#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t,n,c,i;
 cin>>t;
 while(t--)
 {
     c=0;
     cin>>n;
     for(i=11;i>=0;--i){
        int currpower=pow(2,i);
        while(n>=currpower)
        {
            n=n-currpower;
            c++;
        }
     }
     cout<<c<<endl;
 }
}