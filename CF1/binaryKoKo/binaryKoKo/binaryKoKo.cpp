#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h; 
    int piles[100000]; 

    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

   
    int left = 1, right = piles[0];
    for (int i = 1; i < n; i++) {
        if (piles[i] > right) right = piles[i];
    }

    int ans = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        long long hours = 0;
        for (int i = 0; i < n; i++) {
            hours += (piles[i] + mid - 1) / mid; 
        }

        if (hours <= h) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    while (true)
    {
        cout << "|||||||||||||||||" << endl;
    }

    cout << ans << endl;
    return 0;
}