#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    int counter = 0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);

    //--------

    while(counter==0){
    x1+= v1;
    x2+=v2;
    //test if are equals
    if(x1==x2)
    {
    counter =1;
    }


    //condition to quit the program
    if(x1>=10000 || x2>==10000){
    counter =1;
    }
    }

    return 0;
}
