#include <iostream>
#define NL '\n'
using namespace std;

int main(){
    //define array
    int marks[10] = {40,44,56,71,24,54,80,90,94,31};
    
    //loop for checking array
    /* for(int i = 0; i < 10; i++)
    {
        cout << marks[i] << " ";
    } */

    //define min marks
    int min = marks[0];
    int position = 0;

    for(int i = 1; i < 10; i++)
    {
        if(min > marks[i])
        {
            min = marks[i];
            position = i;
        }// no else
    }

    cout << "Minimum: " << min << NL;
    cout << "Index Number: " << position;

    return 0;
}