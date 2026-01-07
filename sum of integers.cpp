#include<iostream>
using namespace std;
int main()
{
	int n, num;
	int evensum=0, oddsum=0;
	cout<<"how many numbers you want to enter";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"enter number"<<i<<":";
		cin>>num;
		if(num%2==0)
		{
			evensum += num;
		}
		else
		{
			oddsum += num;
		}
	}
	cout<<"\nsum of even numbers="<<evensum<<endl;
	cout<<"\nsum of odd numbers="<<oddsum<<endl;
	return 0;
}