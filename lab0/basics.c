#include <stdio.h>
#include <stdbool.h>
/*part2-loops,conditionals,and functions*/
bool is_even(int number);
int square(int value);

int main(void){
    printf("integers from 1-10\n");
  
    printf("number is\tEven/Odd\tSquare\n ");
    printf("---\t---\t----\n");

    for(int i=1;i<=10;i++){
        if(is_even(i)){//checks if num even 
            printf("%d\teven\t\t%d\n",i,square(i));

        }else{
            printf("%d\t\t%d\n",i,square(i));//checks if num odd

        }
    }
    printf("\n");
    return 0;

}
bool is_even(int number){//func to check if num even or odd
    if(number%2==0){
        return true;
    }
    else{
        return false;
    }
}
int square(int value){//func to find square of a num
    int result=value*value;
    return result;

}
