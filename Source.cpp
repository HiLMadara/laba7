#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define TEST_LIMIT 100001

int
main(int argc, char** argv)
{
    int a[10];
    double sum = 0;

    srand(time(NULL));
    memset(a, 0, sizeof(int) * 10);

    for (int i = 0; i < TEST_LIMIT; i++) {
        a[rand() % 10]++;
    }

    for (int i = 0; i < 10; i++) {
        double p = a[i] / (double)100000;
        sum += p;
        fprintf(stdout, "chance of %i = %lf\n", i, p);
    }
    fprintf(stdout, "sum of chances are: %.2lf\n", sum);

    exit(EXIT_SUCCESS);
}