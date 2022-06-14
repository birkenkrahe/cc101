

/* - Code: */

/*   #+name: sum */

/* [[file:../README.org::sum][sum]] */
#include <stdio.h>






int main() {
int n, sum = 0;

printf("Enter integers (0 to terminate).\n");
scanf("%d", &n);    // need non-zero number to start
while ( n != 0 ) {
  sum += n;         // sum = sum + n
  scanf("%d", &n);
 }

printf("The sum is %d\n", sum);
return 0;
}
/* sum ends here */

/* Summing numbers */

/* - [ ] Go to the practice workbook and rewrite the summing numbers */
/*   program [[sum]] using ~do...while~. */

/* - Solution: */

/*   #+name: sum1 */

/* [[file:../README.org::sum1][sum1]] */
#include <stdio.h>






int main() {
int n=0, sum = 0;

printf("Enter integers (0 to terminate).\n");

do {
  sum += n;
  scanf("%d", &n);
 } while ( n != 0 );

printf("The sum is %d\n", sum);
return 0;
}
/* sum1 ends here */
