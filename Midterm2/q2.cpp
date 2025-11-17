#include <iostream>
using namespace std;

/*Write an application that prompts the user to enter text and then detects the position of the second occurrence of the 'w' symbol in this text. If such 'w' symbol is not found, the application should print -1. Only null terminated strings should be used. Don't use any string library function.*/

int main()
{
    char userWrd[100];
    int i = 0, cnt = 0;

    cout << "Enter text: ";
    cin.getline(userWrd, 100);

    while(userWrd[i] != '\0')
    {
        if(userWrd[i] == 'w')
            cnt++;
        
        if(cnt == 2)
            break;
        i++;
    }

    if(cnt < 2)
        cout << "-1" << endl;
    else
        cout << "The second 'w' is located in index " << i << endl;
}