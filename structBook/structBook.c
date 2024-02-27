#include<stdio.h>

struct book{
    char name[20];
    char aut[20];
    int price;
    int pages;
    char date[40];

};


int main()
{
    int n, highest, highIndex;
    printf("How many books are there?");
    scanf("%d", &n);
    struct book s[n];
    
    for (int i=0;i<n;i++){
        scanf("%s",s[i].name);
        scanf("%s",s[i].aut);
        scanf("%d",&s[i].price);
        scanf("%d",&s[i].pages);
        scanf("%s",s[i].date);
    }

     highest=s[0].price;
    for (int i=1;i<3;i++){
        if (s[i].price>highest){
        highest=s[i].price;
        highIndex=i;
        }
    }
    
    printf("Book Title: %s\n",s[highIndex].name);
    printf("Author: %s\n",s[highIndex].aut);
    printf("Price: %d\n",s[highIndex].price);
    printf("Number of pages: %d\n",s[highIndex].pages);
    printf("Date of publication: %s\n",s[highIndex].date);
    printf("\n");

    return 0;
}




// #include<stdio.h>

// struct book{
//     char name[20];
//     char aut[20];
//     int price;
//     int pages;
//     char date[40];

// }s[4];

// int main()
// {
//     for (int i=0;i<3;i++){
//         scanf("%s",s[i].name);
//         scanf("%s",s[i].aut);
//         scanf("%d",&s[i].price);
//         scanf("%d",&s[i].pages);
//         scanf("%s",s[i].date);
//     }

//     s[3]=s[1];
//     printf("Book Title: %s\n",s[3].name);
//     printf("Author: %s\n",s[3].aut);
//     printf("Price: %d\n",s[3].price);
//     printf("Number of pages: %d\n",s[3].pages);
//     printf("Date of publication: %s\n",s[3].date);
//     printf("\n");


//     // for(int i=0;i<3;i++){
//     //     printf("Book Title: %s\n",s[i].name);
//     //     printf("Author: %s\n",s[i].aut);
//     //     printf("Price: %d\n",s[i].price);
//     //     printf("Number of pages: %d\n",s[i].pages);
//     //     printf("Date of publication: %s\n",s[i].date);
//     //     printf("\n");
//     // }

//     // if(s[0].price>s[1].price && s[0].price>s[2].price){
//     //     printf("Highest price - %d\n",s[0].price);
//     // }else if(s[1].price>s[2].price){
//     //     printf("Highest price - %d\n",s[1].price);
//     // }else{
//     //     printf("Highest price - %d\n",s[2].price);
//     // }

//     return 0;
// }