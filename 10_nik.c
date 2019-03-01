#include <stdio.h>
int main(void)
{
int n = 0,x1=0,x2=0;
scanf("%d", &n);
scanf("%d",&x2);
for (int i=1;i<n;i++)
{
if ((i%2)==1)  
{
scanf("%d",&x1); if (x2 <=x1) printf(" 1\n"); else {printf(" 0\n");
}}
if ((i%2)==0){scanf("%d",&x2); if(x1<=x2) printf("1\n"); else printf (" 0\n");}

}
}
