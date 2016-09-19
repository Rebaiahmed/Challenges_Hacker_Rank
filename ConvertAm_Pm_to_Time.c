#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);


    //declare our vars

    char* hh = malloc(2);
      char* mm = malloc(2);
      char* ss = malloc(2);
      char* clock= malloc(2);
        char* result= malloc(2);
    hh[0] = time[0];
    hh[1] = time[1];
    /*-----------*/

      mm[0] = time[3];
    mm[1] = time[4];




    /*---------------------*/

      ss[0] = time[6];
    ss[1] = time[7];

    clock[0] = time[8];
     clock[1] = time[9];
    int nbr, nbr2,min,sec ;
  nbr = atoi(hh);



//test if AM OR PM


if(strcmp(clock, "AM") ==0)
{
//case AM !!
//check if hours =12

if(nbr==12)
{
result = "00";
printf("%s:%s:%s",result,mm,ss);
}else if(nbr>9 && nbr<12){
printf("%d:%s:%s",nbr,mm,ss);
}else{
char a= '0';


printf("%c%d:%s:%s",a,nbr,mm,ss);
}



}else{
//case PM !!
//check if equal to 12
if(nbr==12){
nbr2 = 12 ;
printf("%d:%s:%s",nbr2,mm,ss);
}
else{
nbr2 = 12 + nbr ;
printf("%d:%s:%s",nbr2,mm,ss);
}

}

    return 0;
}
