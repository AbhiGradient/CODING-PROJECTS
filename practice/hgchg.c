#include<stdio.h>
#include <string.h>

int main(){
        FILE *fp;
        char ch;
        int lines = 0, tabs = 0, chars = 0;

        fp = fopen("data.txt", "r");
        if (fp == NULL){
            printf("file cant be find ");
            return 1;
        }
        while((ch = fgetc(fp))!= EOF){
            chars++;
            if(ch == '\n')
            lines++;
            if(ch == '\t')
            tabs++;

        }

 printf("lines: %d\n", lines);
 printf("tabs: %d\n", tabs);
 printf("chars: %d\n", chars);


    return 0;
}