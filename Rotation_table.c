//the link of challnge

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

//int* arr = (int *) malloc(sizeof(int) * 5);
  long int *liste =(long int *) malloc(sizeof(long int) * 5);
   long int *indexes =(long int *) malloc(sizeof(long int) * 5);
    int n=0, k=0,q=0 ,i,nbr=0,j;
    long int permut =0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    //Read the first input

    scanf("%d %d %d",&n,&k,&q);


  //Read the elements of the first List

  for(i =0; i<n;i++)
  {
  scanf("%ld", &liste[i]);
  }


   for(i =0; i<q;i++)
  {


  scanf("\n %ld ", &indexes[i]);


  }





/*
THE ROTATION OPERATION
*/

for(i=0;i<k;i++)
{
// k rotattions

for(j=0;j<=n-1;j++)
{


permut =liste[n-1];

    liste[n-1] =liste[j];
liste[j]= permut;

}//end of rotation

       //read the list


}


  for(i =0; i<q;i++)
  {



printf("%ld \n",   liste[indexes[i]]);

  }



//printf("elemnt 11 %ld ", (long int)liste[0]);*/

    return 0;
}

