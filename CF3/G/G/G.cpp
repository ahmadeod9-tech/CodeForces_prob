
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
   
    if (m % 2 != 0 && n % 10 == 0) {
        cout << "Akshat";
    }
    else if (n == 3 || m == 4) {
        cout << "Akshat";
    }
    else if (n % 2 != 0 && m % 10 == 0) {
        cout << "Akshat";
    }
    else if (n == 1 || m == 1) {
        cout << "Akshat";
    }
    else if ((n * m) % 2 == 0) {
        cout << "Malvika";
    }
    else if ((n * m) % 2 != 0) {
        cout << "Akshat"; 
    }
}
