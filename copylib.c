#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    const char *text="hello";
    char c[1000];
    printf("Opening the file test.c in write mode");
    fp = fopen("source.c","w+");
    if(fp==NULL)
    {
        printf("COULD NOT OPEN FILE source.c");
        return 1;

    }
    printf("\n enter the some text from keyboard\n");
    fwrite(text,sizeof(char),strlen(text),fp);
    /*read*/
    /*fp = fopen("source.c","r");
    if(fp==NULL)
    {
        printf("COULD NOT OPEN FILE source.c");
        return 1;

    }*/
    fread(c,sizeof(char),3,fp);
    //fscanf(text,"%[^\n]",c);

    /*printf("read file is:\n%s",c);
    fp1 = fopen("dest.c","w");
    if(fp1==NULL)
    {
        printf("COULD NOT OPEN FILE source.c");
        return 1;

    }
    printf("\n enter the some text from keyboard\n");
    fwrite(text,sizeof(char),strlen(text),fp1);
    /*copy*/
    printf("%s",c);
fclose(fp);
//fclose(fp1);
return 0;

}
