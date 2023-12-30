#include <iostream>
#define NL '\n'
#define TB '\t'
using namespace std;

int main(){

    int a1[3][2] = {{1,2}, {3,4}, {5,6}};
    int a2[2][3] = {{1,2,3}, {1,2,3}};

    int sum = 0;

    for(int i = 0; i < 3; i++) //rows matrix a1
    {
        for(int j = 0; j < 3; j++) //columns matrix a2
        {
            sum = 0;
            for(int k = 0; k < 2; k++) //columns matrix a1
            {
                sum += a1[i][k] * a2[k][j];
            }
            cout << sum << TB;
        }
        cout << NL;
    }

    return 0;
}