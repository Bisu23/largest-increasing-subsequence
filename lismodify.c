// An sequence of number is given
// We have to find  a largest increasing (non decreasing )subsequence of the sequence
// time complexity is O(n^2)
// space complexity is O(n) 

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

void printLIS(int *arr, int *p, int end_index) {
    if (end_index == -1) {
        return;
    }
    printLIS(arr, p, p[end_index]);
    printf("%d ", arr[end_index]);
}

void lis(int *arr, int n) {
    if (n <= 0) {
        printf("The length of the largest increasing subsequence is: 0\n");
        printf("The largest increasing subsequence is: \n");
        return;
    }

    int maxlen = 1, end_index = 0;
    int l[n], p[n];
    l[0] = 1;
    p[0] = -1;
    for (int i = 1; i < n; i++) {
        l[i] = 1;
        p[i] = -1;
        for (int j = 0; j < i; j++) {
            if (arr[j] <= arr[i] && l[i] < l[j] + 1) {
                l[i] = l[j] + 1;
                p[i] = j;
            }
        }
        if (maxlen < l[i]) {
            maxlen = l[i];
            end_index = i;
        }
    }

    printf("The length of the largest increasing subsequence is: %d\n", maxlen);
    if (maxlen > 0) {
        printf("The largest increasing subsequence is: ");
        printLIS(arr, p, end_index);
        printf("\n");
    }
}

// Driver program to test above function
int main() {
    int arr[] = {10, 10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The number of elements in the array: %d\n", n);
    lis(arr, n);
    return 0;
}
