#include "Float.h"

void addFloat(void *a,void *b)
{
	float *v1 = (float *)a;
	float *v2 = (float *)b;
	
	*v1 = *v1 + *v2 ;
}

void mulFloat(void *a,void *b)
{
	float *v1 = (float *)a;
	float *v2 = (float *)b;
	
	*v1 = *v1 * *v2 ;
}

void assignFloat(void *a,void *b)
{
	float *v1 = (float *)a;
	float *v2 = (float *)b;
	
	*v1 = *v2 ;
}
