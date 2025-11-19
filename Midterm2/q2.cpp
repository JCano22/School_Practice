#include <iostream>
using namespace std;

/*Write an application that prompts the user to enter text and then detects the position of the second occurrence of the 'w' symbol in this text. If such 'w' symbol is not found, the application should print -1. Only null terminated strings should be used. Don't use any string library function.*/

int main()
{
    char userTxt[100];
    int cnt = 0, i = 0;

    cout << "Enter text: ";
    cin.getline(userTxt, 100);

    while(userTxt[i] != '\0')
    {
        if(userTxt[i] == 'w')
            cnt++;

        if(cnt == 2)
            break;

        i++;
    }

    if(cnt == 2)
        cout << "index of 2nd 'w': " << i << "\n";
    else
        cout << "-1\n";

}