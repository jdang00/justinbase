#include <stdio.h>

int main(){


char key[] = "Birdie&Company";
char *ptr;


printf("%s:%p\n","Address of ptr: ", &ptr);
printf("%s:%p\n","Address in ptr: ", ptr);

printf("\n");
printf("%s\n", "Pointer reassigned.");
ptr = &key[0];
printf("\n");


printf("%s: %p\n","Address of ptr", &ptr);
printf("%s: %p\n","Address in ptr", ptr);
printf("%s: %p\n","Address of key", &key[0]);


while(*ptr != '\0'){
    printf("%c",*ptr++);
}

printf("\n");
    return 0;
}