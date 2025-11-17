#include <iostream>
using namespace std;

/*Write a function that takes two parameters: the address of the first element of an array and the length of the array. The function should return the address of the element containing the minimum value.
*/

int main()
{
    int arr1[5] = {13, 17, 29, 22, 50};
    int n1 = sizeof(arr1) / sizeof(int);

    int arr2[] = {23, 37};
    int n2 = sizeof(arr2) / sizeof(int);

    int arr3[n1 + n2];

    for(int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < n1 + (sizeof(arr2)/ sizeof(int)); i++)
    {   
        arr3[n1 + i] = arr2[i];
    }
    
    for(int i = 0; i < n1 + n2; i++)
    {
        cout << arr3[i];

        if(i < n1 + n2 - 1)
            cout << ", ";
        else
            cout << endl;
    } 
    return 0;
}

