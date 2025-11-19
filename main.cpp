#include <iostream>

/*Write a function that takes two parameters: the address of the first element of an array and the 
length of the array. The function should return the address of the element containing the minimum value.*/
using namespace std;

int* minVal(int arr[], int n)
{
    int k = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[k])
            k = i;
    }

    return &arr[k];
}

int main()
{
    int ra[5] = {5, 1, 2, 3, 4};
    int *min = minVal(ra, 5);

    cout << *min << endl;

    return 0;
}
