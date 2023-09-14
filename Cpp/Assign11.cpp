#include<iostream>
using namespace std;
int main()
{
	int no,rem,result, count =0, sum =0;
	cout<<"enter no";
	cin>>no;
	int temp= no;
	while (temp>0)
	{
		rem =temp%10;
		count++;
		temp = temp/10;
	}
	 
	 temp=no;
	 
	while (temp>0)
	{
		rem =temp%10;
		result = rem;
		for(int i=1; i<count; i++)
		{
			result = result*rem;
		}
		sum =sum+result;
		temp = temp/10;
	}
	
	
	if(sum  == no)
		cout<<no<<" is  armstrong no";
	else
		cout<<no<<" is not armstrog no";
	
}
