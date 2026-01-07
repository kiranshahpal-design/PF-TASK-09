#include<iostream>
using namespace std;
int main()
{
	float temp, sum=0;
	float maxTemp;
	string days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	for (int i=0;i<7;i++)
	{
		cout<<"Enter temperature for"<<days[i]<<":";
		cin>>temp;
		sum+=temp;
		if(i==0)
		{
			maxTemp=temp;
		}
		else if(temp>maxTemp)
		{
			maxTemp=temp;
		}
		}	
	cout<<"\nAverage temprature of the week="<<sum/7<<endl;
	cout<<"Highest temperature recorded="<<maxTemp<<endl;
	return 0;
	}
	