#include<stdio.h>
int main()
{
    int balance=1000;
    int pin = 1234;
    int tnpin;
    int option;
    system("COLOR 69");
    printf("\n\n\n\n\n\n\t\t\t Welcome To Prime Bank ATM Booth\n\n");

    while(1)
    {
        printf("Please Enter Your 4 digit Secret Number : ");
        scanf("%d",&tnpin);
        if(pin != tnpin)
        {
                printf("\n\t\t\tInvalid Pin,Please Enter Correct Pin\n\n\n");
        }
        while(tnpin==pin)
        {
            printf("\n\nWhat Do You Want To Do?\n");
            printf("\n\n\t\t\t1. Check Your Balance\n");
            printf("\n\n\t\t\t2. Deposit\n");
            printf("\n\n\t\t\t3. Withdraw\n");
            printf("\n\n\t\t\t4. Exit\n");
            printf("\n\nPlease Select A Option : ");
            scanf("%d",&option);

            if(option==5 || option==0 || option==6 || option==7 || option==8 || option==9)
            {
                printf("\n\n\t\tYou enter Incorrect Option, Please Enter Correct Option\n\n\n");
            }


            if(option==1)
            {
                printf("\n\n\tYour Balance is: %d\n", balance);

                 FILE *b;
                b=fopen("program.txt","a");
                fprintf(b,"your balance %d\n",1000);
            }


            else if(option==2)
            {
                int amountdeposit;
                printf("\n\n\tHow Much Money Do You Want To Deposit: ");
                scanf("%d",&amountdeposit);

                FILE *b;
                b=fopen("program.txt","a");
                fprintf(b,"amount of add %d\n",amountdeposit);

                if(amountdeposit > 0 && amountdeposit %500 == 0)
                {
                    printf("\n\n\tYour Money Has Been Successfully Credited");
                    balance = balance + amountdeposit;

                    FILE *b;
                b=fopen("program.txt","a");
                fprintf(b,"Amount after adding TK %d\n",balance);

                }
                else
                    {

                            if(amountdeposit %500 != 0)
                            {
                                printf("\n\n\tYou Must Enter An Amount That Is Divisible By 500\n");
                            }
                            else
                            {
                                printf("\n\n\tInvalid Deposit Amount\n");
                            }
                    }
            }


            else if(option == 3)
            {
                int amountwithdraw;
                printf("\n\n\tHow Much Money Do You Want To Withdraw: ");
                scanf("%d",&amountwithdraw);

                 FILE *a;
                a=fopen("program.txt","a");
                fprintf(a,"Amount of withdraw %d\n",amountwithdraw);


                if(amountwithdraw <= balance && amountwithdraw %500 == 0)
                {
                    printf("\n\n\tYou Have Successfully Withdraw money\n");
                    balance = balance - amountwithdraw;

                     FILE *b;
                b=fopen("program.txt","a");
                fprintf(b,"Balance After Withdraw %d\n",balance);

                }

                else
                {
                    if(amountwithdraw > balance)
                    {
                        printf("\n\n\tInsufficent Balance\n");
                    }
                    else
                    {
                        printf("\n\n\tYou Must Enter An Amount That Is Divisible By 500\n");
                    }
                }

            }


             if(option == 4)
            {
                printf("\n\n\t\t\tThank You For Banking With Us\n");
                //printf("\n\n\t\t\tPlease Collect Your Receipt\n\n");

                      FILE *b;
                b=fopen("program.txt","a");
                fprintf(b,"Thank You For Banking With Us");
                return 0;
            }

        }
    }

}

