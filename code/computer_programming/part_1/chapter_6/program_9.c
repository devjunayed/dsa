#include <stdio.h>
int main()
{
    int i;
    int total_marks[] = {86, 78, 94, 69, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 71, 74, 78, 76, 84, 88, 73, 63, 66, 77, 71, 67, 65, 77, 63};

    int marks_count[101];

    for (i = 0; i < 101; i++)
    {
        marks_count[i] = 0;
    }

    for (i = 0; i < 40; i++)
    {
        marks_count[total_marks[i]]++;
    }

    for (i = 50; i <= 100; i++)
    {
        if(marks_count[i] != 0)
            printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }
    return 0;
}