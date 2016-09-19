#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long n;
    scanf("%ld",&n);

    long occ_a = 0, mod_a =0;
    int i=0 ;

    long length  = strlen(s);

    for(i=0;i<length;i++)
    {
    if(s[i]=='a')
    {

    occ_a++ ;
    }

    }


//if occurence == length of string

if(occ_a==length)
{
printf("%ld \n", n);
}else if(occ_a==0)
{
printf("0 \n");
}


else{

occ_a = (n / length) * occ_a;

mod_a = n % length ;


if(mod_a !=0)
{
for(i=0;i<mod_a;i++)
{
if(s[i]=='a')
{
occ_a++ ;
}
}
}
printf("%ld \n", occ_a);

}



    return 0;
}
