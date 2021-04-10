#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    float p,q,m;

    scanf("%d%d%d",&a,&b,&c);
    p = -b/2.*a;
    d = b*b-4*a*c;
	q = (sqrt(-d)/2.*a);
    m = (sqrt(d));
    

    if(a==0)
    {
        printf("not a quadratic");
    }
    else if(d==0)
    {
        printf("two equal roots:%.4f %.4f",p+m,p-m);
    }
    else if(d>0)
    {
        printf("distinct real roots:%.4f %.4f",p+m,p-m);
    }
    else if(d<0)
    {
        printf("complex roots:%.4f+%.4fi %.4f-%.4fi",p,q,p,q);
    }
    return 0;
}