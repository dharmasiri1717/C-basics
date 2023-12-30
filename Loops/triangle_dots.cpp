#include <iostream>
#define NL '\n'
using namespace std;

int main(){

	for(int i = 0; i <6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			if(i == 0 || i == 5 || j < 1 || j > 4 || (i == 2 || i == 3) && (j ==2 || j == 3) )
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << NL;
	}


	return 0;
}