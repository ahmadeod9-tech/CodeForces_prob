#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums ;
  vector<int> keys ;
  vector<int> sub = nums ;
  int counter = -1 ;
  int numOfSubs = 0 ;
  bool same = false ;
  int l = 1 ;
  int n, k, x, fortest = 0 ;
  cin >> n >> k ;
  for (int i = 0 ; i < n ; i++)
  {
    cin >> x ;
    nums.push_back(x);
    if (nums[i] != nums[i - 1] && i - 1 != -1) {
      same = true ;
    }
    if(fortest < k){
        if (nums[i] == nums[i - 1] && i - 1 > 0) { continue ; }
            keys[i] = nums[i] - 1 ;
            fortest++ ;
    }
  }
  //specials cases
  if (k == 1) {
    if(same){
        cout << -1 ;
    }
    else if(same == false){
        cout << 1 ;
    }
    return 0 ;
  }
  //general
  x = nums[n-1] ;
  int temp = x ;
  for (;;)
  {

    x = x - keys[k - l] ;

    if (x < 0) {
        x = temp ;
        l++ ;
        continue ;
    }

    temp = x ;
    if (l == k && keys[l] == 0) { break; }

    numOfSubs++ ;

    if(x == 0){
        break ;
    }

  }

  l = 0 ;

  for (int i = 0 ; i < numOfSubs ; i++){

      for (int j = 0 ; j < n ; j++){

           if(sub[j] == 0){
               continue ;
           }

           for (int q = 0 ; q < numOfSubs ; q++){

               if (keys[q] == sub[j]){
                   sub[j] = 0 ;
                   break ;
               }

               if (keys[q] > sub[j] && q - 1 >= 0){
                   sub[j] = sub[j] - keys[q - 1] ;
                   break ;
               }
           }
       }
  }
  if (all_of(sub.begin(), sub.end(), [](int x){ return x == 0; })){
    if(counter == -1)
        counter = 0;
    counter++ ;
  }

  cout << counter ;
    return 0;
}
