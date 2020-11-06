#include<iostream>
using namespace std;
int main()
{
	int long long a,b,sum[1000];
	int long n;
	cin>>n;
	int i=n;
	while(n>0)
	{
		cin>>a;
		cin>>b;
		sum[n]=a+b;
		n--;
	}
while(i>0)
{
	cout<<sum[i]<<endl;
	i--;
}
}
