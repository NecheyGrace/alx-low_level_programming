#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)                            /* Most important part of the program!  */
{
    int n;                          /* Need a variable... */
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf( "Please enter a random number: " );  /* Asks for age */
    scanf( "%d", &n );                 /* The input is put in age */
    if ( n > 0 ) {                  /* If the age is less than 100 */
        printf ("is positive\n" ); /* Just to show you it works... */
    }
    else if ( n == 0 ) {            /* I use else just to show an example */
        printf( "is zero\n" );
    }
    else if ( n < 0 ) {            /* I use else just to show an example */
        printf( "is negative\n" );
    }

    else {
        printf( "You are really old\n" );     /* Executed if no other statement is */
    }
  return (0);

}
