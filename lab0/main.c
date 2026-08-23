#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "stats.h"
#include "stats.c"
#include "record.h"
#include "node.h"

void print_array(const int *numbers, size_t count);
void demonstrate_array_sum(void);
void demonstrate_record(void);
void demonstrate_dynamic_record(void);
void demonstrate_node(void);

int main(void){

printf(" LAB 0-C23 SURVIVAL GUIDE DEMO\n");
     //func calls
     demonstrate_array_sum();
     demonstrate_record();
      demonstrate_dynamic_record();
     demonstrate_node();  
     return EXIT_SUCCESS;
}
  void demonstrate_array_sum(void){

  
    printf("---sum of arr---\n");
    int numbers[]={1,2,3,4,5};
    size_t num_count= sizeof(numbers) /sizeof(numbers[0]);
    print_array(numbers, num_count);


    int total_sum = sum_array(numbers, num_count);
    printf("Sum of arr: %d\n\n", total_sum);
}


 void print_array(const int *numbers, size_t count){
    printf("Array elements : ");
    for(size_t i=0;i<count;i++){
        printf("%d ", numbers[i]);

    } 
    printf("\n");

 }
 void demonstrate_record(void){
    printf("struct record\n");
    Record my_record={200,23.5};

    printf("direct access using the dot operator\n");
    printf("ID: %d, Value:%.1f\n", my_record.id, my_record.value);

    Record *record_ptr=&my_record;//creates pointer to a record
    

    //retrieved using arrow operator 
    printf("pointer access using the arrow operator:\n");
    printf("id: %d,value: %.1f\n", record_ptr->id,record_ptr->value);

    //chnage through pointer 
    printf("changing value using pointers \n");
    record_ptr->value=33.3;

    printf("original obj is now : id: %d, Value= %.1f\n\n",my_record.id, my_record.value);





 }
 void demonstrate_dynamic_record(void){
    printf(" dynamic record \n");
    
    //using malloc()
    Record *dynamic_record=malloc(sizeof *dynamic_record);
    
    if(dynamic_record==NULL){//used to check allocation errors
     fprintf(stderr, "error : memory allocation failed \n");

     return;
    }
 

 //use the allocated memory 
 dynamic_record->id =100;
 dynamic_record->value =44.4;
 printf(" dynamic record: id : %d, value : %.1f\n", 
 dynamic_record->id, dynamic_record->value);

//call using free()
free(dynamic_record);
printf("Memory freed\n\n");
}

//demonstrate node
void demonstrate_node(void){
    printf("node \n");
    Node *node= malloc(sizeof *node);

    if(node== NULL){
        fprintf(stderr, "error : node allocation failed \n");
        return;}
node->value= 200;
node->next= NULL; //last node

printf("single node created:\n");
printf("value= %d\n",node->value);
printf("next= %p\n",(void *)node->next);
printf("node is ready to be added to the list\n");

//using free()
free(node);
printf(" node free\n\n");
}