#include <stdio.h>

int loop_stuffs ()
 {
   /* The loop goes while x < 10, and x increases by one every loop*/
   // The condition can be left empty for infinite loop
     for ( int x = 0; x < 10; x++ )
    {
      /* Keep in mind that the loop condition checks
      the conditional statement before it loops again.
      consequently, when x equals 10 the loop breaks.
      x is updated before the condition is checked. */
      // if (x == 2)
      // {
      //   continue;
      // } else if (x == 5)
      // {
      //   break;
      // }

      switch (x)
      {
        case 2:
          x++;
          printf( "\n %d", x );
          break;
        case 5:
          x = 10;
          break;
        default:
          printf( "\n %d", x );
          break;
      }

      //For regualr if statement
      //printf( "\n %d", x );
    }

    int while_loop = 0;
    while (while_loop < 3)
    {
      printf("\n While: %d" , while_loop);
      while_loop++;
    }

    int do_while = 100;
    do
    {
      /* "Hello, world!" is printed at least one time
      even though the condition is false */
      printf( "\n Hello, world again!" );
    } while ( do_while < 100 );

    return 0;
  }
