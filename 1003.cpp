#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
int n, b, p, t, a = 0, s = 0, i = 0; 
	string input;
	vector<string> test;
	cin >> n;
	while (n--)
	{
		cin >> input;
		test.push_back(input);
	}
	for (auto &tempString : test)
	{
		for (auto tempChar : tempString)
		{
			if (tempChar == 'P')
			{
				p = i;
				s++;
			}
			else if (tempChar == 'A')
				a++;
			else if (tempChar == 'T')
			{
				t  = i;
				s++;
			}
			else
			{
				cout << "NO" << endl;
				s = 0;
				break;
			}
			i++;
		}
		b = i-1;
		if (s == 0)
			continue;
		else
		{
			if ((t-p-1)*p == (b-t) && a != 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			s = 0; a = 0; i = 0;
		}
	}
		system("pause");
		return 0;
}
