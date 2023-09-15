//Program:- Take a integer input from user 
//Date:14 sep 2023
#include<iostream>
using namespace std;
int main()
{
	int val;
	cout<<"Enter The Value:";
	cin>>val;
	cout<<"Your Entered value is:"<<val;
	return 0;
}

//Program:- Take a character input from user 
//Date:15 sep 2023
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a charcter:"<<endl;
	cin>>ch;
	cout<<"Your Enterd Char:"<<ch;
	return 0;
}

//Program:- Take a string input from user 
//Date:15 sep 2023
#include<iostream>
using namespace std;
int main(){
char str[5];
cout<<"Enter a string:"<<endl;
gets(str);    // this use for to craete a spaces
cin>>str;
cout<<"Your enterd string is:"<<str;
return 0;
}
