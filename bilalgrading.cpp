#include<iostream>
using namespace std;
int main()
{
	int marks;
	char grade;
	cout<<"enter your marks  ";
	cin>>marks;
	switch(marks/10)
	{
		case 10:
			cout<<"A"<<endl;
			break;
		case 9:
			cout<<"B"<<endl;
			break;
        case 8:
			cout<<"C"<<endl;
			break;
        case 7:
			cout<<"D"<<endl;
			break;
   	     case 6:
			cout<<"E"<<endl;
			break;
        default:
			cout<<"F"<<endl;
			break;
   
	}
}
