#include <stdio.h>
#include <cs50.h>

int main(void)
{
            // Explain the rule and get numbers from the user.
           printf("If the result of the addition of your two next numbers is equal a secret number, you will get a positive message. Find the result =]. \nTip: Its a binary one, 0-1.\n");

            int x =0;
            int y =0;
            int result =0;

            printf("\nWhat is the first value you want to use?\n");
            scanf("%i", &x);

            printf("\n");

             printf("\nWhat is the second value you want to use?\n");
             scanf("%i", &y);

            printf("\n");

            //Print the result of the addition of the numbers received from the user.
            result = x+y;

            printf("The result is:  %i. \n", result);

            //Check if the result is equal 10 and if it is then print a positive message.

           while (result!=10) {

             printf("\nThis is not the secret result. Please, try again.\n");

              printf("\nWhat is the first value you want to use?\n");
            scanf("%i", &x);

            printf("\n");

             printf("\nWhat is the second value you want to use?\n");
             scanf("%i", &y);

            printf("\n");

            result = x+y;

            printf("The result is:  %i. \n", result);

             }


           if (result==10){
           printf("\n");
           printf("Congratulations, you found our result =]. You are a amzing person, have a nice day! \n");
           }


}

