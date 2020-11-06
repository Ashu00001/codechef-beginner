#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int >a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
}
