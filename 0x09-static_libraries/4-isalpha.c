#include"main.h"
/**
*_isalpha - looks for alphabetic character
*@c: the character to be evaluated
*Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
