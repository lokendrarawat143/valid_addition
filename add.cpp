#include<iostream>
using namespace std;
int setdata();
int input();
int main()
{
	setdata();
	return 0;
}
int setdata()
{
	int a,b,c;
	cout<<"Enter the value of A and B"<<endl;
	cin>>a>>b;
	if(cin.fail())
        {
		cout<<"'inavlid input' enter integer data type values only"<<endl;
		cout<<"Enter the value of A and B in INTEGER DATATYPE ONLY"<<endl;
		cin.clear();	
		cin.ignore(256,'\n');
		setdata();

	}
	else 
	{
	c=a+b;
	cout<<"addion of "<<a<<" and "<<b<<" is : "<<c<<endl;
	} 		


	return 0;
}
