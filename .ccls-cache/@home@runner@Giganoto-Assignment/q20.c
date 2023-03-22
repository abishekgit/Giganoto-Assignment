//  . Write a program that reads in an array of integers and rotates it by a given number of positions to the right.

#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int i, j;
    for (i = 0; i < k; i++) {
        int last = arr[n-1];
        for (j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    // rotate array
    rotateRight(arr, n, k);

    // print the rotated array
    printf("Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
