#include <iostream>
#include <math.h>

using namespace std;


float num1;
float num2;
char op;
char cont;

float add (float a, float b)
{
	float c;
	c=a+b;
	return c;
}
float subtract (float a, float b)
{
	float c;
	c=a-b;
	return c;	
}
float multiply (float a, float b)
{
	float c;
	c=a*b;
	return c;	
}
float divide (float a, float b)
{
	float c;
	c=a/b;
	return c;	
}
float mod (float a, float b)
{
	float c;
	c=fmod(a,b);
	return c;
}
float square (float a)
{
	float b;
	b=sqrt(a);
	return b;
}

int main() 
{
do
{
cout << "Enter first number: " << endl;
cin >> num1;
cout << "Enter either +, -, *, /, %, or Q (for square roots) " << endl;
cin >> op;

 switch(op)
    {
	case '+':
		cout << "enter second number: " << endl;
		cin >> num2;
		cout << add(num1,num2) << endl;
		cout << "would you like to calculate another number? y/n" << endl;
		cin >> cont;
        break;

    case '-':
		cout << "enter second number: " << endl;
		cin >> num2;
		cout << subtract(num1,num2) << endl;
		cout << "would you like to calculate another number? y/n" << endl;
		cin >> cont;
        break;

    case '*':
		cout << "enter second number: " << endl;
		cin >> num2;
		cout << multiply(num1,num2) << endl;
		cout << "would you like to calculate another number? y/n" << endl;
		cin >> cont;
        break;

    case '/':
		cout << "enter second number: " << endl;
		cin >> num2;
		cout << divide(num1,num2) << endl;
		cout << "would you like to calculate another number? y/n" << endl;
		cin >> cont;
        break;
		
	case '%':
		cout << "enter second number: " << endl;
		cin >> num2;
		cout << mod(num1,num2) << endl;
		cout << "would you like to calculate another number? y/n" << endl;
		cin >> cont;
		break;
		
	case 'Q':
		cout << square(num1) << endl;
		cout << "would you like to calculate another number? y/n" << endl;
		cin >> cont;
		break;

    default:
        cout << "Whoops! Looks like you broke something!";
		cout << " " << endl;
		cout << "would you like to calculate another number? y/n" << endl;
		cin >> cont;
        break;
    }
}
while (cont == 'y');
	return 0;
} 