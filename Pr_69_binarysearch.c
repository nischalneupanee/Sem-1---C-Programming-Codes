/*Program to search an element in array using binary search.*/
#include<stdio.h>

int findval(int arr[10], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
         
        if (target == arr[mid]) {
            return mid;
        }
        else if (target > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;  
}

int main() {
    int arr[10] = {345, 897, 234, 67, 8132, 445, 865, 272, 195, 174};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the number you want to search for: ");
    scanf("%d", &target);
    int result = findval(arr, size, target);

    if (result != -1) {
        printf("The number %d is at index %d\n", target, result);
    } else {
        printf("The number %d is not present in the array\n", target);
    }

    return 0;
}