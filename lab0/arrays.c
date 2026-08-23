#include <stdio.h>
int sum_array(const int *numbers, size_t count);//sum of arr
int main(void){
    int values[]={1,2,3,4,5};
    size_t count=sizeof(values)/sizeof(values[0]);


    printf("==array==\n");
    printf("The array has %zu elements\n",count);
    printf("nums ");


    for(size_t i=0;i<count;i++){
        printf("%d",values[i]);

    }
    printf("\n");
    

int sum=sum_array(values,count);
printf("sum%d\n",sum);


printf("\n==replace with 7 nums==\n");

int more_vals[]={7,8,9,10,11,12,13};
size_t new_count=sizeof(more_vals) / sizeof(more_vals[0]);


printf("new arr:");

for(size_t s=0;s<new_count;s++){
       printf("%d",more_vals[s]);

}
printf("\n");
//new sum 
int new_sum=sum_array(more_vals,new_count);

printf("sum: %d\n", new_sum);

return 0;
}
//func def
int sum_array(const int *numbers,size_t count){
    int total=0;
    for( size_t i=0;i<count;i++){
        total+=numbers[i];


    }

    return total;
}