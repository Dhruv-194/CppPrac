
#include<stdio.h>
#include <math.h>

//calculate value of sin
void cal_sin(float n) {    
    float acc = 0.0001, denominator, sinx, sinval;
    n = n * (3.142 / 180.0);  //convert in radian
    float temp = n;
    sinx = n;          
    sinval = sin(n);    
    int i = 1;
    do {
        denominator = 2 * i * (2 * i + 1);
        temp = -temp * n * n / denominator;
        sinx = sinx + temp;
        i = i + 1;
    } while (acc <= fabs(sinval - sinx));
   printf("%f",sinx);
}
//calculate value of cos  
void cal_cos(float n) {
    float acc = 0.0001, temp, denominator, cosx, cosval;
    n = n * (3.142 / 180.0); //convert in radiam
    temp = 1;
    cosx = temp;          
    cosval = cos(n);
    int i = 1;
    do {
        denominator = 2 * i * (2 * i - 1);
        temp = -temp * n * n / denominator;
        cosx = cosx + temp;
        i = i + 1;
    } while (acc <= fabs(cosval - cosx));
    printf("%f",cosx);
}
int main() {
    float n = 30;
    printf("The value of sin is:");
    cal_sin(n);
    printf("\n");
    n=60;
    printf("The value of cos is:");
    cal_cos(n);
    return 0;
}