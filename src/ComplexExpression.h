#ifndef ComplexExpression_H
#define ComplexExpression_H

int complexExpression(int x, int y);
void _complexExpression(
						 void *x,
						 void *y,
						 void *result,
						 void (*add)(void *,void *),
						 void (*mul)(void *,void *),
						 void (*assign)(void *, void*)
						);

#endif // ComplexExpression_H
