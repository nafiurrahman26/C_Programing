#include <stdio.h>
#include <stdlib.h>

int visited[5];

int a[5][5]={
    {0,1,1,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0},
    {1,1,1,0,1},
    {0,0,1,1,0}    
};

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

void display(){
    printf("Display the adjency matrix: \n");
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i, j;

    // printf("Enter the adjacency matrix\n");
    // for(int i=0; i<6; i++){
    // for( j=0; j<6; j++){
    // scanf("%d", &a[i][j]);
    // }
    // }
    display();
    for( i = 0; i<6; i++){
    visited[i] = 0;
    }
    DFS(0);

    return 0;
}