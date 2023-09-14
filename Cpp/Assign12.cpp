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

   cout<<"Number of digit: "<<count;
  }
