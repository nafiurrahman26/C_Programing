#include <stdio.h>
#include <stdlib.h>

int a[5][5], visited[5];

void DFS(int k)
{
    printf("%d->", k);
    visited[k]= 1;
    for(int j = 0; j<6; j++){
    if(!visited[j] && a[k][j] == 1){
    DFS(j);
    }
    }
}
int main()
{
    int i, j;

    printf("Enter the adjacency matrix\n");
    for(int i=0; i<6; i++){
    for( j=0; j<6; j++){
    scanf("%d", &a[i][j]);
    }
    }
    for( i = 0; i<6; i++){
    visited[i] = 0;
    }
    DFS(1);

    return 0;
}