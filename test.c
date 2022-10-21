#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1000
int func1 (char a[],int length,char first,int ret);


int main(int argc, char const *argv[])
{
    
    char buffer[32];
    char *b = buffer;
    size_t bufsize = 32;
    size_t characters;

    if(buffer == NULL){
        perror("Buffer failed to allocate");
        exit(1);
    }

    printf("Password: ");
    characters = getline(&b, &bufsize,stdin);
    
    int size = characters - 1;

    int num = func1(buffer, size, buffer[1], 0);

    if(num == 0){
        printf("Correct Password!\n");
    } else {
         printf("Incorrect Password!\n");

    }

    return 0;
}



int func1 (char a[],int length,char first,int ret) {

        if(length <= 7) {
                ret = 1;
        } else {
            ret = 0;
        };


         for(int i = 0; i < length; i++) {
                if(a[i] != first) {
                    ret = 1;
                    break;
                }
        }

        
        
        return ret;

}
