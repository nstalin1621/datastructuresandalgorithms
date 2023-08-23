#include<stdio.h>
void DFS(int);
int G[10][10],visited[10],n;
int main()
{
    int i,j;
    printf("Enter number of vertices:");
scanf("%d",&n);
printf("Enter adjecency matrix of the graph:\n");
  
for(i=0;i<n;i++)
       for(j=0;j<n;j++)
scanf("%d",&G[i][j]);
   for(i=0;i<n;i++)
        visited[i]=0;
    DFS(0);
}
void DFS(int i)
{
    int j;
printf("\n%d",i);
    visited[i]=1;
for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
}
output:
Enter number of vertices:8
Enter adjecency matrix of the graph:
0 1 1 1 1 0 0 0
1 0 0 0 0 1 0 0
1 0 0 0 0 1 0 0
1 0 0 0 0 0 1 0
1 0 0 0 0 0 1 0
0 1 1 0 0 0 0 1
0 0 0 1 1 0 0 1
0 0 0 0 0 1 1 0

0
1
5
2
7
6
3
4
--------------------------------
Process exited after 104.9 seconds with return value 0
Press any key to continue . . .
