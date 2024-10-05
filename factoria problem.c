 #include<stdio.h>
 int main () {
 int f = 1;
 int i;
 int q = 2;
 printf("Enter a number\n");
 scanf("%d",&q);
 while (q < 0)
 {
     printf("Invalid number");
     printf("Enter a number\n");
     scanf("%d",&q);
 }
 if (q == 0)
 {
     printf("The factorial of 0 is 1");
 }
 for (i = 1; i <= q; i++){
    f *= i;
 }
 printf("the factorial of %d is %d",q,f);
 return 0;
 }
