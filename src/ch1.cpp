// the first main file

#include <iostream>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int maxFromThree(int a, int b, int c){ 
    return max(max(a, b), c);
}

int maxCrossingSum(int arr[], int low, int middle, int high) {
    int sum = 0;
    int low_sum = 0;
    for (int i=middle; i >=low; i--) {
        sum = sum + arr[i];
        if (sum > low_sum) {
            low_sum = sum;
        }
    }

    sum = 0;
    int right_sum = 0;
    for (int i = middle+1; i <= high; i++) {
        sum = sum + arr[i];
        if (sum > right_sum) {
            right_sum = sum;
        }
    }
    return low_sum + right_sum;
}

int maxSubArraySum(int arr[], int low, int high) {
    if (low == high) {
        return arr[low];
    }

    int middle = (low + high) / 2;

    return maxFromThree(
        maxSubArraySum(arr, low, middle),
        maxSubArraySum(arr, middle+1, high),
        maxCrossingSum(arr, low, middle, high)
    );
}


int main2() {
    // int arr[] = {12, 15, 3, 6, 7, 2, 4, 10};
    int arr[] = {0, 3, -12, 3, 1, -5, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = arr[0];
    printf("size_of_array %d\n", x);
    int max_sum = maxSubArraySum(arr, 0, n-1);
    printf("Maximum contiguous sum is %d\n", max_sum);
    return 0;
}

