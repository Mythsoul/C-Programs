#include <stdio.h>

char main()
{
    // linear data structure
    // data structure and database
    // contigious memory allocation
    //- 1000,1004,1008,1012,1016,1020
    // static array -> fixed size; arr[5] = 20 bytes main -> return / os manually free
    // dynamic array -> flexible size; allocate memory at run time elements add+remove

    // DATA_TYPE identifier[size];
    // DATA_TYPE identifier[] = {1,2,3,4,5,6};
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(arr) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 'a';
}