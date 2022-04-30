// SuperDigit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int superDigit(string, int);

int main()
{
	cout << superDigit(" 9875", 4) << endl;
	return EXIT_SUCCESS;
}

int superDigit(string n, int k) {

	unsigned long long sum = 10ULL;

	while (sum > 9)
	{
		sum = 0;

		for (int i = 0; i < n.length(); i++)
		{
			if (n[i] >= '0' && n[i] <= '9')
			{
				int num = stoi(n.substr(i, 1));
				sum += num;
			}
		}

		if (k > 0)
		{
			sum *= k;
			k = 0;
		}

		n = to_string(sum);
	}

	return sum;
}
