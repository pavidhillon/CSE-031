#include <stdio.h>
int main() {
    int x = 0, y = 0, *px, *py;
    int arr[10] = {0};

    px = &x;
    py = &y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("arr[0] = %d\n", arr[0]);

    printf("Address of x: %p\n", (void*)&x);
    printf("Address of y: %p\n", (void*)&y);

    printf("px points to address: %p, value at px: %d\n", (void*)px, *px);
    printf("py points to address: %p, value at py: %d\n", (void*)py, *py);

    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }

    printf("arr: %p\n", (void*)arr);
    printf("&arr[0]: %p\n", (void*)&arr[0]);

    printf("Address of arr: %p\n", (void*)&arr);

    return 0;
}
