#include<iostream>
using namespace std;
int main()
{
	int long long a;
	int n;
	
	cin>>n;
	while(n>0)
	{
		cin>>a;
		int last=a%10;
		int first=0;
		while(a>0)
		{
			first=a%10;
			a=a/10;
		}

		cout<<last+first<<endl;
		n--;
	}
}
