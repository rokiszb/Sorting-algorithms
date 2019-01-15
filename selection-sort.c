#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void swap(int *A, int *B);
int* smallestValue;

int selectionSort(int numbers[], int length)
{
    for (int x = 0; x <= length; x++){

        smallestValue = &numbers[x];

        for (int i = x; i <= length; i++)
        {

            if(numbers[i] < *smallestValue){
                smallestValue = &numbers[i];
            }
            // printf("numbersArray[%d] : %d\n", i, numbers[i]);
        }

        if(*smallestValue < numbers[x]){
            swap(&numbers[x], smallestValue);
        }

        printf(" numbers[x] : %d\n smallestValue %d\n", numbers[x], *smallestValue);

    }

    return 0;
}

void swap(int *A, int *B){
    int temp = *A;
    *A = *B;
    *B = temp;
}

int main(){
    int array[] = {19, 10, 8, 17, 9};
    // swap(&array[0], &array[3]);
    int arrayLength = (sizeof(array)/sizeof(array[0])-1);

    selectionSort(array, arrayLength);

    for (int z = 0; z <= arrayLength; z++)
    {
        printf("numbersArray[%d] : %d\n", z, array[z]);
    }
    return 0;
}
