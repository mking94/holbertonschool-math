#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
typedef struct complex {
	float re;
	float im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif
