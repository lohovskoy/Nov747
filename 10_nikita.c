#include <stdlib.h>
#include <malloc.h>
int main(void)
{
int n = 0,*Graf;
scanf("%d", &n);
Graf = (int*) malloc(n * sizeof(int*));
for (int i = 0;i<n;i++)
{
scanf("%d",&Graf[i]);
}
for (int i = 0 ;i< n-1;i++)
{
if (Graf[i] <= Graf[i+1]) printf("\n1 "); else printf("\n0 ");
}
}
