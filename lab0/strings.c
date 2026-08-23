#include <stdio.h>
#include <string.h>

/*strings */
void demonstrate_strings(void);

int main(void){
    demonstrate_strings();
    return 0;

}

void demonstrate_strings(void){
    char word[]="Belize";
    
    printf("==string: '%s'\n",word);

    printf("length: %zu characters\n", strlen(word));
    printf("layout : B e l i z e\\0\n");
     printf("\\0 is the null terminating character\n\n");

     printf("compare belize ");
     if(strcmp(word,"Belize")==0){
        printf("matches\n");

     } else{
        printf("didnt match\n");


     }
     printf("comparing with 'South Korea'");
     int ans= strcmp(word, "South Korea");
     if(ans==0){
        printf("matches\n");

     }else if(ans <0){
        printf("'%s' comes before 'South Korea' in alphabetical order",word);

     } else{
        printf("'%s' comes after'South Korea' \n",word);

     }
     printf("\n");
    }

