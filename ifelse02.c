/*C-if else statement*/
#include<stdio.h>
int student2(){
    int number;
  printf("student2\n");
  printf("Enter an integer: ",number);
  scanf("%d",&number);
  //True if the remainder is 0
  if(number&2==0){
     printf("%d is an ever integer.\a\a\a\n",number);
  }
  else{
      printf("%d is an integer.\a\a\a\n",number);

  }
  printf("End Programing");
  return 0;
  }
