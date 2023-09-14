// Program:-Print HELLO MAHESH
//Date:14 sept 2023
#include<iostraem>
using namespace std;
int main()
{
	cout<<"HELLO MAHESH !"<<endl;
	return 0;
}

// Program:-Print 10 times "Hello Mahesh" using for loop
//Date:14 sept 2023
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=0;i<10;i++)  // for check the condition
	{
		cout<<"Hello Mahesh"<<"\n";
	}
	return 0;
}

// Program:-Print 10 time "Hello Mahesh" using while loop
// Date:14 sep 2023
Method 1:-
#include<iostream>
using namespace std;
int main()
{
	int i=0;
	while(i<10)  // check the condition
	{
		cout<<"Hello Mahesh\n";
		i++;
	}
	return 0;
}

// Method 2:-
#include<iostream>
using namespace std;
int main()
{
	int i=0;
	while((i++)<10)
	{
		cout<<"Hello Mahesh\n";
	}
	return 0;
}


// Program:-Print 10 time "Hello Mahesh" using function
// Date:14 sep 2023
#include<iostream>
using namespace std;
void printHello();
int main()
{   
    printHello();
    cout<<endl;
    return 0;
}
void printHello()
{   int i;
    for(i=0;i<10;i++)
    {
    	cout<<"Hello, World!\n";
	}
   
}
