// Lab 7 Assignment
// Oma Persaud 
// July 9, 2023

// Bubble Sort on 97 16 45 63 13 22 7 58 72 
// compute how many swaps needed for each index in the array

#include <stdio.h>
#include <stdlib.h>

void bubbleSort (int array[], int n)
{
    int i, j, tmp, swap[n];

    for (i = 0; i < n; i++)
        swap[i] = 0;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                tmp = array[j];

                array[j] = array[j+1];

                array[j+1] = tmp;

                swap[j]++;
            }
        }
    }
    for (i = 0; i < n; i++)
    
    printf("Swaps needed for index %d : %d \n", i, swap[i]);
}

int main()
{
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    int n = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, n);

    return 0;
}