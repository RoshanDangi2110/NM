#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp((-x))-5
#define fd(x) -exp((-x))
#define E 0.0005
int main(){

float x0, x1, f0, fd0, e;

printf("\n Enter the initial value: ");
scanf("%f", &x0);

printf("\n f(x0)\t\tfd(x0)\t\tx1\t\tError");
printf("\n -----------------------------------------------------");

begin:
f0 = f(x0);
fd0 = fd(x0);
x1 = x0 - (f0/fd0);
e =fabs((x1-x0)/x1);

                if( e < E){
                                printf("\n\n Approximate Root = %.5f", x1);
                }
                else{
                                printf("\n %.2f\t\t%.3f\t\t%.3f\t\t%.4f",f(x0),fd(x0),x1,e);
                                x0 = x1;
                                goto begin;
                }

getch();

}
