#include<stdio.h>
int main()
{
    float m,y=0,b,c,z;
    int x;
    char a;
    scanf("%c",&a);
    scanf("%f",&m);
    if(a=='A')
    {
        if(m<=200)
            z=199;
        else if(m>200)
        {x=m;
        c=x%200;
        y=c*3;
        b=x-(200+c);
        b=3/(0.60/b);
        z=y+199+b;
        }
    }
    else if(a=='B')
    {

        if(m<=400)
           z=299;
        else if(m>400)
       {
        x=m;
        c=x%400;
        y=c*2;
        b=x-(400+c);
        b=2/(0.60/b);
        z=y+299+b;}
    }
    printf("%.2f",z);
    return 0;
}
