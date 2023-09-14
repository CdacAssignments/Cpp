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
	//cout<<result;
	temp= result;
	while (temp>0)
	{
		rem =temp%10;
		switch(rem)
		{
			case 0: cout<<"zero ";
			       break;
			
			case 1: cout<<"one ";
			       break;
			
			case 2: cout<<"two ";
			       break;
			
			case 3: cout<<"three ";
			       break;
			       
			
			case 4: cout<<"four ";
			       break;
			
			case 5: cout<<"five ";
			       break;
			
			case 6: cout<<"six ";
			       break;
			
			case 7: cout<<"seven ";
			       break;
			
			case 8: cout<<"eight ";
			       break;
			
			case 9: cout<<"nine ";
			       break;
		}
		temp = temp/10;
	}
}
	 
