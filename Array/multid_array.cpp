#include <iostream>
#define NL '\n'
using namespace std;

int main(){

    int arr[4][4] = {{0,1,2,3}, {9,8,7,6}, {4,5,6,7}, {1,1,1,1}};

    for(int i = 0; i <4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(j == i)
            {
                cout << "*  ";
            }
            else{
                cout << arr[i][j] << "  ";
            }
        }
        cout << NL;
    }


    return 0;
}