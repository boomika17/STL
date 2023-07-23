#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void longestPalindrome(string str)
{
	int n = str.size();
	int max = 1, start = 0;

	for (int i = 0; i < str.length(); i++) {
		for (int j = i; j < str.length(); j++) {
			int flag = 1;

			for (int k = 0; k < (j - i + 1) / 2; k++)
				if (str[i + k] != str[j - k])
					flag = 0;

			if (flag && (j - i + 1) > max) {
				start = i;
				max = j - i + 1;
			}
		}
	}

	for (int i = start; i <= start+max-1; ++i)
		cout << str[i];
}

int main()
{
	string str = "aadadadbc";
	longestPalindrome(str);
	return 0;
}
