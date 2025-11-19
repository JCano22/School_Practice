#include <iostream>
using namespace std;

/*Write a function that takes two parameters: the address of the first element of an array and the length of the array. The function should return the address of the element containing the minimum value.
*/
int* minNum(int ra[], int n)
{
    int k = 0; //index holding min value

    for(int i = 1; i < n; i++)
    {
        if(ra[i] < ra[k])
            k = i;
    }
    return &ra[k];
}
int main()
{
    int arr[4] = {10, 22, 4, 1};
    int *index = minNum(arr, 4);
    cout << "Min value: " << *index << endl;

    return 0;
}

