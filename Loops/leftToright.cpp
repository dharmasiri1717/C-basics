#include <iostream>
#define NL '\n'
using namespace std;

int main(){

	int space, rows = 4;

	//for lines
	for(int i = 1, k = 0; i <= rows; i++, k = 0)
	{
		//SPAce liens
		for(space = 1; space <= rows - i; space++)
		{
			cout << " ";
		}

		//print stars
		while(k != 2*i - 1)
		{
			cout << "*";
			k++;
		}
		cout << NL;
	}
	
	return 0;
}