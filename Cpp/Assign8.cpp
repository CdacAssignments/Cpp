#include<iostream>
using namespace std;
int main()
{
	int no,rem,result=1;
	cout<<"enter no";
	cin>>no;
	int temp= no;
	while (temp>0)
	{
		rem =temp%10;
		result = result*rem;
		temp = temp/10;
	}
	cout<<"\n"<<result;
}
