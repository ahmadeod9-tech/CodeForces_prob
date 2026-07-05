#include <iostream>

using namespace std;

int main()
{
    int statments ;
    cin >> statments;
    string theInput;
    int X = 0;
    for (int i = 0 ; i < statments ; i++){
            cin >> theInput;
            if (theInput == "X++" || theInput == "++X")
                X++;
            else
                X--;
    }
    cout << X;
    return 0;
}
