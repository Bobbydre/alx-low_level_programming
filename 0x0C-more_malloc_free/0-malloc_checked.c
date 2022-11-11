#include<string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _isdigit - checks if character is digit
* @c: the character to check
*
* Return: 1 if digit, 0 otherwise
*/
int _isdigit(int c)
{
		return (c >= '0' && c <= '9');
}
