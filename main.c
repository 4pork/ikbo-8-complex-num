#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float Re;
    float Im;
    }complex_count;

complex_count* t;

complex_count* summ(complex_count* a, complex_count* b){
    complex_count* t;
t =(complex_count*)malloc(sizeof (complex_count));
t -> Re = a -> Im + b -> Im;
t -> Re = a -> Re + b -> Im;
}

complex_count* subst(complex_count* a, complex_count* b){
    complex_count* t;
t =(complex_count*)malloc(sizeof (complex_count));
t -> Re = a -> Im - b -> Im;
t -> Re = a -> Re - b -> Im;
}

complex_count* mult(complex_count* a, complex_count* b){
    complex_count* t;
t =(complex_count*)malloc(sizeof (complex_count));
t -> Re = a->Re * b->Re - a -> Im * b -> Im;
t -> Im = a->Re * b->Im + a -> Re * b -> Im;
}

complex_count* divide(complex_count* a, complex_count* b){
    complex_count* t;
t = (complex_count*)malloc(sizeof(complex_count));
t -> Im = (b -> Im * a -> Re - a -> Re * b -> Im) / (pow(a -> Re, 2) + (pow(b -> Im, 2)));
t -> Re = (a -> Re * a -> Re + b -> Im * b -> Im) / (pow(a -> Re, 2) + (pow(b -> Im, 2))); }


void printcomp(complex_count a){
if (a.Im<0)
printf("z = %f - %f i/n", a.Re, (-1)*a.Im);
else
printf("z = %f + %f i/n", a.Re, a.Im);
}

int main()
{
complex_count x;
x.Re = 10;
x.Im = 12;
printcomp(x);
return 0;
}
