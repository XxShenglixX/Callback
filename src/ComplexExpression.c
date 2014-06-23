#include "ComplexExpression.h"
#include <stdio.h>

int complexExpression(int x, int y)
{
	return x+y*x ;
}

void _complexExpression(
						 void *x,
						 void *y,
						 void *result,
						 void (*add)(void *,void *),
						 void (*mul)(void *,void *),
						 void (*assign)(void *, void*)
						)
{
	mul(y,x);
	add(x,y);
	assign(result,x);
}