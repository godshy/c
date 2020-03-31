//https://www.bilibili.com/video/BV17s411N78s?t=778&p=45 的单链表例子
#include <stdio.h>
#include <stdlib.h>

typedef struct Book
{
    char title[128];
    char name[50];
    struct Book *next;
} Book;

void bookinsert(Book *book)
{
    printf("请输入书名： ");
    scanf("%s", book->title);
    printf("请输入作者：");
    scanf("%s", book->name);
}

void addBook(Book **library)
{
    Book *book, *temp;
    book = (Book *)malloc(sizeof(Book));
    if (book == NULL)
    {
        printf("ERROR\n");
        exit(1);
    }
    bookinsert(book);
    if (*library != NULL)
    {
        temp = *library;
        *library = book;
        book->next = temp;
        

    }
    else
    {
        *library = book;
         book->next = NULL;
    } 

}

void releaseLibrary(Book *library)
{
    while (library != NULL)
    {
        library = library->next;
        free(library);

    }
    
}
void printlibrary(Book *library)
{
    Book *book;
    int count = 1;
    book = library;
    while (book != NULL)
    {
        printf("Book%d:\n", count);
        printf("书名%s:\n", book->title);
        printf("作者%s:\n", book->name);
        book = book->next;
        count++;
        printf("count = %d", count);
    }

}
int main(void)
{
    Book *library = NULL;
    int ch;
    while(1)
    {
        printf("请问是否需要录入书籍信息(Y/N):");
        do
        {
            ch = getchar();
        } while (ch != 'Y' && ch != 'N');
        if (ch == 'Y')
        {
            addBook(&library);
        }
        else
        {
            break;
        }
        
        
    }
    printf("请问是否需要打印书籍信息(Y/N):");
    do
    {
            ch = getchar();
    } while (ch != 'Y' && ch != 'N');
    if (ch == 'Y')
    {
        printlibrary(library);
    }
 
    releaseLibrary(library);
        
    
        


}
