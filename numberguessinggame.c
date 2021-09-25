/*For this program I will insert a random number generator that picks between 1 and 10*/
/*Then I will use a while loop to create the game. I'll create the menu in the loop*/
/*Then I will put an if statement in the while loop to get the game working*/
/*Use scanf for the initial input, and if said input is more or less than the random number, you lose the game*/
/*Make an if statement for changing the max value, and the max value can't be more than 10 and less than 1*/
/*If you press 3 the game just ends*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int input;
    while(input != 3)
    {
        int max_value = 10;
        time_t t;
        srand((unsigned) time(&t));
        int randomnumber = rand() %  max_value + 1;
        printf("Press 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        scanf("%d", &input);
        if(input == 1)
        {
            printf("Okay! Let's play the game!\n");
            printf("Pick a number between 1 and 10, and let's see if you're right!\n");
            int input2;
            scanf("%d", &input2);
            if(input2 == randomnumber)
            {
                printf("Congratulations! You got it right!\n");
                printf("Wanna play again?\n");
            }
            else if(input2 > randomnumber)
            {
                printf("Unfortunately, that is too high and isn't correct.\n");
                printf("Wanna try again?\n");
            }
            else if(input2 < randomnumber)
            {
                printf("Unfortunately, that is too low and isn't correct.\n");
                printf("Wanna try again?\n");
            }

        }
        else if(input == 2)
        {
            printf("You want to change the max value? Okay! Just know it can't be above 10 and less than 1!\n");
            int input3;
            scanf("%d", &input3);
            if(input3 > 10)
            {
                printf("You can't do that.\n");
            }
            else if(input3 < 1)
            {
                printf("You can't do that.\n");
            }
            else
            {
                max_value = input3;
                printf("Max Value has been changed to %d.\n", input3);
            }

        }
        else if(input == 3)
        {
            printf("Thanks for playing! Bye!\n");
        }
    }
    return 0;
}