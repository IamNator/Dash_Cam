#include <stdio.h>

int main (){
   
 int * numptr;
 int number = 5;
 numptr = &number;
 printfPtr(numptr);
   
   return(0);
}  

void printfPtr(int * num){
   printf("%d",*num);
}