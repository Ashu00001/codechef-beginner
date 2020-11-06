#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
int d,n,t,sum=0;
cin>>t;
while(t>0){
cin>>d>>n;
while(d>0)
{
	sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	n=sum;
	d--;
}
cout<<sum<<endl;
t--;
}
}
