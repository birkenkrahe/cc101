

/* - Here's some code: what does it do? What would happen without the */
/*   ~break~ statement? */

/*   #+name: pgm:break */

/* [[file:../README.org::pgm:break][pgm:break]] */
#include <stdio.h>






int main() {
int n;
for (;;) {
  scanf("%d", &n);
  if (n == 0)
    printf("loop: n is %d\n", n);
 }
printf("n is %d\n", n);
return 0;
}
/* pgm:break ends here */
