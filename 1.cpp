#include <stdio.h>
int gys(int a,int b,int *p,int *q){
 int r,c,d;
 c=a;
 d=b;
 r=a%b; 
 while(r!=0) 
 {
 a=b; b=r; r=a%b;
 }
 *p=b;
 *q=c*d/b;
 return(*p);
 return(*q);
}
main()
{
 int m,n,a,b;
 scanf("%d%d",&a,&b);
 gys(a,b,&m,&n);
 printf("���Լ����: %d\n", m);
 printf("��С��������: %d\n",n);
} 
