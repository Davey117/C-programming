#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Details  {
 char Name[50];
 char AccountNumber[15];
 char AccountBVN[15];
long long SavingsAccountBalance;
long long CurrentAccountBalance;
char ATMPIN[6];
 char Gender[10];
 char DOB[30];
 char PINResetRecoveryWord[30];
};
struct Details FirstMember;
struct Details SecondMember;
struct Details ThirdMember;
struct Details FourthMember;
struct Details FifthMember;



//First PageOperation
int FirstPageOperation = 0;
char sFirstPageOperation[15];
int FirstPageOperationCounter = 0;
char FirstPageOperationQuestion[15];


//ATM PIN Reset function
void ATMPINResetFunction(const char ATMPINResetRecoveryWord[]);
int ATMPINResetDigit;
 char sATMPINResetDigit[15];
 char ATMPINResetRecoveryWord[15];
char UserInputATMPINResetRecoveryWord[15];
char InputNewPIN[15];
char NewPIN[15];
char ConfirmNewPIN[15];
char ATMPIN[15];
char sResetAcctNameDigit[15];
int  ResetAcctNameDigit;
int  ResetCounter;
char  ResetQuestion[15];


//Storage Function
void Storage( char Name[],
              char AccountNumber[],
              char AccountBVN[],
             long long *SavingsAccountBalance,
             long long *CurrentAccountBalance,
             char ATMPIN[],
              char Gender[],
              char DOB[],
              char PINResetRecoveryWord[]);

 char Name[30];
 char AccountNumber[20];
 char AccountBVN[20];
int AccountBalance;
char ATMPIN[15];
char InputATMPIN[15];
 char Gender[15];
 char DOB[20];
 char PINResetRecoveryWord[15];
int AcctNameDigit;
char sAcctNameDigit[15];
int MainCounter;
char MainQuestion[15];

void MemberDetails();

//Account Type Function
void AcctTypeFunction();
char sAcctType[15];
int AcctType;
int SavingsAcct;
int CurrentAcct;


//Withdrawal Function
void  Withdrawal();
char sWithdrawalAmount[50];


//Check Account Details Function
void CheckAccountDetails();

//Check Account Balance Function
void CheckAccountBalance(long long AccountBalance);


//Operation Function
void OperationFunction(char Name[50], char AccountNumber[20], char AccountBVN[20], char Gender[15], char DOB[20], long long *AccountBalance);
int  Operation;
char sOperation[15];
int  OperationCounter;
char OperationQuestion[15];

int isaValidInteger(const char *StringTobeChecked) {

while (*StringTobeChecked ==  ' ') StringTobeChecked++;
if  (*StringTobeChecked == '\0') return 0;

for (int i = 0; StringTobeChecked[i] != '\0'; i++) {
  if (StringTobeChecked[i] < '0' || StringTobeChecked[i] > '9') return 0;

}
return 1;
}







int main(){

MemberDetails();

do {
printf("Welcome To New World Bank!!!\n");
printf("Press 1 To Login\n");
printf("Press 2 To Change ATM PIN\n");
printf("Enter: ");
fgets(sFirstPageOperation, sizeof(sFirstPageOperation), stdin);
sFirstPageOperation[strcspn(sFirstPageOperation, "\n")] = 0;
FirstPageOperation = atoi(sFirstPageOperation);




switch (FirstPageOperation) {



case 1:
    {
                  do {
printf(("=== Choose Your Acct Name ===\n"));
printf("If you don't remember your account digit, call the customer service\n "
       "+1-504-201-4\n");
printf("Enter Account Digit(Single Number) : ");
fgets(sAcctNameDigit, sizeof(sAcctNameDigit), stdin);
AcctNameDigit = atoi(sAcctNameDigit);

switch (AcctNameDigit) {

        case 1:
    {

        Storage(FirstMember.Name, FirstMember.AccountNumber, FirstMember.AccountBVN, &FirstMember.SavingsAccountBalance, &FirstMember.CurrentAccountBalance, FirstMember.ATMPIN, FirstMember.Gender, FirstMember.DOB, FirstMember.PINResetRecoveryWord);
        break;
    }

        case 2:
    {

        Storage(SecondMember.Name, SecondMember.AccountNumber, SecondMember.AccountBVN, &SecondMember.SavingsAccountBalance, &SecondMember.CurrentAccountBalance, SecondMember.ATMPIN, SecondMember.Gender, SecondMember.DOB, SecondMember.PINResetRecoveryWord);
        break;
    }

        case 3:
    {

        Storage(ThirdMember.Name, ThirdMember.AccountNumber, ThirdMember.AccountBVN, &ThirdMember.SavingsAccountBalance, &ThirdMember.CurrentAccountBalance, ThirdMember.ATMPIN, ThirdMember.Gender, ThirdMember.DOB, ThirdMember.PINResetRecoveryWord);
        break;
    }

        case 4:
    {

        Storage(FourthMember.Name, FourthMember.AccountNumber, FourthMember.AccountBVN, &FourthMember.SavingsAccountBalance, &FourthMember.CurrentAccountBalance, FourthMember.ATMPIN, FourthMember.Gender, FourthMember.DOB, FourthMember.PINResetRecoveryWord);
        break;
    }

        case 5:
    {

        Storage(FifthMember.Name, FifthMember.AccountNumber, FifthMember.AccountBVN, &FifthMember.SavingsAccountBalance, &FifthMember.CurrentAccountBalance, FifthMember.ATMPIN, FifthMember.Gender, FifthMember.DOB, FifthMember.PINResetRecoveryWord);
        break;
    }
        default : {
            printf("You Don't Have an Account With Us\n");
            break;
            }
    }

    if (MainCounter < 2){
    printf("Do You Want To Try Again? Y/N: ");
    fgets(MainQuestion, sizeof(MainQuestion), stdin);
    MainQuestion [strcspn(MainQuestion, "\n")] = 0;
    if ((stricmp(MainQuestion, "y") != 0) && (stricmp(MainQuestion, "N") != 0) && (stricmp(MainQuestion, "Yes") != 0) && (stricmp(MainQuestion, "No") != 0)) {
        printf("Invalid Input!!!");
    }
    }
    MainCounter++;
  }

  while ((stricmp(MainQuestion, "Y"  )== 0 || stricmp(MainQuestion, "Yes") == 0) && MainCounter < 3);
  if (MainCounter == 3) {printf("You Have Reach Maximum Try limit, Try Again Later.");}

          break;
    }
case 2:
    {
          do {
     printf("=== RESET PIN ===\n");
 printf("Please Enter Your Account Digit: ");
 fgets(sResetAcctNameDigit, sizeof(sResetAcctNameDigit), stdin);
 sResetAcctNameDigit[strcspn(sResetAcctNameDigit, "\n")] = 0;
 ResetAcctNameDigit = atoi(sResetAcctNameDigit);
  switch (ResetAcctNameDigit) {

  case 1 :  {ATMPINResetFunction("Lagos");  break;}
  case 2 :  {ATMPINResetFunction("London"); break;}
  case 3 :  {ATMPINResetFunction("Tokyo");  break;}
  case 4 :  {ATMPINResetFunction("Lisbon"); break;}
  case 5 :  {ATMPINResetFunction("Madrid"); break;}
  default:  {printf("You Don't Have an Account With Us!!! \n"); break;}
}

   if (ResetCounter < 2){
    printf("DO YOU WANT TO RESET PIN AGAIN? \n"
           "Y - YES\n"
           "N - NO\n");
            fgets(ResetQuestion, sizeof(ResetQuestion), stdin);
            ResetQuestion[strcspn(ResetQuestion, "\n")] = 0;
            if ((stricmp(ResetQuestion, "Y") != 0) && stricmp(ResetQuestion, "Yes") != 0 && stricmp(ResetQuestion, "N") != 0 && stricmp(ResetQuestion, "No") != 0){
                printf("Invalid Character");
            }
 }

 ResetCounter++;

} while (ResetCounter < 3 && (stricmp(ResetQuestion, "Y")==0 || stricmp(ResetQuestion, "Yes") ==0));
  if (ResetCounter == 3) {printf("Max Try Limit Reached!!!");}
          break;
    }
default :
    {
          printf("Invalid Input!!!\n");
          break;
    }
if (ResetAcctNameDigit == 1){
   strcpy(NewPIN, FirstMember.ATMPIN);}
}

 if (FirstPageOperationCounter < 2){
    printf("DO YOU WANT TO CARRY OUT ANOTHER OPERATION (LOGIN / RESET PIN)? \n"
           "Y - YES\n"
           "N - NO\n");
            fgets(FirstPageOperationQuestion, sizeof(FirstPageOperationQuestion), stdin);
            FirstPageOperationQuestion[strcspn(FirstPageOperationQuestion, "\n")] = 0;
            if ((stricmp(FirstPageOperationQuestion, "Y") != 0) && stricmp(FirstPageOperationQuestion, "Yes") != 0 && stricmp(FirstPageOperationQuestion, "N") != 0 && stricmp(FirstPageOperationQuestion, "No") != 0){
                printf("Invalid Character");
            }
 }

 FirstPageOperationCounter++;

} while (FirstPageOperationCounter < 3 && (stricmp(FirstPageOperationQuestion, "Y")==0 || stricmp(FirstPageOperationQuestion, "Yes") ==0));
  if (FirstPageOperationCounter == 3) {printf("Max Try Limit Reached!!!");}
return 0;
}


void ATMPINResetFunction(const char ATMPINResetRecoveryWord[]){

 printf("Please Enter Recovery Word: ");
 fgets(UserInputATMPINResetRecoveryWord, sizeof(UserInputATMPINResetRecoveryWord), stdin);
 UserInputATMPINResetRecoveryWord [strcspn(UserInputATMPINResetRecoveryWord, "\n")] = 0;
 if (stricmp(UserInputATMPINResetRecoveryWord, ATMPINResetRecoveryWord) == 0) {
    printf("Enter Your New PIN: ");
    fgets(InputNewPIN, sizeof(InputNewPIN), stdin);
    InputNewPIN[strcspn(InputNewPIN, "\n")] = 0;
    printf("\n");
    printf("Confirm Your New PIN: ");
    fgets(ConfirmNewPIN, sizeof(ConfirmNewPIN), stdin);
    ConfirmNewPIN[strcspn(ConfirmNewPIN, "\n")] = 0;
    if (stricmp(InputNewPIN, ConfirmNewPIN) == 0 ) {
        printf("Your PIN Has Successfully been Reset. \n");
        if (ResetAcctNameDigit == 1){
        strcpy(FirstMember.ATMPIN, InputNewPIN);
     } else if (ResetAcctNameDigit == 2){
        strcpy(SecondMember.ATMPIN, InputNewPIN);
     } else if (ResetAcctNameDigit == 3){
        strcpy(ThirdMember.ATMPIN, InputNewPIN);
     } else if (ResetAcctNameDigit == 4){
        strcpy(FourthMember.ATMPIN, InputNewPIN);
     } else if (ResetAcctNameDigit == 5){
        strcpy(FifthMember.ATMPIN, InputNewPIN);
     } else {}
    } else  {
    printf("Above Parameters Did not Match!!!\n");
    }
 } else {printf("Recovery Word is Incorrect!!!\n");}


}


void Storage( char Name[],
              char AccountNumber[],
              char AccountBVN[],
             long long  *SavingsAccountBalance,
             long long  *CurrentAccountBalance,
             char ATMPIN[],
              char Gender[],
              char DOB[],
              char PINResetRecoveryWord[]){

   if (stricmp(Gender, "Male") == 0 ) {printf("Mr. %s\n", Name );
   }else if (stricmp(Gender, "Female") == 0) {printf("Ms. %s\n", Name);
   }else {printf("%s\n", Name);}

   printf("Kindly Enter Your PIN: ");
   fgets(InputATMPIN, sizeof(InputATMPIN), stdin);
   InputATMPIN[strcspn(InputATMPIN, "\n")] = 0;
   if (stricmp(ATMPIN, InputATMPIN) == 0){
    printf("Welcome on Board\n");
    AcctTypeFunction(Name, AccountNumber, AccountBVN, Gender, DOB, SavingsAccountBalance, CurrentAccountBalance);
   }else {printf("Incorrect PIN!!!\n");}



             }

void MemberDetails() {

    //First Member
    strcpy(FirstMember.Name, "Johnson Josh" );
    strcpy(FirstMember.AccountNumber, "3122321515");
    strcpy(FirstMember.AccountBVN, "11223344551");
    FirstMember.SavingsAccountBalance =  500000;
    FirstMember.CurrentAccountBalance = 1000000;
    strcpy(FirstMember.ATMPIN, "1234");
    strcpy(FirstMember.Gender, "Male");
    strcpy(FirstMember.DOB, "5th May 1984");
    strcpy(FirstMember.PINResetRecoveryWord, "Lagos");


    //Second Member
    strcpy(SecondMember.Name, "Jacob Ben" );
    strcpy(SecondMember.AccountNumber, "3122321616");
    strcpy(SecondMember.AccountBVN, "11223344661");
    SecondMember.SavingsAccountBalance = 200000;
    SecondMember.CurrentAccountBalance = 10000000;
    strcpy(SecondMember.ATMPIN, "2345");
    strcpy(SecondMember.Gender, "Male");
    strcpy(SecondMember.DOB, "6th Jan 1984");
    strcpy(SecondMember.PINResetRecoveryWord, "London");


    //Third Member
    strcpy(ThirdMember.Name, "Regina Julius" );
    strcpy(ThirdMember.AccountNumber, "31223217171");
    strcpy(ThirdMember.AccountBVN, "11223344771");
    ThirdMember.SavingsAccountBalance =  150000;
    ThirdMember.CurrentAccountBalance = 0;
    strcpy(ThirdMember.ATMPIN, "3456");
    strcpy(ThirdMember.Gender, "Female");
    strcpy(ThirdMember.DOB, "1st Mar 2000");
    strcpy(ThirdMember.PINResetRecoveryWord, "Tokyo");



    //Fourth Member
    strcpy(FourthMember.Name, "Rachael Emmanuel" );
    strcpy(FourthMember.AccountNumber, "31223218181");
    strcpy(FourthMember.AccountBVN, "11223344881");
    FourthMember.SavingsAccountBalance =  100000;
    FourthMember.CurrentAccountBalance = 20000000;
    strcpy(FourthMember.ATMPIN, "4567");
    strcpy(FourthMember.Gender, "Female");
    strcpy(FourthMember.DOB, "11th Jul 1973");
    strcpy(FourthMember.PINResetRecoveryWord, "Lisbon");



    //Fifth Member
    strcpy(FifthMember.Name, "John Mike" );
    strcpy(FifthMember.AccountNumber, "3122321919");
    strcpy(FifthMember.AccountBVN, "11223344991");
    FifthMember.SavingsAccountBalance =  20000;
    FifthMember.CurrentAccountBalance =  0;
    strcpy(FifthMember.ATMPIN, "5678");
    strcpy(FifthMember.Gender, "Male");
    strcpy(FifthMember.DOB, "9th May 2003");
    strcpy(FifthMember.PINResetRecoveryWord, "Madrid");
}



void AcctTypeFunction(char Name[50], char AccountNumber[15],char  AccountBVN[15], char Gender[15], char DOB[20], long long *SavingsAcct, long long *CurrentAcct) {

    printf("=== Choose Account Type ===\n"
           "Press 1 For Savings Account\n"
           "Press 2 For Current Account\n");
           fgets(sAcctType, sizeof(sAcctType), stdin);
           sAcctType[strcspn(sAcctType, "\n")] = 0;
           AcctType  = atoi(sAcctType);

           switch(AcctType) {

            case 1 : {

            if (SavingsAcct > 0 ) {
                printf("=== This Is Your Savings Account ===\n");
                OperationFunction(Name, AccountNumber, AccountBVN, Gender, DOB, SavingsAcct);



            }else {printf("You Do Not Have a Savings Account\n ");}
            break;
            }

            case 2 : {

            if (CurrentAcct > 0) {
                printf("=== This Is Your Current Account ===\n");
                OperationFunction(Name, AccountNumber, AccountBVN, Gender, DOB, CurrentAcct);


            }else {printf("You Do Not Have a Current Account\n ");}
             break;
            }
            default : {printf("Invalid Input!!!\n");
            break;}
            }

           }



           void OperationFunction(char Name[50], char AccountNumber[20], char AccountBVN[20], char Gender[15], char DOB[20], long long *AccountBalance){
do {

printf("\n");
printf("What Do You Want To Do?\n");
printf("Press 1 To Withdraw\n"
       "Press 2 To Check Account Details\n"
       "Press 3 To Check Account Balance\n"
       "Press 4 To Exit\n"
       "Enter: ");

fgets(sOperation, sizeof(sOperation), stdin);
sOperation[strcspn(sOperation, "\n")] = 0;
Operation = atoi(sOperation);

switch (Operation) {

case 1 : {Withdrawal(AccountBalance); break;}

case 2 : {CheckAccountDetails(Name, AccountNumber, AccountBVN, DOB, Gender); break;}

case 3 : {CheckAccountBalance(*AccountBalance); break;}

case 4 : {break;}

default : {printf("Invalid Input!!!\n"); break;}

}
    if (stricmp(sOperation, "4") == 0) {
        printf("Exit Successful");
        break;
    }


    if (OperationCounter < 2){
            printf("\n");
    printf("Do Carry Out Another Operation e.g Withdrawal? Y/N: ");
    fgets(OperationQuestion, sizeof(OperationQuestion), stdin);
    OperationQuestion [strcspn(OperationQuestion, "\n")] = 0;
    if ((stricmp(OperationQuestion, "y") != 0) && (stricmp(OperationQuestion, "N") != 0) && (stricmp(OperationQuestion, "Yes") != 0) && (stricmp(OperationQuestion, "No") != 0)) {
        printf("Invalid Input!!!");
    }

    }
        OperationCounter++;
  }

  while ((stricmp(OperationQuestion, "Y"  )== 0 || stricmp(OperationQuestion, "Yes") == 0) && OperationCounter < 3);
  if (OperationCounter == 3) {printf("You Have Reach Maximum Try limit, Try Again Later.\n");}




}



void Withdrawal(long long  *AccountBalance){
    long long WithdrawalAmount;
printf("=== WITHDRAWAL ===\n"
       "Enter Withdrawal Amount: $");

fgets(sWithdrawalAmount, sizeof(sWithdrawalAmount), stdin);
sWithdrawalAmount[strcspn(sWithdrawalAmount, "\n")] =0;

if (!isaValidInteger(sWithdrawalAmount)){

    printf("Invalid Input, Please Enter Whole Numbers.\n");
    return;
}
WithdrawalAmount = atoi(sWithdrawalAmount);

if (WithdrawalAmount <= 0) {
        printf("Amount Must Be Greater Than Zero\n");

} else if (WithdrawalAmount > *AccountBalance) {
    printf("Insufficient Funds\n");

}else  {printf("Withdrawal Of $%lld Was Successful", WithdrawalAmount);

*AccountBalance -= WithdrawalAmount;
}
}



void CheckAccountDetails(char Name[50], char AccountNumber[15], char AccountBVN[15], char DOB[20], char Gender[15]){
printf("=== ACCOUNT DETAILS ===\n");

printf("Account Name: %s\n", Name);
printf("Account Number: %s\n", AccountNumber);
printf("Account BVN: %s\n", AccountBVN);
printf("Date Of Birth: %s\n", DOB);
printf("Gender: %s\n", Gender);
}

void CheckAccountBalance(long long AccountBalance){
printf("Balance: $%lld\n", AccountBalance);
}




