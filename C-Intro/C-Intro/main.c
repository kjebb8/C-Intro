//
//  main.c
//  C-Intro
//
//  Created by Keegan Jebb on 2017-05-16.
//  Copyright © 2017 Keegan Jebb. All rights reserved.
//

// getchar functions are included in stdio.h
#include <stdio.h>
#include "var.c"
//getchar functions are included in stdio.h

int main()
{
  // \n is new line
    printf( "I am alive!  Beware.\n" );

    int check1 = get_var();
    printf("\nReturn Value: %d", check1);
    //Waits until the user hits enter to close the output window
    getchar();

    //Return 0 means success
    return 0;
}
