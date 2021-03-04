#include<stdio.h>
#include<conio.h>
void dfs(int v);
typedef enum boolean{false,true} bool;
int n,a[10][10];
bool visited[10];
 void main()
 {
 printf("enter the no. of nodes in the graph\n");
 scanf("%d",&n);
 printf("enter the adjacency matrix \n");
 for(i=1;i<=n;i++)
 {
for(j=1;j<=n;j++)

{
scanf("%d",&a[i][j]);
}
}
printf("the ajancey matrix shown as\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
printf("enter tha starting node for depth first search\n");
scanf("%d",&v);
for(i=1;i<=n;i++)
visited[i]=false;
dfs(v);
getch();
}
 void dfs(int v)
 {
 int i,stack[10],top=-1,pop;
 top++;
 stack[top]=v;
 while(top>=0)
 {
 pop=stack[top];
 top--;
 if(visited[pop]==false)
 {
 printf("%d",pop);
 visited[pop]==true;
 }
 else
 continue;
 for(i=n;i>=1;i--)
 {
 if(a[pop][i]==false)
 {
 top++;
 stack[top]=i;
 }
 }
 }
 }
