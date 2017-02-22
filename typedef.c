#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    
int main(int argc, char **argv)
{
      typedef struct Books {
        int book_id;
        char title[20];
        char name[20];
      } Book;

      Book book;

      book.book_id = 555;    
      strcpy(book.title, "My title 1");
      strcpy(book.name, "My name");

      struct Books *p = &book;
              
      printf("%d\n", book.book_id);
      printf("%s\n", book.title);
      printf("%s\n", book.name);

      printf("%d\n", p -> book_id);
      printf("%s\n", p -> title);
      printf("%s\n", p -> name);
      return 0;
}

