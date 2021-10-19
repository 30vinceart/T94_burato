#include <stdio.h>

int main(){
    int choice;
    int payment;
    int change;
    
    printf("Select your order\n[1]Pizza(150)\n[2]Churros(50)\n[3]Smoothie(80)\nChoice:");
    scanf("%d", &choice);
    
    switch(choice){
    case 1:
          printf("Input Payment:");
          scanf("%d", &payment);
          if(payment>=150){
          printf("You have purchase Pizza.\n");
          change= payment - 150; 
          printf("Change:%d", change);
          }else{
          printf("You don't have enough Funds.");
          }break;
    case 2:
          printf("Input Payment:");
          scanf("%d", &payment);
          if(payment>=50){
          printf("You have purchase Churros.\n");
          change= payment - 50; 
          printf("Change:%d", change);
          }else{
          printf("You don't have enough Funds.");
          }break;
    case 3:
          printf("Input Payment:");
          scanf("%d", &payment);
          if(payment>=80){
          printf("You have purchase Smoothie.\n");
          change= payment - 80; 
          printf("Change:%d", change);
          }else{
          printf("You don't have enough Funds.");
          }break;
    default:
          printf("Invalid Input");
    }
    return 0;
}
