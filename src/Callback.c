#include "Callback.h"
#include "Float.h"
#include "Integer.h"
#include <stdio.h>

int myMain()
{
	int a = 3, b = 5 , rInt ;
	float c = 9.4, d = 2.67, rFloat ;

	void (*ptrFuncAdd)(void *,void *);
	
	addInt(&a,&b);
	printf("addInt(3,5) = %d\n",a);
	addFloat(&c,&d);
	printf("addFloat(9.4,2.67) = %f\n",c);
	
	a = 3;
	ptrFuncAdd = addInt ;
	ptrFuncAdd(&a,&b);
	printf("ptrFuncAdd(3,5) = %d\n",a);
	
	c = 9.4;
	ptrFuncAdd = addFloat ;
	ptrFuncAdd(&c,&d);
	printf("ptrFuncAdd(9.4,2.67) = %f\n",c);
	
	return 0;
}