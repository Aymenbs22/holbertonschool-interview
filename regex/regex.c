#include <stdbool.h>
/**
 * regex_match - checks whether a given pattern matches a given string
 * @str: str is the string to scan
 * @pattern: pattern is the regular expression
 * Return: return 1 if the pattern matches the string, or 0 if it doesn’t
*/
int regex_match(const char *str, const char *pattern)
{
	if (*pattern == '\0')
	{
		return (*str == '\0');
	}

	bool currentMatch = (*str) && (*pattern == *str || *pattern == '.');

	if (*(pattern + 1) == '*')
	{
		return (regex_match(str, pattern + 2) ||
		(currentMatch && regex_match(str + 1, pattern)));
	}
	else
	{
		return (currentMatch && regex_match(str + 1, pattern + 1));
	}
}
