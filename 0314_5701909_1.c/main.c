#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    clock_t start, stop;
    double duration;
    start = clock();


    int sum = 0;

    for (int i = 1; i <= 100; i++) {

        int ss = 1;

        if (i == 1) {
            ss = 0;
        }
        else
        {
            for (int x = 2; x < i; x++) {
                if (i % x == 0) {
                    ss = 0;
                }
            }
        }

        if (ss == 1) {
            sum += i;
        }

    }





    printf("1���� 100���� �Ҽ��� ��: %d\n", sum);


    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("����ð�: %f��.\n", duration);

    return 0;
}






















