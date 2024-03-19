#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double power_iter(int n, int m){
    
    double result = 1.0;
    for (int i = 1; i < m; i++) {
        result *= n;
    }
    return result;
}

double power_rec(int n, int m) {
    if (m == 0)
        return 1.0;
    else
        return m * power_rec(n, m - 1);
}

long testTime(void) {
    return 0;
}




int main() {

    clock_t start, stop;
    double duration;
    //start = clock();

    start = clock();
    double result_iter = power_iter(13, 21);
    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC;

    printf("power_iter의 값: %f \n", result_iter);
    printf("수행시간: %f초.\n", duration);


    start = clock();
    double result_rec = power_rec(13, 21);
    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC;

    printf("power_rec의 값: %f \n", result_rec);
    printf("수행시간: %f초.\n", duration);

    //stop = clock();
    //duration = (double)(stop - start) / CLOCKS_PER_SEC;
    //printf("수행시간: %f초.\n", duration);

    return 0;
}






















