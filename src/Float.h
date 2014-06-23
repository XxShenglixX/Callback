#ifndef Float_H
#define Float_H

#define complexExpressionFloat(x,y,result)													\
								_complexExpression(x,										\
												   y,										\
												   result,									\
												   addFloat,								\
												   mulFloat,								\
												   assignFloat)

void addFloat(void *a,void *b);
void mulFloat(void *a,void *b);
void assignFloat(void *a,void *b);
#endif // Float_H
