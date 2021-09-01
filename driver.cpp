#include <iostream>
#include <stdlib.h>

using namespace std;

int* findIndexes(int* list, int target)
{
    static int output [2];

    for(int i = 0; i < sizeof(list); i++)
    {
        for(int j = i + 1; j < sizeof(list); j++)
        {
            if(list[i] + list[j] == target)
            {
                output[0] = i;
                output[1] = j;
                return output;
            }
        }
    }
}

int main(int argc, char* argv[])
{
    int input[]  = {2,7,11,15};
    int *theOutput = findIndexes(input, 9);
    cout << "Example 1 Output: " << endl;
    for(int i = 0; i < 2; i++)
    {
        cout << theOutput[i] << endl;
    }
    cout << "///////////////////" << endl;


    int input2[]  = {3,2,4};
    int *theOutput2 = findIndexes(input2, 6);
    cout << "Example 2 Output: " << endl;
   for(int i = 0; i < 2; i++)
    {
        cout << theOutput2[i] << endl;
    }
    cout << "///////////////////" << endl;



    int input3[]  = {3,3};
    int *theOutput3 = findIndexes(input3, 6);
    
    cout << "Example 3 Output: " << endl;
    for(int i = 0; i < 2; i++)
    {
        cout << theOutput3[i] << endl;
    }
    cout << "///////////////////" << endl;
}

