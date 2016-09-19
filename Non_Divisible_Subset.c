
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
int n,k , nbr=0,i=0,a_i=0 ,index=0,j=0,length=0,element ,a =0;

  scanf("%d %d",&n,&k);
    long int *set = malloc(sizeof(long int) * n);
 long int *S1 = malloc(sizeof(long int) * n);
 int belonged = 1 ;
    for(a_i = 0; a_i < n; a_i++){
       scanf("%ld",&set[a_i]);
    }
    // we must sort the atble before do any thing


 for(i= 0; i< n; i++){
       for(j = 0; j < n; j++){
      if(set[i]<set[j]){
      //permutation
  a  =set[i];
  set[i]= set[j];
  set[j] =a ;
      }
    }
    }










S1[length] = set[0]  ;

length ++ ;
//------------------
  for(a_i = 1; a_i < n; a_i++){

     element = set[a_i];
       belonged =1;


      for(j=0;j<length;j++)
      {
      if( (S1[j]+ element)% k==0  )
      {
      belonged = 0;

      break ;
      }
      }//end for

if(belonged==1){

S1[length] = element ;
length++ ;
}



    }


printf("%d \n" , length+1);
    return 0;
}

