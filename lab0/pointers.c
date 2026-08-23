#include <stdio.h>
/*pointers*/
void demonstrate_pointers(void);

int main(void){
    demonstrate_pointers();
    return 0;
}
void demonstrate_pointers(void){
    int score=10;
    int *score_ptr=&score;//stores the address of score

    //prints score value
    printf("1.score=%d\n",score);
  //the adress stored 
    printf("2.the address stored at score_ptr= %p\n", (void *)score_ptr);
   //value at that address
    printf("3.value at score_ptr= %d\n", *score_ptr);
 ///change the ptr
    printf("4. changing score\n");

    *score_ptr=25;

    printf("5. score after pointer got changed %d\n",score);

}