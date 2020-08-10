/* Suppose you have a jar of 45 cookies and a group of seven children. You’ll divide the cookies equally 
 among the children and work out how many each child has. Then you’ll work out how many cookies are left over.
*/

#include <stdio.h>

int main(void) {
    int cookies = 45;
    int children = 7;
    int cookies_child = 0;
    int cookies_over = 0;

    cookies_child = cookies/children;
    printf("You have %d children and %d cookies", cookies, children);
    printf("\nGive each child %d cookies.", cookies_child);

    cookies_over = cookies%children;
    printf("\nThere are %d cookies left over.\n", cookies_over);
    return 0;
}