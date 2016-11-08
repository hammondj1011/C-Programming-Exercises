#include <stdio.h>
/*
    This program will "fold" lines per the directions in the book.  The
    fold length will be arbitrarily set at 7.
*/

/*  Exercise 1-22
    Write a program to "fold" long input lines into two or more shorter
    lines after the last non-blank character that occurs before the n-th
    columns of input.  Make sure your program doe something intelligent
    with very long lines, and if there are no blanks or tabs before the
    specified column.
*/

#define FOLD 7
#define PAR 4

int main()
{
    int i,c, previous, wordCount, lineCount;

    wordCount=lineCount=1;



    for(i = 0; (c = getchar()) != EOF; i++){

        if(wordCount % (FOLD + 1) == 0){
            printf("\n");
            wordCount = 1;
            lineCount++;
        }

        if((lineCount % (PAR + 1)) == 0 && c == '.'){
            printf("\t");
            lineCount=1;
        }

        if(c == ' ' && (c != previous))
            wordCount++;

        previous = c;
        printf("%c",c);

    }



    return 0;
}
