#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void display_array(int arr[SIZE])
{
    printf("Array is : ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insersion_sort(int arr[])
{
    int iteration = 0;
    int current;
    int iterations = 0;
    int comparision = 0;
    while (arr[iteration] > arr[iteration + 1])
    {
        current = arr[iteration + 1];
        arr[iteration + 1] = arr[iteration];
        arr[iteration] = current;
    }
    printf("Iterations : %d\n", iterations);
    printf("Comparisions : %d\n", comparision);
    display_array(arr);
}

int main()
{
    int arr[SIZE] = { 60,90,40,50,30,10,100,70,20,80 };
    display_array(arr);
    insersion_sort(arr);
    return 0;

}