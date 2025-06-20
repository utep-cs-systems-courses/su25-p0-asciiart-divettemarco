#include <stdio.h>
#include "draw.h" // project-related declarations

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop

    fputs("Select which shape you want to print (Triangle = t, Square = s, Chars = c, Arrow = a) or 'q' to quit\n> ", stdout);
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars:");
      fputs("Select which font you want to print (5x7 = 5, 11x16 = 1)\n>", stdout);
      //fputs("Select which font you want to print (5x7 = 5, 8x12 = 8, 11x16 = 1)", stdout);
      fflush(stdout);
      int f;
      while ((f = getchar()) == '\n');
      if (c == EOF)
        break;
      switch (f){
      case '5':
        for (char c = 'a'; c < 'd'; c++)
          print_char_5x7(c);
        break;
      //case '8':
        //for (char c = 'a'; c < 'd'; c++)
         // print_char_8x12(c);
       // break;
      case '1':
        for (char c = 'a'; c < 'd'; c++)
          print_char_11x16(c);
        break;
      }
      break;
    case 'a':
      puts("You selected arrow:");
      print_arrow(5,8);
      break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}
