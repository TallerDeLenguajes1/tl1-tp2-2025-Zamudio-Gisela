#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main() {

    int i;
    double vt[N], *puntero_vt;
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        vt[i] = 1+rand()%100;
      printf(" %.2f -", vt[i]);
    }

    printf("\n\n");
    puntero_vt = vt;

    for (int i = 0; i < N; i++)
    {
        printf(" %.2f -", *puntero_vt);
        puntero_vt++;
    }
    
    return 0;
}