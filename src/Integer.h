#ifndef Integer_H
#define Integer_H

#define complexExpressionInt(x,y,result) _complexExpression(x,y,result,addInt,mulInt,assignInt)

void addInt(void *a,void *b);
void mulInt(void *a,void *b);
void assignInt(void *a,void *b);
#endif // Integer_H
