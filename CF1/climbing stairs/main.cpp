#include <iostream>

using namespace std;
int claimbing(int n){
    if (n <= 2)
        return n ;
    int prev1 = 2 ;
    int prev2 = 1 ;
    for(int =  3 ; i < n ; i++){
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}
int main()
{
    int n ;
    cin >> n;
    cout << claimbing(n);
    return 0;
}
