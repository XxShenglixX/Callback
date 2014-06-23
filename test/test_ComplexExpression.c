#include "unity.h"
#include "ComplexExpression.h"
#include "Integer.h"
#include "Float.h"
#include "Strings.h"
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_complexExpression_explore_integer()
{
	int a = 4, b = 18 ,result;
	result = complexExpression(a,b);
	printf("complexExpression(4,18) = %d\n",complexExpression(a,b));
	
	//_complexExpression(&a,&b,&result,addInt,mulInt,assignInt);
	complexExpressionInt(&a,&b,&result);
	printf("_complexExpression(4,18) = %d\n",result);
}

void test_complexExpression_explore_float()
{
	float a = 4.123, b = 18.567 ,result;
	result = complexExpression(a,b);
	printf("complexExpression(4.123,18.567) = %f\n",complexExpression(a,b));
	
	//_complexExpression(&a,&b,&result,addFloat,mulFloat,assignFloat);
	complexExpressionFloat(&a,&b,&result);
	printf("_complexExpression(4.123,18.567) = %f\n",result);
}

void test_joinStrings_should_join_2_strings_together()
{
	char buffer[200] = "Hello ";
	char *name = "Bananaman";
	
	joinStrings(buffer,name);
	
	printf("%s\n",buffer);
}

void test_mulString_given_Superman_and_3_should_return_Superman_x3()
{
	int count = 3;
	char buffer[200] = "Superman ";

	mulString(&count,buffer);
	
	printf("%s\n",buffer);

}

void test_assignString_given_Spiderman_with_some_webs_should_copy_it_to_destination()
{
	char source[200] = "Spiderman with some webs";
	char dest[200] ;
	
	assignString(dest,source);
	printf("%s\n",dest);
}

void test_complexExpression_explore_strings()
{
	char buffer[200] = "Batman ";
	char result[200];
	int count = 3;

	_complexExpression(buffer,&count,&result,joinStrings,mulString,assignString);

	printf("_complexExpression(\"Batman \",3) = %s\n",result);
}