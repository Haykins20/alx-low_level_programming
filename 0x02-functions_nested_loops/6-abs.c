#include "main.h"

/**
 *_abs - compute the absloute value
 * of an interger.
 *
 * @i:inpute number as an interger.
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
