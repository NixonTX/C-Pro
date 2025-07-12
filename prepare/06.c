#include <stdio.h>
#include <stdlib.h>

// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//     for (int i = 0; i < numsSize; i++) {
//         for (int j = i + 1; j < numsSize; j++) {  // Avoid using the same element twice
//             if (nums[i] + nums[j] == target) {
//                 int* result = (int*)malloc(2 * sizeof(int));
//                 result[0] = i;
//                 result[1] = j;
//                 *returnSize = 2;
//                 return result;
//             }
//         }
//     }
//     *returnSize = 0;
//     return NULL;  // No result found (though problem guarantees one)
// }

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize; i++) {
        for(int j = numsSize - 1; j > i; j--) {  // j > i avoids same element and duplicates
            if(nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));  // dynamic memory
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {1, 2, 7, 11, 15, 3, 6};
    int target = 8;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* result = twoSum(nums, numsSize, target, &returnSize);

    if (result != NULL && returnSize == 2) {
        printf("Output: [%d, %d]\n", result[0], result[1]);
        
        free(result);
    } else {
        printf("No two numbers found that add up to %d\n", target);
    }

    return 0;
}
