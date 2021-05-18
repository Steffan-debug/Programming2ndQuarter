#include <stdio.h>
int main() { 
    int a, b ,c ,d ,e , s, i;
    printf("This program will help you to identify the the largest and smallest number of a group of 5\n");
    printf("Input 5 different number, they must be integers:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    s = a;
    i = a;
    if (b > s) s = b; 
	if (c > s) s = c; 
	if (d > s) s = d; 
	if (e > s) s = e; 
	if (b < i) i = b; 
	if (c < i) i = c; 
	if (d < i) i = d; 
	if (e < i) i = e; 
	printf("The greatest number is %d and the least is %d", s, i); 
	return 0;
}