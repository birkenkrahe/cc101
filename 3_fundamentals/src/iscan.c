/* Reading input */
/*   * The following statement reads an ~int~ value and stores it in the */
/*     variable ~i~. To run it, you have to tangle the code block (with */
/*     ~C-u C-c C-v t~), compile and run it on the command line - not on */
/*     the simulated ~eshell~ or the Emacs ~shell~, but on the Windows */
/*     CMD terminal command line[fn:14]. */
/*     #+name: iscan */

/* [[file:../README.org::iscan][iscan]] */
#include <stdio.h>

int main() {
int i;
puts("Enter an integer!");
scanf("%d", &i);
printf("You entered %d\n", i);
return 0;
}
/* iscan ends here */
