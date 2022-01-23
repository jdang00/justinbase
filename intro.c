#include <stdio.h>

#define SIZE 5

//** Function Prototypes
void printArray(int array[], int size);

int main(int argc, char *argv[]){
   char val1 = 0b10000001;
   unsigned char val2 = 0b10000001;
   int numbers[SIZE]={10,20,30,40,50};
   char str1[3]={'d','o','g'};
   char str2[4]={'c','a','t','\0'};
   char str3[]="Hello";


   printArray(numbers,SIZE);

  printf("%d\n",val1); 
  printf("%d\n",val2); 
  printf("%p:%s\n",str1,str1);
  printf("%p:%s\n",str2,str2);
  printf("%p:%s\n",str3,str3);
   

   return 0;
}

void printArray(int array[], int size){
   int index;

   for(index=0;index<size;index++){
      printf("%d\n",array[index]);
   }

}

