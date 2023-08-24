#include <stdio.h>

int main() {
    int i, index, swap;
    int arr[] = {1, 0, 2, 3, 0, 0, 9, 10, 0, 3};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < length; i++) {
        if (arr[i] == 0) {
            index = i;
            break;
        }
    }

    for (i = index + 1; i < length; i++) {
        if (arr[i] != 0) {
            swap = arr[i];
            arr[i] = arr[index];
            arr[index] = swap;
            index++;
        }
    }

    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

