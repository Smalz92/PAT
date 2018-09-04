#include <iostream>
#include <string>
using namespace std;
void static exchange_pinyin(int num);
int main()
{
	string input;
	unsigned int sum=0;
	int i,j = 0;
	int num[50];
	cin >> input;
	for (i = 0; i < input.length(); i++)
	{
		sum += input[i] - '0';
	}	
	while (sum)
	{		
		num[j] = sum % 10;
		sum = sum / 10;
		j++;
	}
	for (j = j - 1; j >= 0; j--)
	{
		if (j == 0)
		{
			exchange_pinyin(num[j]);
		}
		else
		{
			exchange_pinyin(num[j]);
			cout << " ";
		}
	}
	system("pause");
	return 0;
}
void static  exchange_pinyin(int num)
{
	switch (num)
	{
	case 0: cout << "ling"; break;
	case 1: cout << "yi"; break;
	case 2: cout << "er"; break;
	case 3: cout << "san"; break;
	case 4: cout << "si"; break;
	case 5: cout << "wu"; break;
	case 6: cout << "liu"; break;
	case 7: cout << "qi"; break;
	case 8: cout << "ba"; break;
	case 9: cout << "jiu"; break;
	}
}

