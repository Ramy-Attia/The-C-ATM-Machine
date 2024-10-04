#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int accounts[2][2] = {{500,1000},{750,325}}; /*initializing 2*2 array for bank accounts */
char user_name [5];  /*initializing one dimensional array for user name*/
int user_choice; /* variable to store user choice between 1 and 2 wherehe chooses between savings and checking acounts respectively*/
int amount; /*variable to store amount of money user wants to withdraw*/
int new_balance; /*variable to store the new balance of an account after subtracting the withdrew amount*/

int main(void){
   printf("Enter User Name: ");/*printf used function to indicate to user to enter their name */
   fgets(user_name,5,stdin);/*fgets function here is used to take input of user*/
   user_name[strcspn(user_name, "\n")] = 0;/*The line  is used to remove the newline character (\n) that is added when you input a string using fgets.*/
   printf("Hello %s :)\n",user_name);

   printf("to withdraw from savings please enter 1 \nto withdraw from checking please enter 2\n");
   scanf("%d",&user_choice);/*this scanf function will take input of user wether it's 1 or 2 and then stores it into user_choice*/

if (strcmp(user_name,"a")== 0){/*if statement with condition of username being equal to a and using strcmp to compare between 2 strings*/
  switch(user_choice){ /*switch statement activated by the value of user_choice*/
  /*there are 2 cases in this switch statement with case 1 handeling savings account for a and case 2 handeling checking account for a*/
  /*first thing each case has is to show balance for the accounts followed by a question for user to ask about the amount they wanna withdraw*/
  /*when the user enters the amount the value is stored in 'amount' varaiable then the if statements that follow are the logic that prints out the specific number of bills for amount withdrew */
    case 1: printf("Savings Account: %d\n",accounts[0][0]);
            printf("how much would you like to withdraw?");
            scanf("%d",&amount);

            if (amount > 200 ){
                printf("invalid amount! please enter value less than or equal $200");
                }
            else if(amount <= accounts[0][0]) {

                new_balance = accounts[0][0] - amount;


                     }
         int hundreds = amount /100;
            if (hundreds > 0){
                printf("%d $100 bill(s)\n", hundreds);
            }
             amount = amount % 100;

         int twenties = amount / 20;
            if (twenties > 0){
                printf("%d $20 bill(s)\n", twenties);
            }
             amount = amount % 20;

         int tens = amount / 10;
            if (tens > 0){
                printf("%d $10 bill(s)\n", tens);
            }
            amount= amount % 10;

         int fives = amount / 5;
            if (fives > 0){
                printf("%d $5 bill(s)\n", fives);
            }
            amount = amount %5;
            if(amount > 0 ){
                printf("%d $1 bill(s)\n", amount);
            }
         printf("New Account Balance: %d",new_balance);  /*after the program is done with the logic it will print each type of dollar bill according to amount entered and the number of bills then it will print the new account balance
         using the printf above this line*/
 break;



case 2: printf("Checking Account: %d\n",accounts[0][1]);  /*this case is the second and last case in this switch as it handles the checking account for a and has the same algorithim as case 1*/
            printf("how much would you like to withdraw?");
            scanf("%d",&amount);
             if (amount > 200 ){
                printf("invalid amount! please enter value less than or equal $200");
                }
            else if(amount <= accounts[0][1]) {

                new_balance = accounts[0][1] - amount;


                     }
          hundreds = amount /100;
            if (hundreds > 0){
                printf("%d $100 bill(s)\n", hundreds);
            }
             amount = amount % 100;

          twenties = amount / 20;
            if (twenties > 0){
                printf("%d $20 bill(s)\n", twenties);
            }
             amount = amount % 20;

          tens = amount / 10;
            if (tens > 0){
                printf("%d $10 bill(s)\n", tens);
            }
            amount= amount % 10;

          fives = amount / 5;
            if (fives > 0){
                printf("%d $5 bill(s)\n", fives);
            }
            amount = amount %5;
            if(amount > 0 ){
                printf("%d $1 bill(s)\n", amount);
            }
         printf("New Account Balance: %d",new_balance);
break;
  }
}
  /*the code from here to the end is the same as the first half of the code but the only difference is that it handles the algorithim for person 'b'*/

else if (strcmp(user_name,"b")== 0){
   switch(user_choice){
    case 1: printf("Savings Account: %d\n",accounts[1][0]);
     printf("how much would you like to withdraw?");
            scanf("%d",&amount);

            if (amount > 200 ){
                printf("invalid amount! please enter value less than or equal $200");
                }
            else if(amount <= accounts[1][0]) {

                new_balance = accounts[1][0] - amount;


                     }
         int hundreds = amount /100;
            if (hundreds > 0){
                printf("%d $100 bill(s)\n", hundreds);
            }
             amount = amount % 100;

         int twenties = amount / 20;
            if (twenties > 0){
                printf("%d $20 bill(s)\n", twenties);
            }
             amount = amount % 20;

         int tens = amount / 10;
            if (tens > 0){
                printf("%d $10 bill(s)\n", tens);
            }
            amount= amount % 10;

         int fives = amount / 5;
            if (fives > 0){
                printf("%d $5 bill(s)\n", fives);
            }
            amount = amount %5;
            if(amount > 0 ){
                printf("%d $1 bill(s)\n", amount);
            }
        printf("New Account Balance: %d",new_balance);
   break;
    case 2: printf("Checking Account: %d\n",accounts[1][1]);
     printf("how much would you like to withdraw?");
            scanf("%d",&amount);

            if (amount > 200 ){
                printf("invalid amount! please enter value less than or equal $200");
                }
            else if(amount <= accounts[1][1]) {

                new_balance = accounts[1][1] - amount;


                     }
          hundreds = amount /100;
            if (hundreds > 0){
                printf("%d $100 bill(s)\n", hundreds);
            }
             amount = amount % 100;

          twenties = amount / 20;
            if (twenties > 0){
                printf("%d $20 bill(s)\n", twenties);
            }
             amount = amount % 20;

          tens = amount / 10;
            if (tens > 0){
                printf("%d $10 bill(s)\n", tens);
            }
            amount= amount % 10;

          fives = amount / 5;
            if (fives > 0){
                printf("%d $5 bill(s)\n", fives);
            }
            amount = amount %5;
            if(amount > 0 ){
                printf("%d $1 bill(s)\n", amount);
            }
         printf("New Account Balance: %d",new_balance);
break;
  }
}


}
