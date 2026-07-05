#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    vector <int> s;
    int SPcounter = 0;
    int counter = 1, MAX = 0;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        s.push_back(input);
        if (s[i] == s[i - 1] && i != 0) {
            SPcounter++;
        }
    }
    if (n == SPcounter) {
        MAX = 1;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (s[i] > s[i - 1] && i != 0) {
                counter++;
            }
            else {
                if (counter > MAX) {
                    MAX = counter;
                }
                counter = 1;
            }
        }
    }
    cout << MAX;
}
