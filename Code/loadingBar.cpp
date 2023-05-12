#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\tLoading ";
	char x =219;
	for(int i=0; i<35; i++)
	{
		cout << x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	
	return 0;
	
}
