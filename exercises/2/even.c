#include<stdio.h>
#include<stdlib.h>

int main(void){

  long int a,b,h,sum,limit=4000000;
  sum=0;
  a=1;
  b=1;
  while(b<limit){
    if(b%2 == 0){
      sum+=b;
    }
    h=a+b;
    a=b;
    b=h;
  }
  system("clear");
  printf("\n\n The sum =%ld \n\n ",sum);
  


}
