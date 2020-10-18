#include<stdio.h>
#include<stdlib.h>

//Shell sort
void ShellSort(int n, int array[]) {
    int i, j, step;
    int tmp;

    for (step = n / 2; step > 0; step /= 2)

        for (i = step; i < n; i++) {
            tmp = array[i];

            for (j = i; j >= step; j -= step) {
                if (tmp < array[j - step])
                    array[j] = array[j - step];
                else
                    break;
            }
            array[j] = tmp;
        }
}

int main() {
    int num;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &num);

    int *array;
    array = (int *) malloc(num * sizeof(int));
    printf("Enter the array elements:\n");

    for (int i = 0; i < num; i++)
        scanf("%d", &array[i]);

    ShellSort(num, array);
    //вывод отсортированного массива на экран
    printf("Sorted array:\n");

    for (int i = 0; i < num; i++)
        printf("%d ", array[i]);
    printf("\n");

    //освобождение памяти
    free(array);
    return 0;
}