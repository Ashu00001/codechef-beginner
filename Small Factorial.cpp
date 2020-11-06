#include<iostream>
using namespace std;
int main()
{
	int long long a[1000];
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++){
	    int temp=1;
	while(a[i]!=0)
	{
		temp=temp*a[i];
		a[i]=a[i]-1;
	}
	a[i]=temp;
}
for(i=0;i<n;i++)
	cout<<"\n"<<a[i];
}
