#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>=-n;i--)
	{
		for(int j=n;j>=abs(i);j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
