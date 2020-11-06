#include<iostream>
using namespace std;
int main()
{
	int long long a[1000];
	int sum[1000],i,n;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++){
		sum[i]=0;
	while(a[i]>0)
	{
		int rem=a[i]%10;
		sum[i]=sum[i]*10+rem;
		a[i]=a[i]/10;
		
	}
}
for(i=0;i<n;i++)
	cout<<"\n"<<sum[i];
}
