#include <stdio.h>

int bisearch(int* ar, int first, int last, int arg)
{
    int middle = (first + last) / 2;
    
    if (ar[middle] == arg) {
        return middle;
    }
    else if (first == last) {
        return -1;
    }
    else if (ar[middle] < arg) {
        return bisearch(ar, middle+1, last, arg);
    }
    else if (ar[middle] > arg) {
        return bisearch(ar, first, middle-1, arg);
    }
    else {
        printf("We've got big problems");
        return -1;
    }
}

int main()
{
    int ar[5] = {0, 1, 2, 3, 4};
    
    int result = bisearch(ar, 0, 4, 3);
    
    printf("%d", result);

    return 0;
}