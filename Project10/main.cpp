#include <iostream>
#include <string>

bool isKperiodic(const std::string& str, int K)
{
	if (K <= 0)
	{
		std::cerr << "Error: n should be greater than 0." << std::endl;
		return false;
	}

	int len = str.length();

	if (len % K != 0)
	{
		return false;
	}
	int block_size = len / K;

	for (int i = 0; i < len; i++)
	{
		if (str[i] != str[i % block_size])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	std::string str1 = "abcabcabc";
	int K1 = 3;

	if (isKperiodic(str1, K1))
	{
		std::cout << "String " << str1 << " is multiple of " << K1 << std::endl;
	}
	else
	{
		std::cout << "String " << str1 << " is not multiple of " << K1 << std::endl;
	}

	std::string str2 = "abcdabcab";
	int K2 = 2;

	if (isKperiodic(str2, K2))
	{
		std::cout << "String " << str2 << " is multiple of " << K2 << std::endl;
	}
	else
	{
		std::cout << "String " << str2 << " is not multiple of " << K2 << std::endl;
	}
	return 0;
}