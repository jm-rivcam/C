
#include <stdio.h>
#include <math.h>

int main (void)

{
  float x=0,y=0,y1=0,y2=0,y3=0,T[10]={0},D=0,H[]={0.50,1.0,1.5,2.0,2.5,3.0,3.5,4.0};
  int d=0, i=0, D=30;

  while (d==0) {
    i=0;

    while (i<10){
     printf("Insert a new period: ");
     scanf("%f",&T[I]);




      /* code */

      x=(D/(pow(T[I],2)*9.81));
      y=((0.101*H[i])/pow(T[I],2));


      y1=0.0000694862 + (0.00268746*sqrt(x));
      y2=-0.000221222 + (0.022113*sqrt(x));
      y3=0.0000442896 + (23.3335*pow(x,2));
      if (y<y1)
      {
        printf("pair number %d is a first order wave \n", i );
      }

      else if ((y>y1)&&(y<y2))
      {
        printf("pair number %d is a second order wave \n", i  );

      }
      else if ((y>y2)&&(y<y3))
      {
        printf("pair no %d is a third order wave \n", i  );
      }
      else if ((y>y2)&&(y>y3))
      {
        printf("pair no %d is a fifth order wave \n", i  );
      }

      i++;
    }

  }

    return 0;

}
