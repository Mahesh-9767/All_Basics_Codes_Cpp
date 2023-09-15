//Program:-Add two numbers of the integer type
//Date:15 sep 2023
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the values:";
	cin>>a>>b;
	c=a+b;
	cout<<"The addition is:"<<c;
	return 0;
}

//Program:-Add two numbers of the real Number
//Date:15 sep 2023
#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter the values:";
	cin>>a>>b;
	c=a+b;
	cout<<"The addition is:"<<c;
	return 0;
}

//Program:-ussing function
//Date:15 sep 2023
//Add two numbers in C++ using a function
//Let's use this approach to create a program that adds two numbers given by the user. The output of this program is totally the same as the output of the very first program given over here.

#include<iostream>
using namespace std;

int addFun(int, int);
int main()
{
    int num1, num2, add;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    add = addFun(num1, num2);
    cout<<"\nResult = "<<add;
    cout<<endl;
    return 0;
}
int addFun(int a, int b)
{
    return (a+b);
}
