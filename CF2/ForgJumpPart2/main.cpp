#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    bool can = true ;
    int oldK = 0 , newK = 0 ;
    int stones [n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> stones[i] ;
        if(i - 2 >= 0 && ( stones[i] - stones[i - 2] == oldK + 1 || stones[i] - stones[i - 2] == oldK ) ){
            newK = stones[i] - stones[i - 2];
            continue ;
        }

        if(i - 2 >= 0){
            oldK = newK;
        }

        if(i - 1 >= 0)
            newK = stones[i] - stones[i - 1];
        if(newK == oldK + 1 || newK == oldK - 1 || newK == oldK){
            continue ;
        }
        can = false ;
        break ;
    }
    if (can)
        cout << "TRUE" ;
    else
        cout << "FALSE" ;


    return 0;
}
