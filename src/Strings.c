#include "Strings.h"
#include <string.h>
#include <stdio.h>

void joinStrings(void *a,void *b)
{
	char *str1  = (char *)a;
	char *str2	= (char *)b;
	char *result;

	strcpy(&str1[strlen(str1)],str2); //startng copy to /0
	printf("joinStrings: %s\n",str1);
}

void mulString(void *a,void *b)
{
	int i ;
	int *multiplier = (int *)a;
	char *str = (char *)b;
	char *strClone = strdup(str);
	
	for( i = 0 ; i < *multiplier-1 ; i ++ )
		strcpy(&str[strlen(str)],strClone);
		
	printf("mulStrings: %s\n",str);
}

void assignString(void *a,void *b)
{
	char *dest = (char *)a;
	char *source = (char *)b;
	
	strcpy(dest,source);
	printf("assignStrings: %s\n",dest);
}