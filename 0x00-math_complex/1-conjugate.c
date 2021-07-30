#include "holberton.h"
/**
 * conjugate - function that return return.
 * @c: The complex number.
 * return : conjugate number
 */

complex conjugate(complex c)
{
c.im *= -c.im;
return (c);
}
