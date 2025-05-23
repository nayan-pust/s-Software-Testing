#include <stdio.h>

void sum(int arr[], int n) {
    int sum = 0, i = 0;
    do {
        sum += arr[i++];
    } while (i < n);
    printf("Sum : %d\n", sum);
}

void avg(int arr[], int n) {
    int i = 0, sum = 0;
    do {
        sum += arr[i++];
    } while (i < n);
    printf("Average : %.2f\n", (float)sum / n);
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum(arr, n);
    avg(arr, n);

    return 0;
}
