#include<iostream>
using namespace std;
int main()
{
	int no,rem,result=0;
	cout<<"enter no";
	cin>>no;
	if(no<0)
	{
		no = no* -1;
	}
	int temp= no;
	while (temp>0)
	{
		rem =temp%10;
		result = result+rem;
		temp = temp/10;
	}
	cout<<"\n"<<result;
}
