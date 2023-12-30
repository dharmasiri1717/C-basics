#include <iostream>
#define NL '\n'
using namespace std;

int main(){

	int x = 5;
	for(int i = 1; i <= 5; i++)
	{
		for(int m = 1; m < x; m++)
		{
			cout << " ";
		}
		x -= 1;
		for(int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << NL;
	}


	return 0;
}