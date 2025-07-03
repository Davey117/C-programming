#include <stdio.h>
#include <string.h>
int main(){
//This is an ATM Machine built using if/else and Switch statement

//Johnson's Acct Details
const char JohnsonJoshAccountNumber[] = "3122321515";
const char JohnsonJoshAccountBVN[] = "11223344551";
long long JohnsonJoshAccountBalance   = 5000000;

//Jacob's Acct Details
const char JacobBenAccountNumber[] = "3133321616";
const char JacobBenAccountBVN[] = "21223344552";
long long JacobBenAccountBalance   = 10000000;

//Regina's Acct Details
const char ReginaJuliusAccountNumber[] = "3122321717";
const char ReginaJuliusAccountBVN[] = "31223344553";
long long ReginaJuliusAccountBalance   = 500000;

//Rachael's Acct Details
const char RachaelEmmanuelAccountNumber[] = "3122321818";
const char RachaelEmmanuelAccountBVN[] = "41223344554";
long long RachaelEmmanuelAccountBalance   = 2000000;

//John's Acct Details
const char JohnMikeAccountNumber[] = "3122321919";
const char JohnMikeAccountBVN[] = "51223344555";
long long JohnMikeAccountBalance   = 2000;

printf("=== Welcome To the New World Bank ===\n");
printf(("=== Choose Your Acct Name ===\n"));
printf("If you don't remember your account digit, call the customer service\n "
       "+1-504-201-4\n");
/*1. Johnson Josh
2. Jacob Ben
3. Regina Julius
4. Rachael Emmanuel
5. John Mike */
printf("Acct Digit(single Number): ");


int AcctName =0;

scanf("%d", &AcctName);
switch (AcctName) {

case 1: {
    printf("Mr. Johnson Josh\n"
           "Enter Your pin:");
           char pin[5];
    scanf("%4s", pin);
    if (strcmp("1234",pin)== 0)

        {  int AcctType = 0;

            printf("=== Choose Acct Type ===\n"
                "1. Savings.\n"
                "2. Current.\n"
                "Choose:");
                scanf("%d", &AcctType);
                switch (AcctType) {
                    case 1: {
                        printf("You don't have a savings account ");
                        break;}
                    case 2: {
                                int operation = 0;
                                printf("===what do you want to do===\n"
                                       "1. Check Acct Details.\n"
                                       "2. Withdrawal.\n"
                                       "3. Check Account Balance.\n"
                                       "4. Exit.\n"
                                       "Enter: ");
                                        scanf("%d",&operation);
                                switch(operation) {
                                case 1: {printf("Acct Name: Johnson Josh\n"
                                                "Acct Number: %s\n"
                                                "BVN: %s\n"
                                                ,JohnsonJoshAccountNumber, JohnsonJoshAccountBVN);
                                                break;}

                                case 2:  {
                                 int Withdrawal = 0;
                                 printf("Enter Withdrawal Amount: \n$");
                                 scanf("%d", &Withdrawal);
                                 if (Withdrawal > JohnsonJoshAccountBalance) {
                                    printf("Insufficient Funds");
                                    break;
                                 }else {printf("Please Take Your Cash\n"
                                               "Thanks For Banking With US.\n");
                                               break;}

                                }

                                case 3: {
                                printf("Your Acct Balance is: $%lld\n ", JohnsonJoshAccountBalance);
                                break;}

                                case 4: {
                                printf("Please Take Your Card");
                                break;}

                                default : {
                                printf("Unable To process Information");
                                break;}

                                }
                                break;
                    }
                                default : {printf("Unable To Process Information");
                                break;}
                }

    }
        else{printf("Incorrect Pin, Try Again.");
        break;}

    }
    break;

case 2: {
    printf("Mr. Jacob Ben\n"
           "Enter Your pin:");
           char pin[5];
    scanf("%4s", pin);
    if (strcmp("2345",pin)== 0)

        {  int AcctType = 0;

            printf("=== Choose Acct Type ===\n"
                "1. Savings.\n"
                "2. Current.\n"
                "Choose:");
                scanf("%d", &AcctType);
                switch (AcctType) {
                    case 1: {
                        printf("You don't have a savings account ");
                        break;}
                    case 2: {
                                int operation = 0;
                                printf("===what do you want to do===\n"
                                       "1. Check Acct Details.\n"
                                       "2. Withdrawal.\n"
                                       "3. Check Account Balance.\n"
                                       "4. Exit.\n"
                                       "Enter: ");
                                        scanf("%d",&operation);
                                switch(operation) {
                                case 1: {printf("Acct Name: Jacob Ben\n"
                                                "Acct Number: %s\n"
                                                "BVN: %s\n"
                                                ,JacobBenAccountNumber, JacobBenAccountBVN);
                                                break;}

                                case 2:  {
                                 int Withdrawal = 0;
                                 printf("Enter Withdrawal Amount: \n$");
                                 scanf("%d", &Withdrawal);
                                 if (Withdrawal > JacobBenAccountBalance) {
                                    printf("Insufficient Funds");
                                    break;
                                 }else {printf("Please Take Your Cash\n"
                                               "Thanks For Banking With US.\n");
                                               break;}

                                }

                                case 3: {
                                printf("Your Acct Balance is: $%lld\n ", JacobBenAccountBalance);
                                break;}

                                case 4: {
                                printf("Please Take Your Card");
                                break;}

                                default : {
                                printf("Unable To process Information");
                                break;}

                                }
                                break;
                    }
                                default : {printf("Unable To Process Information");
                                break;}
                }

    }
        else{printf("Incorrect Pin, Try Again.");
        break;}

    }
    break;

case 3: {
printf("Ms. Regina Julius\n"
       "Enter Your pin:");
       char pin[5];
scanf("%4s", pin);
if (strcmp("3456",pin)== 0)

    {  int AcctType = 0;

        printf("=== Choose Acct Type ===\n"
            "1. Savings.\n"
            "2. Current.\n"
            "Choose:");
            scanf("%d", &AcctType);
            switch (AcctType) {
                case 1: {
                    printf("You don't have a savings account ");
                    break;}
                case 2: {
                            int operation = 0;
                            printf("===what do you want to do===\n"
                                   "1. Check Acct Details.\n"
                                   "2. Withdrawal.\n"
                                   "3. Check Account Balance.\n"
                                   "4. Exit.\n"
                                   "Enter: ");
                                    scanf("%d",&operation);
                            switch(operation) {
                            case 1: {printf("Acct Name: Regina Julius\n"
                                            "Acct Number: %s\n"
                                            "BVN: %s\n"
                                            ,ReginaJuliusAccountNumber, ReginaJuliusAccountBVN);
                                            break;}

                            case 2:  {
                             int Withdrawal = 0;
                             printf("Enter Withdrawal Amount: \n$");
                             scanf("%d", &Withdrawal);
                             if (Withdrawal > ReginaJuliusAccountBalance) {
                                printf("Insufficient Funds");
                                break;
                             }else {printf("Please Take Your Cash\n"
                                           "Thanks For Banking With US.\n");
                                           break;}

                            }

                            case 3: {
                            printf("Your Acct Balance is: $%lld\n ", ReginaJuliusAccountBalance);
                            break;}

                            case 4: {
                            printf("Please Take Your Card");
                            break;}

                            default : {
                            printf("Unable To process Information");
                            break;}

                            }
                            break;
                }
                            default : {printf("Unable To Process Information");
                            break;}
            }

}
    else{printf("Incorrect Pin, Try Again.");
    break;}

}
    break;

case 4: {
    printf("Ms. Rachael Emmanuel\n"
           "Enter Your pin:");
           char pin[5];
    scanf("%4s", pin);
    if (strcmp("4567",pin)== 0)

        {  int AcctType = 0;

            printf("=== Choose Acct Type ===\n"
                "1. Savings.\n"
                "2.Current.\n"
                "Choose:");
                scanf("%d", &AcctType);
                switch (AcctType) {
                    case 2: {
                        printf("You don't have a current account ");
                        break;}
                    case 1: {
                                int operation = 0;
                                printf("===what do you want to do===\n"
                                       "1. Check Acct Details.\n"
                                       "2. Withdrawal.\n"
                                       "3. Check Account Balance.\n"
                                       "4. Exit.\n"
                                       "Enter: ");
                                        scanf("%d",&operation);
                                switch(operation) {
                                case 1: {printf("Acct Name: Rachael Emmanuel\n"
                                                "Acct Number: %s\n"
                                                "BVN: %s\n"
                                                ,RachaelEmmanuelAccountNumber, RachaelEmmanuelAccountBVN);
                                                break;}

                                case 2:  {
                                 int Withdrawal = 0;
                                 printf("Enter Withdrawal Amount: \n$");
                                 scanf("%d", &Withdrawal);
                                 if (Withdrawal > RachaelEmmanuelAccountBalance) {
                                    printf("Insufficient Funds");
                                    break;
                                 }else {printf("Please Take Your Cash\n"
                                               "Thanks For Banking With US.\n");
                                               break;}

                                }

                                case 3: {
                                printf("Your Acct Balance is: $%lld\n ", RachaelEmmanuelAccountBalance);
                                break;}

                                case 4: {
                                printf("Please Take Your Card");
                                break;}

                                default : {
                                printf("Unable To process Information");
                                break;}

                                }
                                break;
                    }
                                default : {printf("Unable To Process Information");
                                break;}
                }

    }
        else{printf("Incorrect Pin, Try Again.");
        break;}

    }
    break;

case 5: {
    printf("Mr. John Mike\n"
           "Enter Your pin:");
           char pin[5];
    scanf("%4s", pin);
    if (strcmp("5678",pin)== 0)

        {  int AcctType = 0;

            printf("=== Choose Acct Type ===\n"
                "1. Savings.\n"
                "2. Current.\n"
                "Choose:");
                scanf("%d", &AcctType);
                switch (AcctType) {
                    case 2: {
                        printf("You don't have a current account ");
                        break;}
                    case 1: {
                                int operation = 0;
                                printf("===what do you want to do===\n"
                                       "1. Check Acct Details.\n"
                                       "2. Withdrawal.\n"
                                       "3. Check Account Balance.\n"
                                       "4. Exit.\n"
                                       "Enter: ");
                                        scanf("%d",&operation);
                                switch(operation) {
                                case 1: {printf("Acct Name: John Mike\n"
                                                "Acct Number: %s\n"
                                                "BVN: %s\n"
                                                ,JohnMikeAccountNumber, JohnMikeAccountBVN);
                                                break;}

                                case 2:  {
                                 int Withdrawal = 0;
                                 printf("Enter Withdrawal Amount: \n$");
                                 scanf("%d", &Withdrawal);
                                 if (Withdrawal > JohnsonJoshAccountBalance) {
                                    printf("Insufficient Funds");
                                    break;
                                 }else {printf("Please Take Your Cash\n"
                                               "Thanks For Banking With US.\n");
                                               break;}

                                }

                                case 3: {
                                printf("Your Acct Balance is: $%lld\n ", JohnMikeAccountBalance);
                                break;}

                                case 4: {
                                printf("Please Take Your Card");
                                break;}

                                default : {
                                printf("Unable To process Information");
                                break;}

                                }
                                break;
                    }
                                default : {printf("Unable To Process Information");
                                break;}
                }

    }
        else{printf("Incorrect Pin, Try Again.");
        break;}

    }
    break;
}
  return 0;     
}
