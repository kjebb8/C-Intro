//
//  main.c
//  C-Intro
//
//  Created by Keegan Jebb on 2017-05-16.
//  Copyright © 2017 Keegan Jebb. All rights reserved.
//

// getchar functions are included in stdio.h
#include <stdio.h>
#include "var_header.h"
#include "loop_header.h"
//getchar functions are included in stdio.h

int multiply (int x, int y);

int main()
{
  // \n is new line
    printf( "I am alive!  Beware.\n" );

//I was checking that you could assign a value to return value of get_var
    int check1 = get_var();
    printf("\nReturn Value: %d", check1);

//Loop/If/Switch tutorials
    loop_stuffs();

//Function tutorial
//Prototype is defined before instance so it compiles
    printf ("\n Multiply Stuff: %d", multiply(check1, 7));
    //Waits until the user hits enter to close the output window
    getchar();

    //Return 0 means success
    return 0;
}

int multiply (int x, int y)
{
  return x * y;
  printf("\n Do you see this? NO I CANNOT BE SEEN!");
}
