#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
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
    printf("Enter the three sides a,b,c  of the triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    while ( a < 1 || b < 1 || c < 1)
    {
        printf("The sides most be greater than or equal to one\n");
        if(a < 1)
        {
            printf("Enter a");
            scanf ("%f",&a);
        }
        else if(b < 1)
        {
            printf("Enter b");
            scanf ("%f",&b);
        }
        else
        {
            printf("Enter c");
            scanf ("%f",&c);
        }
    }
    if (a*a == b*b + c*c ||  b*b == a*a + c*c || c*c == a*a + b*b)
        {
            printf("The triangle is right angled\n");
        }
    else if (a == b && a == c)
    {
        printf("The triangle is equilateral\n");
    }
    else if (a == b || a == c || b == c )
    {
        printf("the triangle is isosceles\n");
    }
    else if (a != b && a != c && b != c)
        {
           printf("The triangle is scalene\n");

       return 0;
    }
}


