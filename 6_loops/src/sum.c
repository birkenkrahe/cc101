

/*   #+RESULTS: sum_input */
/*   : 8 23 71 5 0 */

/* - Code: */

/*   #+name: sum */

/* [[file:../README.org::sum][sum]] */
#include <stdio.h>






int main() {
int n, sum = 0;

printf("Enter integers (0 to terminate): ");
scanf("%d", &n);  printf("%d ", n);   // need non-zero number to start
while ( n != 0 ) {
  sum += n;         // sum = sum + n
  scanf("%d", &n); printf("%d ", n);
 }

printf("\nThe sum is %d\n", sum);
return 0;
}
/* sum ends here */
