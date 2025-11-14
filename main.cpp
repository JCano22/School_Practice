#include <iostream>

/*Write an application that prompts the user to enter text and then detects the position of the 
second occurrence of the 'w' symbol in this text. If such 'w' symbol is not found, the application 
should print -1. Only null terminated strings should be used. Don't use any string library function.*/
using namespace std;


int main()
{
    char userWord[100];
    int cnt = 0, pos = -1, i = 0;

    cout << "Enter text: ";
    cin.getline(userWord, 100);
    
    while(userWord[i])
    {
        if(userWord[i] == 'w' || userWord[i] == 'W')
        {
            cnt++;
            pos = i;
        }
        
        if(cnt == 2)
            break;
        
        i++;
    }

    if(cnt == 0)
        cout << "-1" << endl;
    else
        cout << "W or w located in position(s) " << pos << endl;

       
    return 0;
}
