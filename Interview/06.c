// Find two numbers in a sorted array that add up to a target - Every two elements that add up to target

#include<stdio.h>

void twoSumAllPairs(int arr[], int size, int target) {
    int left = 0, right = size-1, found = 0;

    while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            printf("pairs are %d and %d\n", arr[left], arr[right]);
            found = 1;
            left++;
            right--;
        } else if(sum < target) {
            left++;
        } else {
            right--;
        }
    }
    if (!found) {
        printf("No pairs\n");
    }
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 8};
    int size = 6;
    int target = 9;

    twoSumAllPairs(arr, size, target);

    return 0;
}