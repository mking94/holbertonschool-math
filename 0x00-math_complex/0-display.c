#include <stdio.h>
void display_complex_number(complex c)
{
	if (c.im == 0)
	printf("%0.f\n", c.re);
	else
	printf("%0.f + %0.f i\n", c.re, c.im);
}
