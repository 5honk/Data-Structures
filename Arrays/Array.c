#include <stdio.h>
    int main() {

        /*
            What exactly is an Array? 
                Think of cupboards next to eachother in the kitchen, there is only a finite number. If we want to put data in like a cookie,
                we open the cupboard and put the cookie in there. That cupboard (Index) now contains the value of a cookie. 

                Since these cupboards are quite small, we can't fit more than one type of value. cookies (food) and milk (drinks) cannot be
                in cupboards next to eachother. 

                    char foodCupboard = {"MILK", "cookie", " choco cookie", "white choco"}   This will show an error with milk
                    char foodCupboard = {"cookie", " choco cookie", "white choco"}          This is correct
                
                So, when creating an array, it can only be the data type that is declared. An int array can
                only have int values, char array can only have char values...
        
        */

        // Creating a Array, so we can itterate every index later
            int Array1 [10] = {1,2,3,4,5,6,7,8,9,10};
        
        // Calling a specific index from the Array 
            printf("\nCalling index 5 from the Array = ");
            printf("%d \n", Array1[5]);    // Since C, counts from 0 instead of 1, we get the result of 6 rather than 5.

        // Calling through all indexs with given itterations
            printf("Calling all Indexs of Array with for Loop itterations set to 10");
            int i; // We create a varaible i = 0, so the for loop knows where to start counting "for" how many times till completion.
            
            for (int i = 0; i < 10; i++) { 
                printf("\n\t%d", Array1[i]);
            }
        
        // Calling through all indexs without the given iterations (If we are unaware of the size of the Array)
            printf("\n Calling through all Indexs without set itterations"); 

            // since we dont know how large the Array is, we make a programme that finds the end of the Arrays index.
                 int ArrayLength = sizeof(Array1) / sizeof(Array1[0]);    // We divide the arrays bytes by the index to find the Array size

                 for (i = 0; i < ArrayLength; i++) {
                    printf("\n\t %d", Array1[i]);
                 }         

        return 0;
    }