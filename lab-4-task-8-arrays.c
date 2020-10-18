#include<stdio.h>
#include<stdlib.h>

//Shell sort
void ShellSort(int n , int array[]) {

}

int main() {
    int num;
    printf("Enter the number of elements of the array: ");
    scanf("%d" , &num);
    int *array;
    array = (int *) malloc(num * sizeof(int));
    printf("Enter the array elements:\n");
    for (int i = 0; i < num; i++)
        scanf("%d" , &array[i]);
    ShellSort(num , array);
    //вывод отсортированного массива на экран
    printf("Sorted array:\n");
    for (int i = 0; i < num; i++)
        printf("%d " , array[i]);
    printf("\n");
    //освобождение памяти
    free(array);
    return 0;
}