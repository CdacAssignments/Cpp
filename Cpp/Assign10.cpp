#include<iostream>
using namespace std;
int main()
{
	int no,rem,result=0;
	cout<<"enter no";
	cin>>no;
	int i=1;
	while (i<= no/2)
	{	
		if(no % i == 0)
			result =result + i;
			
		i++;
	}
	if(result == no)
		cout<<no<<" is  perfect no";
	else
		cout<<no<<" is not perfect no";
	
}
