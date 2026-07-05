#include <iostream>
#include <vector>
using namespace std;
int Jumps(string s){

    s = "R" + s + "R" ;
    int Max = 0 ;
    int lastR = 0 ;
    for(int i = 1 ; i < s.length() ; i++){
        if(s[i] == 'R'){
            int jump = i - lastR ;
            Max = max(jump , Max) ;
            lastR = i ;
        }
    }
    return Max ;
}
int main()
{
    int t;
    cin >> t;
    string s;
    int solves [t];
    for(int i = 0 ; i < t ; i++){
        cin >> s;
        solves[i] = Jumps(s) ;
    }
    for ( int x : solves){
        cout << x << endl ;
    }
    return 0;
}
