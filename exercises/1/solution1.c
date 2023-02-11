#include<stdio.h>
#include <stdlib.h>


/* Author: Angel Granados
   Generalization of Euler Project Problem 1 */

int MCM(int m1, int m2){

  int max;

  if(m1>m2){
    max=m1;
  }else{
    max=m2;
  }
  while(max%m1!=0 || max%m2!=0 ){
    max=max+1;
  }
  return(max);
  
}

int MAXVALUE(int n,int m){

  int maxvalue;
  if(n%m==0){
    maxvalue=((n-1)/m)*m;
  }else{
    maxvalue=(n/m)*m;
  }
  return(maxvalue);
}

int SUMVALUE(int n, int num){

  int v,vg,i=1;
  v=0;vg=0;
  while(v<MAXVALUE(n,num)){
    v=num*i;
    i++;
    vg+=v;
  }
  return(vg);
  
}


int main(void){

  int m1,m2,mcm,n,status=0;

  printf("\n PROBLEM 1: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9.");  
  printf("\n The sum of these multiples is 23. Find the sum of all multiples of 3 or 5 below 1000 (Here we present the");
  printf("\n general case, given any two natural multipliers find the sum of the given multipliers behind a natural n) \n\n");
   
  printf("\n Insert the first multiplier (ONLY INTEGER POSITIVE): ");
  scanf("%d",&m1);
  if(m1<0){
    printf("\n POSITIVE INTEGER PLEASE \n");
    exit(status);
  }
  
  
  printf("\n Insert the second multiplier (ONLY INTEGER POSITIVE): ");
  scanf("%d",&m2);
  if(m2<0){
    printf("\n POSITIVE INTEGER PLEASE \n");
    exit(status);
  }
  
  printf("\n Insert the limit number (ONLY INTEGER POSITIVE): ");
  scanf("%d",&n);
  if(n<0){
    printf("\n POSITIVE INTEGER PLEASE \n");
    exit(status);
  }

  
  if(mcm>n){
    printf("\n The result of the sum is: %d\n\n ",SUMVALUE(n,m1)+SUMVALUE(n,m2));
  }else{
    printf("\n The result of the sum is: %d\n\n ",SUMVALUE(n,m1)+SUMVALUE(n,m2)-SUMVALUE(n,MCM(m1,m2)));
  }

  /* printf("The sum of the first multiplier = %d \n",SUMVALUE(n,m1));
     printf("The sum of the second multiplier = %d \n",SUMVALUE(n,m2));
     printf("The sum of the LCM = %d \n\n",SUMVALUE(n,MCM(m1,m2))); */

}
