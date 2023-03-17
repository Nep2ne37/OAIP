#include <stdio.h>
#include <string.h>
#include <locale.h>


int main() {
   setlocale(LC_ALL,"Russian");
   char a[100], b[100];
   printf("¬ведите 1-ое слово\n");
   fgets(a, sizeof(a), stdin);
   printf("¬ведите 2-ое слово\n");
   fgets(b, sizeof(b), stdin);

   if (strcmp(a,b) == 0)
      printf("—лова одинаковой длины.\n");
   else if (strcmp(a,b) == 1)
      printf("1-ое слово меньше чем 2-ое .\n");
      else if (strcmp(a,b) == -1)
      printf("2-ое слово меньше чем 1-ое.\n");
}