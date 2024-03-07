#include <stdio.h>

int main() {
    int ok;
    int x,y;
    //sum
    printf("if you want to use my calculetor then please choose a valid option .\n");
    printf("if you want to Addition than prees = 1\n");
    printf("if you want to Subtraction than prees = 2\n");
    printf("if you want to Multiplication than prees = 3\n");
    printf("if you want to Division than prees = 4\n");
    printf("if you want to Modulus than prees = 5\n");
    printf(" choose your option = ");
    scanf("%d",&ok);
    if(ok==1){
    printf(" enter x = ");
    scanf("%d",&x);
    printf(" enter y = ");
    scanf("%d",&y);
   printf(" the ans is = %d \n",x+y);
    }
   //minus
   else if(ok==2){
    printf(" enter x = ");
    scanf("%d",&x);
    printf(" enter y = ");
    scanf("%d",&y);
   printf(" the ans is = %d \n",x-y);
   } 
   //into
   else if(ok==3){
    printf(" enter x = ");
    scanf("%d",&x);
    printf(" enter y = ");
    scanf("%d",&y);
   printf(" the ans is = %d \n",x*y);
   } 
   //division
   else if(ok==4){
    printf(" enter x = ");
    scanf("%d",&x);
    printf(" enter y = ");
    scanf("%d",&y);
   printf(" the ans is = %d \n",x/y);
   } 
   //Modulus
   else if(ok==5){
    printf(" enter x = ");
    scanf("%d",&x);
    printf(" enter y = ");
    scanf("%d",&y);
   printf(" the ans is = %d \n",x%y);
   } 
   else{
       printf(" error please try again ");
   }
    return 0;
}
