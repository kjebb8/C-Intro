#include <stdio.h>

 int get_var ()
 {
    int this_is_a_number;

    printf( "Please enter a number: " );

    scanf( "%d", &this_is_a_number );
    printf( "You entered: %d", this_is_a_number );
    getchar();
    return 3;
  }
