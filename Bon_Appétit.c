
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

int n , k,somme=0,nb_charged=0,b_actual,a_i=0,b_charged=0;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
   scanf("%d",&b_charged);


    for(a_i = 0; a_i < n; a_i++){
   if(a_i==k)
   {
   continue ;
   }
   somme += a[a_i];
    }



b_actual = somme/2 ;

if(b_actual==b_charged)
{
printf("Bon Appetit \n");
}else
{
printf("%d \n",(b_charged-b_actual));
}




    return 0;
}


