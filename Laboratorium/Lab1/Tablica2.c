/*
Sebastian Pavlovič
* -----------------
Laboratorium
Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale. x - zmieniase z x0 do xn, krokiem hx
* -----------------
2022-10-11
*/

#include <math.h>
#include <stdio.h>

void main(void){
  double a, x, xn, hx;

  printf("Podaj a: ");
  scanf("%lf", &a);  
  printf("Podaj x0: ");
  scanf("%lf", &x);  
  printf("Podaj xn: ");
  scanf("%lf", &xn);
  printf("Podaj hx: ");
  scanf("%lf", &hx);
  
  while(x<=xn){
    printf("%.1lf = %.1lf * %.1lf ^ 2 \n",(a*x*x), a, x);
    
    x = x + hx;
  }
}
