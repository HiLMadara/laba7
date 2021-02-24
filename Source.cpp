#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "generate.h"



int main(int argc, char ** argv)
{
    int test = atoi(argv[1]);
    int a[10];
    double sum = 0;
    int sch=0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) 
     {
        a[i] = 0;
     }
    for (int i = 0; i < test; i++) 
    {
        sch =  generate();
        a[sch]++;
    }
   for (int i = 0; i < 10; i++) {
       double p = a[i] / (double)100000;
       sum += p;
       printf( "chance of %i = %lf\n", i, p);
   }
   printf( "sum of chances are: %.2lf\n", sum);

   exit(EXIT_SUCCESS);
}