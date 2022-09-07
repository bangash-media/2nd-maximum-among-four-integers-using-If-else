#include <iostream>

using namespace std;

/*program to read four integer numbers then find and print the second maximum 
number among these numbers.*/

int main() 
{
	int num1,num2,num3,num4;      // integer is a non fractional number so using int
	cout<<"\n\n\n\t\tSecond Highest Integer Indentifier\n\n\n";
	cout<<"********************************************************";
	cout<<"\n\n\t\tEnter first Number: "; cin>>num1;  //first input from user
	cout<<"\n\t\tEnter second Number: "; cin>>num2;   //second input from user
	cout<<"\n\t\tEnter third Number: "; cin>>num3;    //third input from user
	cout<<"\n\t\tEnter fourth Number: "; cin>>num4;   //fourth input from user
	cout<<endl<<endl;
	cout<<"********************************************************\n\n";  // used for better display
	if (num1<num2 && num1>num3 && num1>num4)
	{
	cout<<"\t\t"<<num1<<" is second maximum number among mentioned numbers";
	}
	else if (num1<num3 && num1>num2 && num1>num4)
    {
	    cout<<"\t\t"<<num1<<" is second maximum number among mentioned numbers";
	}
	else if (num1<num4 && num1>num2 && num1>num3)
	{
		cout<<"\t\t"<<num1<<" is second maximum number among mentioned numbers";
	}
	else if (num2<num1 && num2>num3 && num2>num4)
	{
		cout<<"\t\t"<<num2<<" is second maximum number among mentioned numbers";
	}
	else if (num2<num3 && num2>num1 && num2>num4)
	{
		cout<<"\t\t"<<num2<<" is second maximum number among mentioned numbers";
	}
	else if (num2<num4 && num2>num1 && num2>num3)
	{
		cout<<"\t\t"<<num2<<" is second maximum number among mentioned numbers";
	}
	else if (num3<num1 && num3>num2 && num3>num4)
	{
		cout<<"\t\t"<<num3<<" is second maximum number among mentioned numbers";
	}
	else if (num3<num2 && num3>num1 && num3>num4)
	{
		cout<<"\t\t"<<num3<<" is second maximum number among mentioned numbers";
	}
	else if (num3<num4 && num3>num1 && num3>num2)
	{
		cout<<"\t\t"<<num3<<" is second maximum number among mentioned numbers";
	}
	else if (num4<num1 && num4>num2 && num4>num3)
	{
			cout<<"\t\t"<<num4<<" is second maximum number among mentioned numbers";
	}
	else if (num4<num2 && num4>num3 && num4>num1)
	{
		cout<<"\t\t"<<num4<<" is second maximum number among mentioned numbers";
	}
	else if (num4<num3 && num4>num2 && num4>num1)
	{
		cout<<"\t\t"<<num4<<" is second maximum number among mentioned numbers";
	}
	
    return 0;
}
