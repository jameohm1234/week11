/*C-if else statement*/
#include<stdio.h>
    int student1 (){
        int number;
        printf("student1\n");
        printf("Enter an integer: ");
        scanf("%d",&number);
        //true if number is less than 0
        if (number<0){
            printf("you entered %d\n",number);
        }
        printf("the if statement is easy\n");
        return 0;
        }
