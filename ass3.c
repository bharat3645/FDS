#include <stdio.h>

void dutchNationalFlag(char arr[], int n) {
    int low = 0, high = n - 1;
    int mid = 0;

    while (mid <= high) {
        switch (arr[mid]) {
            case 'R':
                // Swap arr[low] and arr[mid]
                char temp1 = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp1;
                low++;
                mid++;
                break;

            case 'W':
                mid++;
                break;

            case 'B':
                // Swap arr[mid] and arr[high]
                char temp2 = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp2;
                high--;
                break;
        }
    }
}

int main() {
    char arr[] = {'R', 'W', 'B', 'R', 'W', 'R', 'B', 'W', 'R'};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }

    dutchNationalFlag(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}


/*

Introduction:

The Dutch National Flag Problem involves sorting an array of objects, each of which is one of three colors: red, white, or blue. The goal is to rearrange the elements such that all the red elements come before all the white elements, and all the white elements come before all the blue elements. This report discusses the implementation of a solution to this problem using the C programming language.

Thought Process:

To solve this problem efficiently, we adopted a two-pointer approach, similar to the partition step in the quicksort algorithm. The thought process behind this approach can be summarized as follows:

We started with three pointers: low, mid, and high. low points to the beginning of the array, mid scans the array, and high points to the end of the array.

We iterated through the array using the mid pointer, examining the color of each element.

Based on the color of the element pointed to by mid, we performed the following operations:

If it was red ('R'), we swapped it with the element pointed to by low and incremented both low and mid. This ensures that red elements move to the front of the array.
If it was white ('W'), we simply incremented mid to move to the next element.
If it was blue ('B'), we swapped it with the element pointed to by high and decremented high. This ensures that blue elements move to the end of the array.
We continued this process until mid was less than or equal to high. This ensured that all elements had been categorized into their appropriate sections.

The result was an array where all red elements came before white elements, and white elements came before blue elements, satisfying the Dutch National Flag criteria.

Algorithm Used:

The algorithm used in this solution can be summarized as follows:

Initialize three pointers: low, mid, and high.
Iterate through the array using the mid pointer.
Based on the color of the element pointed to by mid, swap elements and move pointers accordingly.
Continue this process until mid is less than or equal to high.
Time Complexity:

The time complexity of this solution is O(n), where n is the number of elements in the array. This is an efficient solution because we only iterate through the array once. The operations performed during the iteration, such as swapping elements and moving pointers, are constant time operations, and they do not depend on the size of the array.

Conclusion:

In conclusion, we have successfully implemented a solution to the Dutch National Flag Problem in C. The two-pointer approach used in this solution efficiently rearranges the elements in the array to satisfy the sorting criteria. The time complexity of O(n) makes this solution suitable for sorting large arrays efficiently. This approach can be tested with various input arrays to ensure that it correctly sorts the elements according to the Dutch National Flag criteria.

*/