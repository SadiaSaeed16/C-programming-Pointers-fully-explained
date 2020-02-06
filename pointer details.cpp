#include<stdio.h>
int main()
{
	int a;
	int b=10;
	float c=8.5;
	
	printf("value of a is %u\n", &a);
	printf("value of b is %u\n", &b);
	printf("value of c is %u\n", &c);
	
	printf("----------------------\n\n\n");
	
	int *p1;
	p1=&a;
	int*p2=&b;
	float *p3= &c;
	printf("value of p1 is %u\n",p1);
	printf("value of a is %d\n",*p1);

    printf("value of p2 is %u\n",p2);
    printf("value of b is %d\n",*p2);
    
    printf("value of p3 is %u\n",p3);
    printf("value of c is %f\n",*p3);
    
    printf("sum of a and b is %d\n", *p1+ *p2);
    
    p1 = p2;
    printf("value of p1 is %u\n",p1);
    printf("value of b is %d\n\n",*p1);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


