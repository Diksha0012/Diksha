//ATM
#include<stdio.h>
//#include<conio.h>

double m,acc,tb=30000,d,am,bal,c,x;
char name;
int b,pin;
 main()
{

//);
 printf("\n\n\n\n\n\n\n\n\n");
 printf("  \t\t\t     Welcome To HDFC BANK      \n\n");
 printf("   \t\t\t   World Leading ATM Network       \n\n\n"   );
 printf("      \t\t\t    Please insert your card        \n");

 //getch();
 //clrscr();

 printf("\n\n\n\n\n\n\t\t\tPlease select your languge : ");
 printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t1.English");
 printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 2.Hindi");

// getch();
// clrscr();

 printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter your pin then press green button : ");
 scanf("%d",&pin);
// getch();
 //clrscr();

 printf("\n\n\t\tPlease select the service required ");
 printf("\n\n\n\n\n\t\t\t\t\t\t\t1.Withdrawl Cash");
 printf("\n\n\t\t\t\t\t\t\t2.Balance Enquiry");
 printf("\n\n\t\t\t\t\t\t\t3.Mini Statement");
 printf("\n\n\t\t\t\t\t\t\t4.Balance Transfer");
 scanf("%d",&b);
 switch(b)
 {
  case 1:
 // getch();
 // clrscr();
  printf("\n\n\n\n\n\t\tEnter Your amount : ");
  scanf("%lf",&x);
 // getch();
 // clrscr();
  printf("\n\tWithdrawl has been done successfully of amount %lf",b);
  bal=tb-x;
  printf("\n\n\t\tBalance : %lf",bal);
  break;
  case 2:
//  clrscr();
  printf("\n\n\t\tBalance : %lf",tb);
  break;
  case 3:
 // clrscr();
  printf("\n\n\n\tDEC 16, 2023  13:55:06");
  printf("\n\t42439401  RANGRA RANGRA CHOWK");
  printf("\n\t-----------------------------------------\n");
  printf("\n\tCARD NUMBER  : *********2781");
  printf("\n\tTRANSACTION  : MINISTATEMENT");
  printf("\n\t");
  printf("\n\tRSP CODE       : 00");
  printf("\n\t29/11          250.00 - TO TRANSFER");
  printf("\n\t01/12         2000.00 - TO TRANSFER");
  printf("\n\t9/12              5.00+INT TRANSFER");
  printf("\n\t9/12            510.00 -ATM WDL");
  printf("\n\t12/12          600.00 - TO TRANSFER");
  printf("\n\t21/11          430.00 - TO TRANSFER");
  printf("\n\t21/11          125.00 -ATM WDL");
  printf("\n\tAVAIL BAL         4520.69+");
  break;
  case 4:
 // clrscr();
  printf("NAME : ");
  scanf("%s",&name);
  printf("\nACCOUNT NO. : ");
  scanf("%lf", &acc);
  printf("\nIFSC CODE : ");
  scanf("%lf",&c);
  printf("\nMOBILE NO. : ");
  scanf("%lf",&m);
  printf("AMOUNT : ");
  scanf("%lf",&am);
 // getch();
 // clrscr();
  printf("YOUR AMOUNT HAS BEEN SUCCESSFULLY TRANSFERED ");
  printf("\nBALANCE : %lf",tb-am);
  break;
  default:
  printf("wrong");
 }
// getch();
}
