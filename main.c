/*
=================================
Assessment Two for PHY2027 module
Date: 28/10/2018
=================================
*/

#include <stdio.h>
#include <stdlib.h>

#define NMAX 100

/*
===================================================================================
This is a program to calculate the sum of a series of integer numbers using a user
defined input of the about of terms
===================================================================================
*/

/*
=================================
Functions created for the program
=================================
*/

void create_array (int inums[], int choice);
int add_function (int inums[], int nsum);

int main()
{
    int choice, doMenu, inums[NMAX] = {0}, nsum;
    printf("\n Menu\n\n"
           "\t 1. The sum of a series of odd integer numbers\n"
           "\t 2. The sum of a series of even integer numbers\n\n"
           "\t 3. Quit the program\n");


/*
=======================================================================
While loop to maintain the menu selection even if a wrong entry is made
A sanity check
=======================================================================
*/
    while (doMenu = 1) {
                scanf("%d", &choice);

                switch (choice) {

                case 1:
                    printf("You have selected the sum of a series of odd integer numbers\n");

                    doMenu = 0;
                    create_array(inums, choice);

                    printf("How many numbers would you like to add\n");
                    scanf("%d",&nsum);

                    nsum = add_function(inums, nsum);
                    printf("Your sum is %d", nsum);

                    return 0;
                case 2:
                    printf("You have selected the sum of a series of even integer numbers\n");

                    doMenu = 0;
                    create_array(inums, choice);

                    printf("How many numbers would you like to add\n");
                    scanf("%d",&nsum);

                    nsum = add_function(inums, nsum);
                    printf("Your sum is %d", nsum);

                    return 0;
                case 3:
                    printf("You have selected to terminate the program\n");

                    doMenu = 0;

                    return 0;

/*
============================================================================================================
If a number outside of 1-3 is chosen or a character is picked this runs and asks the user to re-enter your choice
============================================================================================================
*/
                default:
                    printf("Please look over the options and try again\n");

                    while (getchar() != '\n');

                    doMenu = 1;

                    break;
            }
        }
}

/*
==================================================================
Function returning the values for odd or even numbers in the array
==================================================================
*/
void create_array(int inums[], int choice){

    for(int i = 0; i < NMAX; ++i){
        inums[i] = choice;
        choice+=2;
    }
}


/*
========================================================================
Function returning the sum of the odd or even values in the chosen range
========================================================================
*/
int add_function(int inums[], int nsum){

    int sum = 0;

    for (int i = 0; i < nsum; ++i){
        sum = sum + inums[i];
    }

    return sum;
}



/* Results

i. All done on one copy and paste as menu system repeats until a valid input is selected.


 Menu

         1. The sum of a series of odd integer numbers
         2. The sum of a series of even integer numbers

         3. Quit the program
4
Please look over the options and try again
f
Please look over the options and try again
fhgkdjg
Please look over the options and try again
66
Please look over the options and try again

ii. Odd numbers


 Menu

         1. The sum of a series of odd integer numbers
         2. The sum of a series of even integer numbers

         3. Quit the program
1
You have selected the sum of a series of odd integer numbers
How many numbers would you like to add
10
Your sum is 100
Process returned 0 (0x0)   execution time : 4.838 s
Press any key to continue.

Analytical Solution

1+3+5+7+9+11+13+15+17+19 = 100


ii. Even numbers


 Menu

         1. The sum of a series of odd integer numbers
         2. The sum of a series of even integer numbers

         3. Quit the program
2
You have selected the sum of a series of even integer numbers
How many numbers would you like to add
10
Your sum is 110
Process returned 0 (0x0)   execution time : 3.534 s
Press any key to continue.


Analytical Solution

2+4+6+8+10+12+14+16+18+20 = 110

*/



