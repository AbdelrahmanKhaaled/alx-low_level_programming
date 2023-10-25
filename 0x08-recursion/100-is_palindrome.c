#include "main.h"

/**
 * _strlen_recursion - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: checks input of function
 * @start: checks input of function
 * @end: checks input of function
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
*/

int _strlen_recursion(char *s , int start , int end)
{
	if (start == end)
		return (1);
	else if (start > end + 1 && s[start] == s[end])
		return (1);
	if (s[start] == s[end])
 		return (_strlen_recursion(s , start + 1, end - 1));
	else
		return (0);
}

/**
 * _strlen_recursion - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: checks input of function
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
*/

int is_palindrome(char *s)
{
	int start, end;

	start = 0;
	end = strlen(s) - 1;
	if (end < 0)
		return (1);
	_strlen_recursion(s , start , end );
}
