#include <iostream>
#define NL '\n'
using namespace std;

int main(){

    int a1[2][3] = {{0,1,2}, {9,8,7}};
    int a2[2][3] = {{0,1,2}, {9,8,7}};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
           cout << a1[i][j] + a2[i][j] << " "; 
        }
        cout << NL;
    }

    return 0;
}