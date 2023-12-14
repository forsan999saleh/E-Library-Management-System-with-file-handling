#include<stdio.h>
#include"Library.h"
#include<string.h>
struct library lib[max_length];

    char ar_nm[max_length], bk_nm[max_length];

    // Keep the track of the number of
    // of books available in the library
    u16 i=0, input=0, count=0;


void application()
{

    // Iterate the loop
    while (forever) {

        printf("\n\n********######"
               "WELCOME TO E-LIBRARY "
               "#####********\n");
        printf("\n\n1. Add book infor"
               "mation\n2. Display "
               "book information\n");
        printf("3. List all books of "
               "given author\n");
        printf(
            "4. List the count of book"
            "s in the library\n");
        printf("5. Exit");

        // Enter the book details
        printf("\n\nEnter one of "
               "the above: ");
        scanf("%d", &input);

        // Process the input
        switch (input) {

        // Add book
        case 1:Add_book();break;

        // Print book information
        case 2:Print_book_information();break;

        // s
        case 3:Search_by_author_name(); break;

        // Print total count
        case 4:Print_Number_of_books();break;
        //exit
        case 5:
            Exit_Function();break;
            default: break;
        }
    }
}
void  Add_book()
{
    printf("Enter book name = ");
           // scanf("%s", lib[i].book_name);
            getchar();
            fgets(lib[i].book_name,max_length,stdin);
            getchar();
            printf("Enter author name = ");
           // scanf("%s", lib[i].author);
           fgets(lib[i].author,max_length,stdin);


            printf("Enter pages = ");
            scanf("%d", &lib[i].pages);

            printf("Enter price = ");
            scanf("%f", &lib[i].price);
            count++;
           FILE * fPtr;
            fPtr = fopen("Library File.txt", "a");
           // fopen("Library File.txt", "a");'
            fprintf( fPtr,"%d.%s\n", i, lib[i].book_name);
             fprintf( fPtr,"%d.%s\n", i, lib[i].author);
              fprintf( fPtr,"%d.%d\n", i, lib[i].pages);
               fprintf( fPtr,"%d.%f\n", i, lib[i].price);
           // fputs(lib[i].book_name, fPtr);
         //   fputs(lib[i].author, fPtr);
           // fputs(lib[i].pages, fPtr);
         //  fputs(lib[i].price, fPtr);
             fclose(fPtr);



}
void Print_book_information()
{
     printf("you have entered"
                   " the following "
                   "information\n");
            for (i = 0; i < count; i++) {

                printf("book name = %s",
                       lib[i].book_name);

                printf("\t author name = %s",
                       lib[i].author);

                printf("\t  pages = %d",
                       lib[i].pages);

                printf("\t  price = %f",
                       lib[i].price);
            }
}
void Search_by_author_name()
{
    printf("Enter author name : ");
            //scanf("%s", ar_nm);
             getchar();
            fgets(ar_nm,max_length,stdin);
            for (i = 0; i < count; i++) {

                if (strcmp(ar_nm,
                           lib[i].author)
                    == 0)
                    printf("book name :%s\nauthor name: %s\npages:%d\nprice : %f\n",
                           lib[i].book_name,
                           lib[i].author,
                           lib[i].pages,
                           lib[i].price);
            }
}
void Print_Number_of_books()
{
      printf("\n No of books in "
                   "brary : %d\n",
                   count);
}
void Exit_Function()
{
    exit(0);
}
