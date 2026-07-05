#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
	for (int i = 0; i < n; i++)
	{
		int r, g, b;
		int sum = 0;
		int avg = 0;
		cin >> r >> g >> b;
		if (r==b&&b==g)
		{
			cout << "Yes" << endl;
		}
		else if(r+g<b-1|| b + g < r - 1 || r + b < g - 1  )
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}
	}
}
