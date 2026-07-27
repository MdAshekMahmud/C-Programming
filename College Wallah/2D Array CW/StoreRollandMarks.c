// WAP to store roll number and marks obtained by 4 students side by side in a matrix.
#include <stdio.h>

int main()
{
    int arr[4][2]; // 4 students = rows, 2 columns = roll number and marks

    // Input Section: Roll Number and Marks for 4 Students
    for (int i = 0; i < 4; i++)
    {
        printf("Enter Roll No for Student %d: ", i + 1);
        scanf("%d", &arr[i][0]); // Column 0 stores Roll No

        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%d", &arr[i][1]); // Column 1 stores Marks
    }

    // Output Section: Displaying Roll Numbers and Marks
    printf("\nRoll   \tMarks\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t%d\n", arr[i][0], arr[i][1]); // Print Roll No and Marks side by side
    }

    return 0;
}
