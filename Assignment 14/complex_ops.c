#include <stdio.h>
typedef struct complx {
    float real,imag;
} complx;

complx sum(complx n1, complx n2);
complx subtract(complx n1, complx n2);
complx multiply(complx n1, complx n2);

int main() {
    complx n1, n2, add, sub, product;
    printf("Enter real and imaginary parts for first complex : ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("Enter real and imaginary parts for second complex : ");
    scanf("%f %f", &n2.real, &n2.imag);
    
    add=sum(n1, n2);
    printf("Sum = %.1f + %.1fi \n", add.real, add.imag);
    sub=subtract(n1,n2);
    printf("Difference = %.1f + %.1fi \n", sub.real, sub.imag);
    product= multiply(n1,n2);
    printf("Product = %.1f + %.1fi \n", product.real, product.imag);
    return 0;
}

complx sum(complx n1, complx n2) {
    complx temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

complx subtract(complx n1, complx n2) {
    complx temp;
    temp.real=n1.real-n2.real;
    temp.imag=n1.imag-n2.imag;
    return temp;
}

complx multiply(complx n1, complx n2) {
    complx temp;
    temp.real=n1.real*n2.real - n1.imag*n2.imag;
    temp.imag=n1.real*n2.imag + n1.imag*n2.real;
   return temp;
}