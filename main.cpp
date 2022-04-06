#include <iostream>
#include <string>
using namespace std;

bool IsKPeriodic(string str, int K)
{
	//cout << "Size str: " << str.size() << endl;
	if ((str.size() % K) != 0)
	{
		cout << "K can't be periodic for str\n";
		return false;
	}
	string subStr;
	subStr.append(str, 0, K);
	//cout << "SubStr: " << subStr << endl;
	//cout << "Size subStr: " << subStr.size() << endl;
	for (int check = 0; check < str.size() - 1; check = check + K)
	{
		if (str.substr(check, K) != subStr)
		{
			//cout << "Not equal\n";
			return false;
		}
		//else
			//cout << "Equal\n";
	}
	return true;
}

int main()
{
	cout << "Enter string: ";
	string str;
	cin >> str;
	while (true)
	{
		cout << "Enter K(>0): ";
		int K;
		cin >> K;

		if (K == 0)
		{
			cout << "Try again\n";
			continue;
		}

		if (IsKPeriodic(str, K))
			cout << "Str is periodic by K\n\n";
		else
			cout << "Str isn't periodic by K\n\n";
	}

	return 0;
}