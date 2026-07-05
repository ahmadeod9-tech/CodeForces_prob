#include <iostream>
using namespace std;
const int n = 1000000;
int sum[n + 1];

int main() {

    for (int i = 1; i <= n; ++i) {
        for (int j = i ; j <= n; j += i) {
            sum[i] += j-1;
        }
    }


    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << sum[n] << "\n";
    }

    return 0;
}