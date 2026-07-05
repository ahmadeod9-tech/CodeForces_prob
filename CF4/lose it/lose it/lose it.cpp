#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
	int n, counter = 0;
	cin >> n;
	if (n % 6 != 0) {
		counter = 0;

	}
	else {
		int v = n / 6;
		unordered_map <int, int> s;
		vector <int> nums;
		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			nums.push_back(temp);
			if (s.count()) {

			}
			s.insert(temp, 1);
		}
	}

}