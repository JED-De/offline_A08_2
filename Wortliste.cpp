#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabezeile[5];
	unsigned int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "Eingabezeile = ? ";
		getline(cin, eingabezeile[i]);
		if (eingabezeile[i] == "")
		{
			break;
		}
	}
	for (unsigned int j = 0; j < i; j++)
	{
		for (unsigned int k = 0; k < eingabezeile[j].size(); k++)
		{
			if (eingabezeile[j].at(k) >= 'a' && eingabezeile[j].at(k) <= 'z' || eingabezeile[j].at(k) >= 'A' && eingabezeile[j].at(k) <= 'Z')
			{
				for (; k < eingabezeile[j].size(); k++)
				{
					if (eingabezeile[j].at(k) >= 'a' && eingabezeile[j].at(k) <= 'z' || eingabezeile[j].at(k) >= 'A' && eingabezeile[j].at(k) <= 'Z')
					{
						cout << eingabezeile[j].at(k);
					}
					else
					{
						break;
					}
				}
				cout << endl;
			}
		}

	}
	system("PAUSE");
	return 0;
}