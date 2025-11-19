#include <iostream>
using namespace std;

int min2(int a, int b);
int min3(int a, int b, int c);

/*Write an application where three arrays are defined. The size of the third array is equal to the sum of the sizes of the first and second arrays. The application should merge the values from the first and second arrays into the third array. For example, if the first array is defined as int u[] = {13, 17, 29} and the second array as int w[] = {23, 37}, and the third array is declared as int z[5], then application should write into z array the following numbers: 13, 17, 29, 23, 37*/
int main()
{
    int u[] = {13, 17, 29};
    int sizeU = sizeof(u)/sizeof(int);
    int w[] = {23, 37};
    int sizeW = sizeof(w)/sizeof(int);

    int arr[sizeU + sizeW];
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < sizeU; i++)
    {
        arr[i] = u[i];
    }

    for(int i = 0; i < sizeW; i++)
    {
        arr[i + sizeU] = w[i];
    }

    for(int l: arr)
    {
        cout << l << " ";
    }
    cout << endl;
    return 0;
}
