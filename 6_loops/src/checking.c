#include <stdio.h>






/* Balances a checkbook */
#include <stdio.h>

int main(void)
{
  int cmd; // user choice 0...4
  float balance = 0.0f, credit, debit;

  // User instructions
  printf("*** ACME checkbook-balancing program ***\n");
  printf("Commands: 0=clear, 1=credit, 2=debit, ");
  printf("3=balance, 4=exit\n\n");

  for(;;) {  // do this forever until exit=4
    printf("Enter command: ");
    scanf("%d", &cmd);
    switch (cmd) { 
    case 0:            // clear balance
      balance = 0.0f;
      break;
    case 1:            // credit amount
      printf("Enter amount of credit: ");
      scanf("%f", &credit);
      balance += credit;
      break;
    case 2:            // debit amount
      printf("Enter amount of debit: ");
      scanf("%f", &debit);
      balance -= debit;
      break;
    case 3:          // print balance
      printf("Current balance: $%.2f\n", balance);
      break;
    case 4:
      return 0;
    default:
      printf("Commands: 0=clear, 1=credit, 2=debit, ");
      printf("3=balance, 4=exit\n\n");
      break;
    }
  }
}
