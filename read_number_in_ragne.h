#include <iostream>
using namespace std;

int ReadNumberInRange(string msgToUser, int from, int to){


    int number = 0;
    do
    {
        cout << msgToUser ;
        cin >> number;

    } while (number < from || number > to);

    return number;
    
}