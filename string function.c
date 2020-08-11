#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "my_name_is_edcast_future_skills";
   const char s[2] = "_";
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

   return(0);
}
