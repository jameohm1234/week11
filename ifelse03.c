/*C-if else Ladder*/
#include<stdio.h>
int student3(){
    int number1,number2;
    printf("student3\n");
    printf("Enter two integer: ");
    scanf("%d%d", &number1,&number2);
    //check if two integer are equal
    if(number1==number2){
            printf("result: %d=%d",number1,number2);
}
    //check if number1 is greater than number2
    else if(number1>number2){
            printf("result: %d>%d",number1,number2);

    }
    //check if both test expressions are false
    else{
            printf("result: %d<%d",number1,number2);

    }

    }
