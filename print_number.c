#include <stdio.h>


int main()
{
    int course_number[6] = {4, 2, 1, 4, 3, 2};
    for(int i = 5; i >= 0; i--)
    {
        printf("%d", course_number[i]);
    }
    printf("\n");
    return 0;
}
