#include <iostream>
using namespace std;
int main()
{
char OP;
int a, b;
cout << "Enter operator  : ";
cin >> OP;
cout << "Enter two numbers: ";
cin >> a >> b;
switch(op)
{
case '+':
cout << "Result: " << a + b;
break;
case '-':
cout << "Result: " << a - b;
break;
case '*':
cout << "Result: " << a * b;
break;
case '/':
cout << "Result: " << a / b;
break;
default:
cout << "Invalid operator!";
}
return 0;
