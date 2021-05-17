#include <stdio.h>
int main() { 
    int x, h, m, s;
    printf("In this program you will convert seconds into hours, minutes and seconds.\n");
    printf("Input the seconds:");
    scanf("%d", &x);
    h = (x/3600);
    m  = (x - (3600*h))/60;
    s = (x -(3600*h)-(m*60));
    printf("The result of %d is: %d hours, %d minutes and %d seconds", x, h, m, s);
    return 0;
}