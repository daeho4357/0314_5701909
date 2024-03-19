#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double factorial_iter(int n){
    
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double factorial_rec(int m) {
    if (m == 0)
        return 1.0;
    else
        return m * factorial_rec(m - 1);
}

long testTime(void) {
    return 0;
}




int main() {

    clock_t start, stop;
    double duration;
    //start = clock();

    start = clock();
    double result_iter = factorial_iter(20);
    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC;

    printf("fack_iter�� ��: %f \n", result_iter);
    printf("����ð�: %f��.\n", duration);


    start = clock();
    double result_rec = factorial_rec(20);
    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC;

    printf("fact_rec�� ��: %f \n", result_rec);
    printf("����ð�: %f��.\n", duration);

    //stop = clock();
    //duration = (double)(stop - start) / CLOCKS_PER_SEC;
    //printf("����ð�: %f��.\n", duration);

    return 0;
}






















