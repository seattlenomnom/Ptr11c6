/* Ptr11c6 creates three entries, initializes them and then connect them into
 * a linked list
*/

#include <stdio.h>

int main(void) {

    /* define entry */
    struct entry {
        int value;
        struct entry *next;
    };

    /* create three entries */
    struct entry n1, n2, n3;

    /* inialize threee entries */
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;

    /* assemble the three entries into linked list */
    n1.next = &n2;
    n2.next = &n3;
    n3.next = (struct entry *) 0;

    /* print out the values */
    printf("n1.value = %i\n", n1.value);
    printf("n2.value = %i\n", n2.value);
    printf("n3.value = %i\n", n3.value);

    return(0);
}
