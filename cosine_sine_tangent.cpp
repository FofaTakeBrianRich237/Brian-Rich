#include<stdio.h>
#include<iostream>
float inde(float a ,int b)
{
    float c;
    c = a;
    for (int i = 0; i <=(b-2); i++)
    {
      c *= a;

    }
return c;
}
int facto(int q)
{
    int f = 1;
    for (int i = 1; i <= q; i++)
    {
       f *= i;
    }

 return f;
 }
 float cosine(float angle)
 {
    int a = 2;
    float result = 1.0,ab;
    ab = angle* 0.0175;
    for (int i = 1; i <= 5; i++)
    {
      if (i%2 != 0)
      {
        result -= inde(ab,a) / facto(a);
      }
      else
      {
        result += inde(ab,a) / facto(a);
      }
      a += 2;
    }
    return result;
 }
 float sine(float angle)
 {
   int a = 3;
   float ab = angle*0.0175;
   float result = ab;
   for (int i = 1; i <= 5; i++)
   {
     if (i%2 != 0)
     {
       result -= inde(ab,a) / facto(a) ;
     }
     else
     {
       result += inde(ab,a) / facto(a) ;
     }
     a += 2;
   }
   return result;
 }
   float tangent(float angle)
 {
   float d = cosine(angle), e = sine(angle), r3;
   r3 = e/d;
   return r3;
 }
 int main()
 {
    float angle,r1,r2,r3;
    std::cout << "Enter the angle\n";
    std::cin >> angle;
    r1 = cosine(angle);
    std::cout << "cos "<< angle<<" "<< r1 << "\n";
    r2 = sine(angle);
    std::cout << "sin" << angle<<" "<< r2 << "\n";
    r3 = tangent(angle);
    std::cout << "tan" << angle <<" "<< r3 << "\n";
    return 0;
 }
