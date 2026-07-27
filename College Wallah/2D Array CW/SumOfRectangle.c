/*Given a matrix ‘a’ of dimension n x m and 2
coordinates (l1, r1) and (l2, r2). Return the sum of
the rectangle from (l1,r1) to (l2, r2).*/
#include <stdio.h>

int main()
{
    int n, m; // Dimensions of the matrix
    printf("Enter the number of rows (n) and columns (m): ");
    scanf("%d %d", &n, &m);

    int a[n][m]; // Declare the matrix

    // Input: Read the elements of the matrix
    printf("Enter the elements of the matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int l1, r1, l2, r2; // Coordinates for the rectangle (l1, r1) to (l2, r2)
    printf("Enter the coordinates (l1, r1) and (l2, r2): ");
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    // Validate the coordinates to ensure they are within matrix bounds
    if (l1 < 0 || l1 >= n || r1 < 0 || r1 >= m || l2 < 0 || l2 >= n || r2 < 0 || r2 >= m)
    {
        printf("Invalid coordinates!\n");
        return 1;
    }

    int sum = 0; // Variable to store the sum of the sub-matrix

    // Calculate the sum of the sub-matrix from (l1, r1) to (l2, r2)
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += a[i][j];
        }
    }

    // Output: Display the sum of the rectangle
    printf("The sum of the rectangle from (%d, %d) to (%d, %d) is: %d\n", l1, r1, l2, r2, sum);

    return 0;
}
