#include <iostream>
using namespace std;

int claimbing(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return claimbing(n - 1) + claimbing(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << claimbing(n);
    return 0;
}