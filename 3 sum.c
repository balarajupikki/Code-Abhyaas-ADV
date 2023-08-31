#include<stdio.h>

int main() {
    int i, left, right;
    int arr[] = {5, 7, 9, 13, 24, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetsum = 29;
    int first, sum;

    for (i = 0; i < n-2; i++) {
        first = arr[i];
        sum = targetsum - first;
        left = i + 1;
        right = n - 1;

        while (left < right) {
            if (arr[left] + arr[right] == sum) {
                printf("Target sum %d is achieved by elements at indices %d, %d and %d\n", targetsum, first, left, right);
                break;
            } else if (arr[left] + arr[right] > sum) {
                right--;
            } else if (arr[left] + arr[right] < sum) {
                left++;
            }
        }
    }

    return 0;
}

