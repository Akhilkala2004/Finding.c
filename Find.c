/*Program to read two matrices and find the given number is there in the two matrices or not */

#include <stdio.h>

int main()

{

int i, j,m,n; //declaring variabels for rows and columns

int a[i][j]; //declaring size of matrix

 

int number,count=0;

   

              printf("Enter how many rows:");scanf("%d",&m); //Assignig how many Rows

   

              printf("Enter how many columns:");scanf("%d",&n); //Assignig how many columns

   

              printf("Enter %d elements for matix:",m*n);

    for(i=0; i<m; i++) // Reading and printing matrix

    {

        for(j=0; j<n; j++)

          {          

                              scanf("%d", &a[i][j]);

          

                              printf("%d ", a[i][j]);

           }

 

           printf("\n");

    }

    printf("Enter a number to search for: "); //code for finding number in the matrix

    scanf("%d", &number);

   for(i=0; i<m; i++)  

    {

        for(j=0; j<n; j++)

        {

             

                           if (a[i][j]==number) //logic for finfing the element

                  {

      

        printf("The number %d was found in a[%d][%d].",number,i,j);

        count=count+1;

                           printf("\n");

        }

       

       

        }

 

    printf("no of repetations=%d \n ",count);

    }

 

 

    return 0;

}
