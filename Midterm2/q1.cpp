#include <iostream>
using namespace std;

/*Write an application that prints the unique numbers found in the given array. If a number appears multiple times in the array, it should only be printed once. For example, given the following array:
int u[10] = {17, 19, 23, 19, 17, 23, 29, 17, 29, 23};
The application should print: 17, 19, 23, 29.*/

int main() {
    
    int u[10] = {17, 19, 23, 19, 17, 23, 29, 17, 29, 23};
    bool seenBefore;

    for(int i = 0; i < 10; i++)
    {
        seenBefore = false;
        for(int j = 0; j < i; j++) 
        {
            if(u[i] == u[j])
            {
                seenBefore = true;
                break;
            }
        }

        if(!seenBefore)
            cout << u[i] << " ";
    }


    return 0;
}