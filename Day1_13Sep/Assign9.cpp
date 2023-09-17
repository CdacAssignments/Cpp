#include<iostream>
using namespace std;
int main()
{
	int no,rem,result=0;
	cout<<"enter no";
	cin>>no;
	int temp= no;
	while (temp>0)
	{
		rem =temp%10;
		result = result*10+rem;
		temp = temp/10;
	}
	if(result == no)
		cout<<no<<" is  paliendrome";
	else
		cout<<no<<" is not paliendrome";
	
}
