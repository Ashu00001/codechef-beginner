#include<iostream>
using namespace std;
int main()
{
	int n,k,count=0;
cin>>n>>k;
while(n>0)
{
	long long a;
	cin>>a;
	if(a%k==0)
	{
		count++;
	}
	n--;
}
cout<<count;
}
