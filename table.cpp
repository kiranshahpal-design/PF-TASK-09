#include<iostream>
using namespace std;
int main()
{
	int n, i, l,k ;
	cout<<"enter the number";
	cin>>n;
	cout<<"enter the limit";
	cin>> l;
	for(i=1;i<=l;i++)
	{
		k=n*i;
		cout<<n<<"*"<<i<<"="<<k<<endl;
	}
	return 0;
}