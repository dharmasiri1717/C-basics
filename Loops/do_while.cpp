#include <iostream>
#define NL '\n'
using namespace std;

int main(){

	int number = 5969;
	int sum = 0;

	for(int i = 0; i < 4; i++)
	{
		sum += number % 10;
		number /= 10;
	}
	cout << sum << NL;

	return 0;
}