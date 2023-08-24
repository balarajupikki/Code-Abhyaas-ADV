#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++){
    	scanf("%d", &arr[i]);
	}
    

    int maxFrequency = 0;
    int maxElement = 0;

    for(i=0;i<n;i++){
        int frequency = 1;
        for(j=i+1;j<n;j++) {
            if (arr[j] == arr[i]) {
                frequency++;
            }
        }
        if (frequency > maxFrequency) {
            maxFrequency = frequency;
            maxElement = arr[i];
        }
    }

    printf("The maximum frequent element is %d with frequency %d\n", maxElement, maxFrequency);

    return 0;
}

