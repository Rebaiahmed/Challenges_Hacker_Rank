
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
int i=0,minimum ,arr_i=0 ;
/*
-_-_-_-_-__-_-_-_define function to return minimum values -_-__-_-_-_-_-_-_-_-__-

*/

int min(int param[1000],int n) {

 minimum = param[0];

for( i=1;i<n;i++)
{
if(param[i]< minimum)
   {
minimum  = param[i] ;
     }//end if
}

return minimum ;
}



//_-_-_-_--__-_--__--_-_-__-_-_-_-_-_-_-_-_-_-_-_-_-_-_-__-_-__

//function to delete elements

int cutElements( int param[1000],int n,int element)

{
int j=0,i=0 ;
  int  r[1000];

for( i=0;i<n;i++)
{
if(param[i]==element)
{
continue ;
}
r[j] = param[i] ;
j++ ;
}
param = r ;
return j ;
}







    int n;
    scanf("%d",&n);
    int arr[n];
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    printf("the minimu numbr is %d \n", min(arr,n));
    return 0;
}
