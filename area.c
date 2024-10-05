#include<stdio.h>
 void veri(float N)
 {
     while(N < 1)
     {
         printf("the entered number is not valid\n Enter another number");
         scanf("%f",&N);
     }
 }
 void area_and_perimeter_of_cirle()
 {
     float radio,area,peri;
     #define  PI 3.14
     printf("Enter the radius of the circle\n");
     scanf("%f",&radio);
     veri(radio);
     area = radio*radio*PI;
     peri = 2*radio*PI;
     printf("The area is %f and the perimeter is %f\n",area,peri);
 }
 void area_and_perimeter_of_square()
 {
     float side,area,peri;
     printf("Enter the side\n");
     scanf("%f",&side);
     veri(side);
     area = side * side;
     peri = 4 * side;
     printf("The area is %f and the perimeter is %f\n",area,peri);

 }
 void area_and_perimeter_of_rect()
 {
     float len,wid,area,peri;
     printf("Enter the length\n");
     scanf("%f",&len);
     veri(len);
     printf("Enter the width\n");
     scanf("%f",&wid);
     veri(wid);
     area = len*wid;
     peri = (len + wid)*2;
     printf("The area is %f and the perimeter is %f\n",area,peri);
 }
 void area_and_perimeter_of_triangle()
 {
     float height,base,area,peri,a,b,c;
     printf("Enter the height ");
     scanf("%f",&height);
     veri(height);
     scanf("%f",&base);
     veri(base);
     area = 0.5 * base*height;
     int num[6][9] = {
        {0,0,0,0,1,0,0,0,0},
        {0,0,0,1,0,1,0,0,0},
        {4,0,1,0,0,0,1,0,3},
        {0,1,0,0,0,0,0,1,0},
        {1,0,1,0,1,0,1,0,1},
        {0,0,0,0,2,0,0,0,0}
    };
    for(int i=0; i<6; i++)
    {
        for(int j = 0; j<9; j++)
        {
           if(num[i][j] == 0)
           {
           printf(" ");
           }
           else if (num[i][j] == 1)
           {
           printf ("*");
           }
           else if (num[i][j] == 2)
          {
            printf("c");
          }
          else if (num[i][j] == 3)
          {
            printf("b");
          }
          else
          {
            printf("a");
          }
          if ( j == 8)
          {
          printf("\n");
          }
       }
   }
     printf("Enter the values of a,b\n");
     scanf("%f",&a);
     veri(a);
     scanf("%f",&b);
     veri(b);
     while((a+b) < c)
     {
        printf("Invalid mensurations\n");
        printf("Enter the values of a,b\n");
        scanf("%f",&a);
        veri(a);
        scanf("%f",&b);
        veri(b);
     }
     peri = a + b + c;
     printf("The area is %f and the perimeter is %f\n",area,peri);
 }

 int main()
 {
     int choice;
     printf("Enter: \n 1 for triangle\n 2 for rectangle\n 3 for square\n 4 for circle\n");
     scanf("%d",&choice);
     veri(choice);
     while(choice > 4)
     {
     printf("Invalid input");
      printf("Enter: \n 1 for triangle\n 2 for rectangle\n 3 for square\n 4 for circle \n");
     scanf("%d",&choice);
     }
     if (choice == 1)
     {
       area_and_perimeter_of_triangle();
     }
     else if (choice == 2 )
     {
       area_and_perimeter_of_rect();
     }
     else if (choice == 3)
     {
      area_and_perimeter_of_square();
     }
     else
     {
      area_and_perimeter_of_cirle();
     }
     return 0;
 }
