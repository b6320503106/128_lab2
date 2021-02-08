#include<stdio.h>
int main()
{
    char a;
    int n;
    scanf("%c",&a);
    scanf("%d",&n);
    if(n>=1&&n<=30&&a>=65&&a<=90)
    {
    if(a>=65&&a<=73)
          {
              if(n%2==0)
               printf("%c%c%c%c%c",123,64,95,64,125);
           else if(n%2==1)
           {
               if(n%5!=0)
                printf("%c%c%c%c%c",40,94,95,94,41);
               else if(n%5==0)
                printf("%c%c%c%c%c%c%c",92,40,94,95,94,41,47);
           }

          }
    else if(a>=74&&a<=82)
          {
              if(n%2==0)
               printf("%c%c%c%c%c",123,42,118,42,125);
           else if(n%2==1)
           {
               if(n%5!=0)
                printf("%c%c%c%c%c",40,42,111,42,41);
               else if(n%5==0)
                printf("%c%c%c%c%c%c%c",92,40,42,111,42,41,47);
           }
          }
    else if(a>=83&&a<=90)
          {
              if(n%2==0)
               printf("%c%c%c%c%c",123,120,95,120,125);
           else if(n%2==1)
           {
               if(n%5!=0)
                printf("%c%c%c%c%c",40,84,95,84,41);
               else if(n%5==0)
                printf("%c%c%c%c%c%c%c",92,40,84,95,84,41,47);
           }
          }
    }
return 0;
}
