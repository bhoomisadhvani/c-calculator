#include<stdio.h>

int add(int a,int b){

    return a + b;
}

int sub(int a,int b){

    return a - b;
}

int multipication(int a,int b){

    return a * b;
}

int division(int a,int b){

    return a / b;
}

int module(int a,int b){

    return a % b;
}

int main(){

   

    int a,b,choice;

    printf("\nenter first number:");
    scanf("%d",&a);
    
    printf("\nenter second number:");
    scanf("%d",&b);

    printf("\npress 1 for +");
    printf("\npress 2 for -");
    printf("\npress 3 for *");
    printf("\npress 4 for /");
    printf("\npress 5 for %%");
    printf("\npress 0 for exit");

    printf("\nenter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
             int result= add(a,b);
            printf("\naddition is %d",result);
            break;

        }
           

        case 2:
        {
            int result= sub(a,b);
            printf("\nsubtraction is %d",result);
            break;
        }
            

        case 3:
        {
            int result= multipication(a,b);
            printf("\nmultiplication is %d",result);
            break;
        }
            

        case 4:
        {
            int result= division(a,b);
            printf("\ndivision is %d",result);
            break;
        }
           

        case 5:
        {
            int result= module(a,b);
            printf("\nmodule is %d",result);
            break;

        }
          

        case 0:
        {
            printf("\nexiting");
            break;
        }

        default:
        printf("\ninvalid choice");

            
    }

    return 0;
}