#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    
int main(int argc, char **argv)
{
      struct Books {
        int book_id;
        char title[20];
        char name[20];
      };
      struct Books book;

      book.book_id = 555;    
      strcpy(book.title, "My title 1");
      strcpy(book.name, "My name");

      struct Books *p = &book;
              
      printf("%i\n", book.book_id);
      printf("%p\n", book.title);
      printf("%p\n", book.name);

      printf("%i\n", p -> book_id);
      printf("%p\n", p -> title);
      printf("%p\n", p -> name);
      return 0;
}

