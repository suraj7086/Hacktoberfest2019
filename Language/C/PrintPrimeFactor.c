#include<stdio.h>
 void primeCheck(int a);
  int main()
{
 int N,c,u,k;
  printf("Enter the number :");
  scanf("%d",&N);
    c=N;
     for(int i=2;i<N;i++)
     {
        if(c%i==0)
        {
          u=c/i;
          k=i;
             primeCheck(k);
            if(u%i!=0)
              c=u;
           abc :
           if(u%i==0)
            {
              u=u/i;
                goto abc;
            }
               c=u;
         }
       }
return 0;     
}
void primeCheck(int a) 
{
 int i;
 for(i=2;i<a;i++)
      {
      if(a%i==0)
        break;
      }
    if(i==a)
    printf("%d\n",a);
}
