#include <stdio.h>

void printfPtr(int * num){
   printf("%d",*num);
}


int main (){
   
 int * numptr;
 int number = 5;
 numptr = &number;
 printfPtr(numptr);
   
   return(0);
}  

