#include <stdio.h>
int main()
{
    FILE *fp;
    char name[100];
    char prof[100];
    int salary;
    fp = fopen("BMSCE.txt", "r");
    if (fp == NULL){
        printf("error reading the file -->\n");  }  
        while(fscanf(fp,"%s %s %d",name,prof,&salary)!=EOF)
        {printf("reading from the file------> name:%s profession:%s salary :%d \n",name,prof,salary);}
        fscanf(stdin,"%s %s %d",name,prof,&salary);
        printf("from standard input we have name:%s prof:%s salary:%d\n",name,prof,salary);
        fclose(fp);
    
    return 0;
}

// int main()
// {
//     FILE *fp;

//     fp=fopen("BMSCE.txt","w");
//     char c;
//     printf("Enter the contents into the file\n");


//     while((c=getchar())!=EOF)
//     {
//         fputc(c,fp);
//     }
//     fclose(fp);

//     fp=fopen("hello.txt","r");
//     printf("The contents of the file are\n");
//     while((c=getc(fp))!=EOF)
//     {
//         printf("%c",c);
//     }
//     fclose(fp);
//     return 0;

// }

// int main()
// {
//     FILE *fp;
//     char name[65];
//     char c;
//     fp = fopen("hello.txt", "r");
//     // fscanf(fp, "%s %s", name, a);   //each word
//  printf("Data from file %s %s", name, a);

//     // if(fgets(name, 7, fp)!=NULL)                //each line
//     // puts(name);


//     // while((c=getc(fp))!=EOF)     //char by char
//     // printf("%c", c);

//     // fread(name, 1,60, fp);
//     // name[60]='\0';
//     // printf("%s", name);



    
//     // fscanf(stdin, "%s", name);          //take input from user
//     fclose(fp);
// }
