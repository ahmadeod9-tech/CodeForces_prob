#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, d, k=0;
	cin >> a >> b >> d;
	bool found = false;

	while (true)
	{
		if (a + (b * k) % d == 0 && a * pow(b, k )% d == 0 ){
			found=true;
			
		}
		if (found) { break; };
		k++;
	}
	if (found)cout << k;
	else
	{
		cout << -1;
	}
	cout << pow(5, 2);
}