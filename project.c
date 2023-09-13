#include<stdio.h>
#include<math.h>


int main(void)
{

   int z = 200000000;
   int a = 40;
   int m;

   while (a != -1) {
      printf("\n\n\n\n\n\n\n\n\n\n\n");
      if (a != 0) {
         printf(" o");
         for (m = 0; m <= a; m++) {
            printf(" ");
         }
         if (a % 2 == 0)
            printf("    o");
         else
            printf("   o");

         printf("\n/|\\");  // 1
         for (m = 0; m<=a; m++) {
            printf(" ");
         }
         if (a % 2 == 0)
            printf(" o/|\\");
         else
            printf(" /|\\");

            printf("\n/\\");
        for(m = 0 ; m <= a ; m++){
            printf(" ");
        }
        if(a%2 == 0){
            printf("   /\\");
        }
        else{
            printf("  o/\\");
        }
      }
      else {
         printf(" 0");
         printf("    0");
         printf("\n/|\\");
         printf("<3/|\\");
         printf("\n/\\");
         printf("   /\\");

         while (z != 0) {
             z--;
          }
      }
      while (z != 0) {
         z--;
      }
      z = 200000000;
      system("cls");
      a--;
   }

   system("pause");
}



