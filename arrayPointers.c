#include <stdio.h>

int main() {
    int arr[3][5] = { {1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10},
                      {11, 12, 13, 14, 15} };

    // *(arr+2)+3 ifadesi
    int *ptr1 = *(arr+2) + 3;
    printf("*(arr+2)+3: %d\n", *ptr1);

    // *(*(arr+2)+3) ifadesi
    int ptr2 = *(*(arr+2) + 3);
    printf("*(*(arr+2)+3): %d\n", ptr2);
    return 0;
}
