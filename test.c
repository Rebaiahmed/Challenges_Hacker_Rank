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
 nbr = 4;
result[0]= '0';
char a= '0';


printf("%c%d:%s:%s",a,nbr,mm,ss);



printf("%d:%s:%s",nbr,mm,ss);

    return 0;
}

