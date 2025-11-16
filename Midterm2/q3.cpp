#include <iostream>
using namespace std;

/*Write an application where three arrays are defined. The size of the third array is 
equal to the sum of the sizes of the first and second arrays. The application should merge 
the values from the first and second arrays into the third array. For example, 
if the first array is defined as int u[] = {13, 17, 29} and the second array as 
int w[] = {23, 37}, and the third array is declared as int z[5], then application should 
write into z array the following numbers: 13, 17, 29, 23, 37.*/

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

