// Palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number to check palindrome or not: " << endl;
	int n, num, digit, rev = 0;
	cin >> num; // 919
	n = num;
	while (num != 0)
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;

	}
	if (n == rev)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Not Palindrome" << endl;
	}

    return 0;
}

