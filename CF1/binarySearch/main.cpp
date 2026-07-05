#include <iostream>

using namespace std;
int binarySearch(int Number[],int target){
    int hi = Number.length() -1;
    int lo = 0;
    while (lo <= hi){
        int mid = (hi + lo)/2;
        if(Number[mid] == target){
            return mid;
        }
        else if (Number[mid] > target){
            hi = mid - 1;
            continue;
        }else if(Number[mid] < target){
            lo = mid + 1;
        }
    }
    return -1;
}
int main()
{

    return 0;
}
