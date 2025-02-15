// Find two numbers in a sorted array that add up to a target.

#include<stdio.h>

void twoSum(int arr[], int size, int target) {
    int left = 0, right = size-1;

    while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            printf("ele are %d and %d", arr[left], arr[right]);
            return; // Function stops here, so no further pairs are checked
        } else if(sum > target) {
            right--;
        } else {
            left++;
        }
    }
    printf("No pairs\n");
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 8};
    int size = 6;
    int target = 9;

    twoSum(arr, size, target);

    return 0;
}