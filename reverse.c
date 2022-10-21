#include <stdio.h>

long func1(long a, long b);

int main(){


    long a = 1;
    long b = 1;
    long c = func1(a,b);
    printf("%lu\n", c);

}

long func1(long a, long b){
    return a+b;
}