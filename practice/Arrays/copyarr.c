#include <stdio.h>

int main() {
    int n, i;
    int arr1[100], arr2[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("Elements of second array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
