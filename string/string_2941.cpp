#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int count = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=')
			{
				count++;
				i++;
			}
			else if (s[i + 1] == '-')
			{
				count++;
				i++;
			}
			else
			{
				count++;
			}
		}
		else if (s[i]=='d')
		{
			if (s[i + 1] == 'z' && s[i + 2] == '=')
			{
				count++;
				i = i + 2;
			}
			else if (s[i + 1] == '-')
			{
				count++;
				i++;
			}
			else
			{
				count++;
			}
		}
		else if (s[i] == 'l')
		{
			if (s[i + 1] == 'j')
			{
				count++;
				i++;
			}
			else
			{
				count++;
			}
		}
		else if (s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				count++;
				i++;
			}
			else
			{
				count++;
			}
		}
		else if (s[i] == 's')
		{
			if (s[i + 1] == '=')
			{
				count++;
				i++;
			}
			else
			{
				count++;
			}
		}
		else if (s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				count++;
				i++;
			}
			else
			{
				count++;
			}
		}
		else
		{
			count++;
		}
	}

	cout << count;
}