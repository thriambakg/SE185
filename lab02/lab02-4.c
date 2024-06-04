#include <stdio.h>

int main()
{
   int a,b,e,f,j;
    double c,d,g,h,i,k;
    a = 6427 + 1725;
    printf("A: %d\n",a);
    b = (6971 * 3925) - 95;
    printf("B: %d\n",b);
    c = 79 + 12 / 5;
    printf("C: %.2f\n",c);
    d = 3640.0 / 107.9;
    printf("D: %.2f\n",d);
    e = (22 / 3) * 3;
    printf("E: %d\n",e);
    f = 22 / (3 * 3);
    printf("F: %d\n",f);
    g = 22 / (3 * 3);
    printf("G: %.2f\n",g);
    h = 22 /  3* 3;
    printf("H: %.2f\n",h);
    i = (22.0 / 3) * 3.0;
    printf("I: %.2f\n",i);
    j = 22.0 / (3 * 3.0);
    printf("J: %d\n",j);
    k = 22.0 / 3.0 * 3.0;
    printf("K: %.2f\n",k);
    
    //lab02-4
    double area = pow(((23.567/3.1416)/2),2)*3.1416; 
    //Pi*d = circumference so Pi(circ/Pi/2)^2 = area 
    printf("Area from 23.567 circumference is: %f\n",area);
    
    double ftoM = 14 * .3048; //1 foot is .3048 meters
    printf("14 feet is %.2f meters\n", ftoM);
    
    double ftoC = (76-32)/1.8; //1 F is (1-32)/1.8 C
    printf("76 degrees F is %.2f celcius\n", ftoC);
}