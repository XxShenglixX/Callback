#include "Integer.h"

void addInt(void *a,void *b)
{
	int *v1 = (int *)a;
	int *v2 = (int *)b;
	
	*v1 = *v1 + *v2 ;
}

void mulInt(void *a,void *b)
{
	int *v1 = (int *)a;
	int *v2 = (int *)b;
	
	*v1 = *v1 * *v2 ;
}

void assignInt(void *a,void *b)
{
	int *v1 = (int *)a;
	int *v2 = (int *)b;
	
	*v1 = *v2 ;
}