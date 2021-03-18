#include <stdio.h>

using namespace std;

int main()
{
    const int arr_len = 10;
    int arr [arr_len] = { 1, 2, -3, 7, 5, -11, 7, 8, -9, 10 };
    int sum = 0;

    for (int i = 0; i < arr_len; i++) {
        int eax = arr[i];
        if (eax < 0) {
            eax *= -1;
        }
        sum += eax;
    }

    printf("%d", sum);

    return 0;
}

