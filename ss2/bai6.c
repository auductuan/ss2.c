#include <stdio.h>

int main() {
   const float PI = 3.14;
   float bankinh =5;
    printf("Ban kinh hinh tron la: %.2f\n", bankinh);
   float c= 2*PI*bankinh;
   printf("Chu vi hinh 'tron la: %.2f\n", c);
   float s= PI*bankinh*bankinh;
   printf("Dien tich hinh tron la: %.2f", s);
   
   return 0;
}
