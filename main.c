#include <stdio.h>

int main(void) {
   int eta;
   char nome;
   printf("iniziale della persona: ");
   scanf("%c", &nome);
   printf("eta' della persona: ");
   scanf("%d", &eta);
   if (eta > 18)
      printf("la persona %c e' maggiorenne", nome);
    else
        printf("la persona %c e' minorenne", nome);
    return 0;
}
