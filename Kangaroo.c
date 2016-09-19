#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <limits.h>

int main(){

 //printf("The maximum value of INT = %d\n", INT_MAX);
    int x1;
    int v1;
    int x2;
    int v2;
    int counter = 0, diff1=0,diff2=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);

    //--------

if( (x1>x2 && v1>v2) || (x2>x1 && v2>v1) || (x2>x1 && v2==v1) || (x1>x2 && v2==v1))
{
printf("NO");
}

else

if(x1==x2 && v1==v2)
{
printf("YES");
}
else
{



   while(counter==0){
    x1+= v1;
    x2+=v2;
    //test if are equals
    if(x1==x2)
    {
    counter =1;
      printf("YES");
    break ;
    }


diff1 = abs(x2-x1)   ;
diff2 =  abs( (x2+v2) - (x1+v1)  );




if(diff2>diff1)
{
printf("NO");
break;
}

    }//end of while

   /* if(counter==1)
    {
    printf("YES");
    }else
    {
     printf("NO");
    }*/
}



    return 0;
}

