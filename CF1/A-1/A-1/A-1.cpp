#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
	for (int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		int n = s.length();
		if (n % 2 != 0) { cout << -1 << endl; continue; }

		int a=0;
		int op = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '(') {
				a++;
			}
			else
			{
				a--;
				if (a < 0) {
					op++;
					a = 0;
				}
			}
			
		}
		cout << op <<endl;
	}
	
}