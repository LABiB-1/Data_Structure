#include <stdio.h>
int main()
{
    int node, edge, a, b;
    printf("Enter number of vertices: ");
    scanf("%d", &node);
    int matrix[node][node];
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            matrix[i][j] = 0;
        }
    }
    printf("Enter number of edges: ");
    scanf("%d", &edge);
    printf("Enter your edge:\n");

    for (int i = 0; i < edge; i++)
    {
        scanf("%d%d", &a, &b);
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    printf("Matrix representation of the graph is: \n");
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            printf(" %d", matrix[i][j]);
            matrix[i][j] = 0;
        }
        printf("\n");
    }
    
}
