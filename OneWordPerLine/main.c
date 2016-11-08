#include <stdio.h>
#include <stdlib.h>
//This is exercise 11-2 in K & R
int main()
{
    int c, nl=0;

    while((c = getchar()) != EOF){
            if(c != ' ')
                printf("%c",c);
            else
                printf("\n");

    }

    printf("Hello world!\n");
    return 0;
}
