#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    int a0 = 0,k=0;
   int results[10];
   int j=0;

    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int i=0,st_present=0,a_i=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for( a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }

        for(i=0;i<n;i++){
        if(a[i]<=0)
        {
        st_present++ ;
        }//end if
        }//end for

        if(st_present<k)
        {

            results[j]= 0;
        }else
        {

          results[j]= 1;
        }
   j++ ;
        st_present=0;
    }


//diplsay results
for(k=0;k<j;k++)
{
if(results[k]==0)
{
printf("YES \n");
}else
{
printf("NO \n");
}
}


    return 0;
}

