#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books *book);

int main()
{
	struct Books Book1;
	struct Books Book2;
	
	strcpy(Book1.title,"C programing");
	strcpy(Book1.author,"Nuha ALi");
	strcpy(Book1.subject,"computor");
	Book1.book_id = 123456;

	strcpy(Book2.title,"mloine");
	strcpy(Book2.author,"xueyongkang");
	strcpy(Book2.subject,"computor");
	Book2.book_id = 1234567;

	printBook(&Book1);

	printBook(&Book2);

	return 0;
}

void printBook(struct Books *book)
{
	printf("book title : %s\n",book->title);
	printf("book author : %s\n",book->author);
	printf("book subject : %s\n",book->subject);
	printf("book book_id : %d\n",book->book_id);
}
