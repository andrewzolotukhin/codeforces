#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (
		    (s[i] == 'A' || s[i] - 32 == 'A') ||
		    (s[i] == 'O' || s[i] - 32 == 'O') ||
		    (s[i] == 'Y' || s[i] - 32 == 'Y') ||
		    (s[i] == 'E' || s[i] - 32 == 'E') ||
		    (s[i] == 'U' || s[i] - 32 == 'U') ||
		    (s[i] == 'I' || s[i] - 32 == 'I'))
		{
			continue;
		}
		std::cout << "." << (char)((s[i] < 'a') ? (s[i] + 32) : s[i]);
	}

	std::cout << std::endl;
}