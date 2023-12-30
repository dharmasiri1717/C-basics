#include <iostream>
#define NL '\n'
#include <string>
using namespace std;

int main(){
	string cars[4] = {"Lancer","gtr","dodge","supra"};

	//define variables
	string cname = "gtr";
	//int mark = cars[0];
	bool found = false;

	for(int m = 0; m < 4; m++)
	{
		if(cname = cars[m])
		{
			cout << "In stock";
		}
		else
		{
			cout << "No stock";
		}

	}
}