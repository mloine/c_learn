#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;

int main()
{
	Book book;
	strcpy(book.title,"c learn");
	strcpy(book.author,"xueyongkang");
	strcpy(book.subject,"learning .....");
	book.book_id = 672898;
	
	printf("book title:%s\n",book.title);
	printf("book author:%s\n",book.author);
	printf("book subject : %s\n",book.subject);
	printf("book book_id : %d\n",book.book_id);
	
	return 0;
}

