#include <stdio.h>

int main(){
   int a = 3000;
   int b = 360;
   int c = 60;
   int d = a*b/c;
   
   printf("A spinning tire makes 3000 revolutions per minutes. Calculate How many degrees it rotate in one second. Then display the Degrees.\n");
   printf("\nGiven" "\nrevolutions per minutes: %drpm" "\n1 revolution is %d°" "\n1 minute is %d seconds\n", a, b, c);
   printf("\nSolution" "\n%drpm * %d° / %d seconds = %d degrees per second", a, b, c, d);
    
    return 0;
}