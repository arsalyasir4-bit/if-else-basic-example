#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x,y;
	
	cout<<"Enter the first number:";
	cin>>x;
	cout<<"Enter the second number:";
	cin>>y;
	if(x>y)
	cout<<"Result"<<x<<"x is greater";
    else if(y>x)
	cout<<"Result"<<y<<"y is greater ";
	else
	cout<<"both numbers are equal";
	return 0;
}
