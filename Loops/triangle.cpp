#include <iostream>
#define NL '\n'
using namespace std;

int main(){

	int space, rows = 4;

	for(int i = 1, k = 0; i <= rows; i++, k = 0) //i = 1,2,3,4,5
	{
 
		for(space = 1; space <= rows - i; space++)
		{
			cout << "  ";
		}

		while(k != 2 * i - 1)
		{
			cout << "* ";
			k++;
		}
		cout << NL;
	}
	//2nd 
	rows = 3;
	for(int i = 1, k = 0; i <= rows; i++, k = 0) //i = 1,2,3,4,5
	{
 
		for(space = 1; space <= rows - i; space++)
		{
			cout << "  ";
		}

		while(k != 2 * (i+1) - 1)
		{
			cout << "* ";
			k++;
		}
		cout << NL;
	}
	//3rd
	//2nd 
	rows = 3;
	for(int i = 1, k = 0; i <= rows; i++, k = 0) //i = 1,2,3,4,5
	{
 
		for(space = 1; space <= rows - i; space++)
		{
			cout << "  ";
		}

		while(k != 2 * (i+1) - 1)
		{
			cout << "* ";
			k++;
		}
		cout << NL;
	}
	//square; 
	for(int i = 0; i < 3; i++)
	{
 		cout << "   ";
		for(int j = 0; j < 3; j++)
		{
			cout << " *";
		}
		cout << NL;
	}
	return 0;
}