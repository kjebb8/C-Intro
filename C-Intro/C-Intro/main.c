//
//  main.c
//  C-Intro
//
//  Created by Keegan Jebb on 2017-05-16.
//  Copyright © 2017 Keegan Jebb. All rights reserved.
//

// getchar functions are included in stdio.h
#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------
//Tutorial 1

/*
#include "var_header.h"
#include "loop_header.h"

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
} */


//---------------------------------------------------
//Tutorial 2

 /*

 #include <string.h>   // for all the new-fangled string functions

 struct database
 {
   int id_number;
   int age;
   float salary;
 };

 void strip_newline( char *str, int size )
 {
     int i;

     // remove the null terminator
     for (  i = 0; i < size; ++i )
     {
         if ( str[i] == '\n' )
         {
             str[i] = '\0';

             // we're done, so just exit the function by returning
             return;
         }
     }
     // if we get all the way to here, there must not have been a newline!
 }


 int main()
 {
   //pointers can be useful for avioding passing a large data structure into
   //function or for dynamic memory allocation

   // one pointer, one regular int
   int *pointer1, nonpointer1;

  // two pointers
  int *p1, *p2;

  pointer1 = &nonpointer1;
  //scanf("%d", pointer1);

  printf("%d\n", nonpointer1 +1);
  printf("%p\n", (void*) &nonpointer1);
  printf("%d\n", *pointer1 + 2);
  printf("%p\n", (void*) pointer1);

  printf("%lu\n", sizeof(long));
  p1 = malloc(sizeof(*p1) );
  *p1 = 69;
  printf("%d\n", *p1);
  free(p1);
  p1 = 0;


//  struct database employee;
  struct database *p_data = malloc(sizeof(*p_data));
//  p_data = &employee;
  p_data -> age = 22;
  p_data -> id_number = 1;
  p_data -> salary = 12000.21;
  printf("%f\n", p_data -> salary);
  free(p_data);
  p_data = 0;

//Arrays
//Char needs an extra bit (null character)
  char astring[4][4];
  char (*sp2)[4][4];
  sp2 = &astring;
  // Scanf sucks for this... can enter more than 3 characters
//  scanf( "%s", (*sp2)[0] );
  for ( int i = 0; i < 3; ++i )
  {
      if ( (*sp2)[0][i] == 'a' )
      {
          printf( "You entered an a!\n" );
      }
  }

  // A nice long string
  char thestring[256];

  printf( "Please enter a long string: " );

  //notice stdin being passed in
  //Doesn't like it when fscan is used too
  fgets( thestring, 256, stdin );

  printf( "You entered a very long string, %s", thestring );

  strip_newline(thestring, 256);

  char name[50];
  char lastname[50];
  char fullname[100]; //Big enough to hold both name and lastname

  printf( "Please enter your name: " );
  fgets( name, 50, stdin );

  //see definition above
  strip_newline( name, 50 );

  //strcmp returns zero when the two strings are equal
  if ( strcmp ( name, "Keegan" ) == 0 )
  {
      printf( "That's my name too.\n" );
  }
  else
  {
      printf( "That's not my name.\n" );
  }
  // Find the length of your name
  printf( "Your name is %lu letters long", strlen ( name ) );
  printf( "\nEnter your last name: " );
  fgets( lastname, 50, stdin );
  strip_newline( lastname, 50 );
  fullname[0] = '\0';
  //strcat will look for the \0 and add the second string starting at that location
  strcat( fullname, name );     // Copy name into full name
  strcat( fullname, " " );      // Separate the names by a space
  strcat( fullname, lastname ); // Copy lastname onto the end of fullname
  printf( "Your full name is %s\n",fullname );

  getchar();
  return 0;
  }
  */

  //------------------------------
  //Tutorial 3


//int main ()
//{
  //File I/O
  /*
  FILE *fpr;
  FILE *fpw;
  fpr = fopen("/Users/keeganjebb/Desktop/Programming/Git-Repos/C-Intro/C-Intro/C-Intro/test.txt", "r");
  fpw = fopen("/Users/keeganjebb/Desktop/Programming/Git-Repos/C-Intro/C-Intro/C-Intro/testw.txt", "w");
  //fprintf(fpr, "Testing...\n");
  int letter;
  while  ( ( letter = fgetc( fpr ) ) != EOF )
  {
    printf( "%c", letter );
    fputc(letter, fpw);
  }
  fprintf(fpw, "\nThis was copied from test.txt!");
  fclose(fpr);
  fclose(fpw);

  FILE *fp;
  fp=fopen("/Users/keeganjebb/Desktop/Programming/Git-Repos/C-Intro/C-Intro/C-Intro/test.bin", "wb");
  char x[10]="ABCDEFGHIJ";
  fwrite(x, sizeof(x[0]), sizeof(x)/sizeof(x[0]), fp);
*/

  //Typecasting
  /*
   printf( "%c\n", (char)65 ); //65 is A in ASCII, c% is for character
   for ( int x = 0; x < 128; x++ )
   {
     printf( "%d = %c\n", x, (char)x );
   }
   int a = 3;
   int b = 5;
   printf("%d versus %f\n", a/b, (float)a/b);

   getchar();
 }
   */

/*
   //Command Line Arguments
int main ( int argc, char *argv[] )
{
  if ( argc != 2 ) // argc should be 2 for correct execution
  {
  // We print argv[0] assuming it is the program name
    printf( "usage: %s filename", argv[0] );
  }
  else
  {
    printf("%d\n", argc);
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);

  // We assume argv[1] is a filename to open
    FILE *file = fopen( argv[1], "r" );

  // fopen returns 0, the NULL pointer, on failure
    if ( file == 0 )
    {
      printf( "Could not open file\n" );
    }
    else
    {
      int x;
      //read one character at a time from file, stopping at EOF, which
        // indicates the end of the file.  Note that the idiom of "assign
         //to a variable, check the value" used below works because
         //the assignment statement evaluates to the value assigned
      while  ( ( x = fgetc( file ) ) != EOF )
      {
          printf( "%c", x );
      }
      fclose( file );
    }
  }
}
*/

//-------------------------------------------------
//Tutorial 4
