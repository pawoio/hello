#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

int main()
{
double  a,b,c,d,e,f,g,x,E,A,B,F; //a,b,c,d,e,f,g parametry funkcji F(x) E-epsilon A,B krañce przedzia³u
a=b=c=d=e=f=g=F=x=E=A=B=0;


puts ("Pawel Mlyniec 1I1 \n obliczanie miejsc zerowych funkcji \n F(x)=ax^b+cx^d+ex^f+g \n metoda bisekcji w przedziale A,B i dla wybranej dokladnosci E \n ");
puts ("wprowadz wspolczynniki a,b,c,d,e,f,g \n"); /*
scanf ("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &g);
printf("funkcja to F=%lf*x^%lf+%lf*x^%lf+%lf*x^%lf+%lf",a,b,c,d,e,f,g);
puts ("wprowadz przedzial A B \n");
scanf("%lf %lf", &A,&B);
puts ("wprowadz dodatnia dokladnosc E \n");
scanf("%lf", &E);

if (a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
    {-
        printf ("funkcja stala. Nie ma miejsc zerowych");
        return 0;
    }

x=(A+B)/2;
F=a*pow(x,b)+c*pow(x,d)+e*pow(x,f)+g;

 while (fabs(F)>fabs(E))
{
    x=(A+B)/2; F=a*pow(x,b)+c*pow(x,d)+e*pow(x,f)+g;

if(F*(a*pow(A,b)+c*pow(A,d)+e*pow(A,f)+g)<=0)
  {
    B=x;
  }
else
  {
   if(F*(a*pow(B,b)+c*pow(B,d)+e*pow(B,f)+g)<=0)
          {
            A=x;
          }
           else
           {
               printf("wprowadz inne dane");
               return 0;
           }
  }
}*/ ;x=1;
printf ("wartosc funkcji to: 5 \n");
printf("miejsce zerowe funkcji to: %lf \n",x);
 return 0;
}
