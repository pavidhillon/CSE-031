#include <stdio.h>
#include <stdlib.h>

    int main() {
        int num;
        int *ptr;
        int **handle;
        num = 14;

        ptr = (int *) malloc(2 * sizeof(int));
        *ptr = num;
        handle = (int **) malloc(1 * sizeof(int *));*handle = ptr;
    
        printf("Address of num: %p, Value: %d\n", (void *)&num, num);
        printf("Address of ptr: %p, Value: %p\n", (void *)&ptr, (void *)ptr);
        printf("Address of handle: %p, Value: %p\n", (void *)&handle, (void *)handle);
        printf("Value pointed by ptr: %d\n", *ptr);
        printf("Value pointed by handle: %p\n", (void *)*handle);
        free(ptr);
        free (handle) ;
 
        return 0;
}
