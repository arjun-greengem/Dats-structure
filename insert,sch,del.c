#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5, i;


    for(i = n; i > 2; i--) {
        arr[i] = arr[i - 1];
    }
    arr[2] = 99;
    n++;


    for(i = 0; i < n; i++) {
        if(arr[i] == 4) {
            break;
        }
    }


    for(i = 3; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;


    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


