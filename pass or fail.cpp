#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int marks;
	cout<<"enter the student marks";
	cin>>marks;
	
	if(marks>50)
	{
	cout<<"pass";
	}
	else
	{
	cout<<"fail";
	}
	
	return 0;
}
