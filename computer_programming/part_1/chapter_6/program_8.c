#include <stdio.h>
int main()
{

    double total_marks[40] = {86, 78, 94, 69, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 71, 74, 78, 76, 84, 88, 73, 63, 66, 77, 71, 67, 65, 77, 63};

    for (int marks = 50; marks <= 100; marks++)
    {
        int count = 0;
        for (int i = 0; i < 40; i++)
        {
            if (total_marks[i] == marks)
            {
                count++;
            }
        }
        if (count)
        {
            printf("Marks: %d Count:%d\n", marks, count);
        }
    }

    return 0;
}
