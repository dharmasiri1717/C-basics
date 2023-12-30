#include <iostream>
#define NL '\n'
using namespace std;

int main(){
    //define array
    int marks[10] = {40,44,99,71,24,54,80,90,94,31};

    //calculate length 
    int memSize = sizeof(marks); //size of memory address
    int arrSize = sizeof(marks[5]); // size of one element
    int lenSize = memSize / arrSize; // length

    /*cout << "Memory size of array: " << memSize << NL;
    cout << "Array size: " << arrSize << NL;
    cout << "Length of array: " << lenSize;*/
    
    //loop for checking array
    /*for(int i = 0; i < 10; i++)
    {
        cout << marks[i] << " ";
    }*/

    //define max marks
    int max = marks[0];
    int position = 0;

    for(int i = 1; i < lenSize; i++)
    {
        if(max < marks[i])
        {
            max = marks[i];
            position = i;
        }// no else
    }

    cout << "Maximum: " << max << NL;
    cout << "Index Number: " << position << NL ;

    return 0;
}