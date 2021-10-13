#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include <iostream>
int main()
 {
     float  a, p, E;
     int k = 0; // порядковый номер  х
     int x1 = a;
     int x2;
     printf("a="); scanf("%1f", &a);
     printf("p="); scanf("%1f", &p);
     for (int i = -6; i>-2; i++)
     {

         E=10^i;
         k=0;
         do {

             k++;
             if (k = 1) {

                 x2 = (1 / p) * ((p - 1) * x1 + (a / (x1 ^ int(p - 1))));

             }
             else {

                 x1 = x2;
                 x2 = (1 / p) * ((p - 1) * x1 + (a / (x1 ^ int(p - 1))));

             }


         } while (abs(x2 - x1) >E);
         std::cout << "E="<< E << "k=" << k;
         return 0;
     }


 }