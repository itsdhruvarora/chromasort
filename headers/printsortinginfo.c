#include <stdio.h>
#include "printsortinginfo.h"

void printSortingInfo(int algorithm) {
    switch (algorithm) {
        case 1:
            printf("Bubble Sort:\n");
            printf("Time Complexity: O(n^2)\n");
            printf("Space Complexity: O(1)\n");
            printf("Stable: Yes\n");
            printf("Description:\n");
            printf("Bubble sort is a simple comparison-based sorting algorithm.\n");
            printf("It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.\n");
            break;
        case 2:
            printf("Selection Sort:\n");
            printf("Time Complexity: O(n^2)\n");
            printf("Space Complexity: O(1)\n");
            printf("Stable: No\n");
            printf("Description:\n");
            printf("Selection sort is another simple comparison-based sorting algorithm.\n");
            printf("It divides the input list into two parts: a sorted and an unsorted region.\n");
            printf("It repeatedly selects the minimum element from the unsorted region and moves it to the sorted region.\n");
            break;
        case 3:
            printf("Insertion Sort:\n");
            printf("Time Complexity: O(n^2)\n");
            printf("Space Complexity: O(1)\n");
            printf("Stable: Yes\n");
            printf("Description:\n");
            printf("Insertion sort is an efficient in-place sorting algorithm that builds the final sorted array one item at a time.\n");
            printf("It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.\n");
            break;
        case 4:
            printf("Merge Sort:\n");
            printf("Time Complexity: O(n log n)\n");
            printf("Space Complexity: O(n)\n");
            printf("Stable: Yes\n");
            printf("Description:\n");
            printf("Merge sort is a divide-and-conquer algorithm that divides the input array into two halves, recursively sorts them, and then merges the two sorted halves.\n");
            printf("It is a stable sorting algorithm, meaning that the relative order of equal elements is preserved.\n");
            break;
        case 5:
            printf("Quick Sort:\n");
            printf("Time Complexity: O(n^2) worst case, O(n log n) average case\n");
            printf("Space Complexity: O(log n) to O(n)\n");
            printf("Stable: No\n");
            printf("Description:\n");
            printf("Quick sort is a highly efficient and widely used in-place sorting algorithm.\n");
            printf("It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays.\n");
            printf("It then recursively sorts the sub-arrays.\n");
            break;
        default:
            printf("Invalid choice. Please choose a sorting algorithm from 1 to 5.\n");
    }
}