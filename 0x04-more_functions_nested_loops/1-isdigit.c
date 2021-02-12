#include "holberton.h"
/**
 * _isdigit -checks whether a character is upper case or not
 * @c: takes int parameter
 * Return: 1 if digit and 0 if otherwise
 */
int _isdigit(int c)
{
  if(c > 47 && c < 58)
    return (1);
  else
    return (0);
}
