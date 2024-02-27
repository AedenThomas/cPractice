// This program allows the user to input information about multiple books,
// including their name, author, price, number of pages, and date of publication.
// It then finds the book with the highest price and displays its details.

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
    
    // Input book details from the user
    for (int i=0;i<n;i++){
        scanf("%s",s[i].name);
        scanf("%s",s[i].aut);
        scanf("%d",&s[i].price);
        scanf("%d",&s[i].pages);
        scanf("%s",s[i].date);
    }

    highest=s[0].price;
    
    // Find the book with the highest price
    for (int i=1;i<3;i++){
        if (s[i].price>highest){
            highest=s[i].price;
            highIndex=i;
        }
    }
    
    // Display the details of the book with the highest price
    printf("Book Title: %s\n",s[highIndex].name);
    printf("Author: %s\n",s[highIndex].aut);
    printf("Price: %d\n",s[highIndex].price);
    printf("Number of pages: %d\n",s[highIndex].pages);
    printf("Date of publication: %s\n",s[highIndex].date);
    printf("\n");

    return 0;
}