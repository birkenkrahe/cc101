/* Pointers  must be initialized */

/*   - Non-initialized pointers lead to invalid data or expressions. */

/*   - Pointer variables should always be initialized with: */
/*     - another variable's memory address (e.g. ~&i~), OR */
/*     - with 0, OR */
/*     - with the keyword ~NULL~. */

/*   - Here are some /valid/ pointer initializations - ~printf~ uses the */
/*     conversion specifier ~%p~ for pointers. */

/*     #+name: ptrInit */

/* [[file:../README.org::ptrInit][ptrInit]] */
#include <stdio.h>






int main() {
double *ptr1;  // declarations
int *ptr2;
int *ptr3;
double x = 3.14; // initialize variable

ptr1 = &x; // initialize with address
ptr2 = 0;  // initialize with 0
ptr3 = NULL; // initialize with NULL

printf("%p %p %p\n", ptr1, ptr2, ptr3);
return 0;
}
/* ptrInit ends here */
