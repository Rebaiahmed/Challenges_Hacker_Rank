#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i=0;
    int k;
    int index =0 ;
    int result = 0;
    int a_i =0;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }


    //index to travers all the array

    while(index<=n-2)
    {



    for(i=index;i<=n-2;i++)
    {
    if(   (a[index]+ a[i+1]) % k==0  )
    {
    result++ ;
    }//end if

    }//end ofr
index++;

    }//end while




printf("%d ", result);
    return 0;
}
