#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printbook (struct Books book);
int main()
{
	struct Books bk1;
	struct Books bk2;

	strcpy(bk1.title, "C programming");
	strcpy(bk1.author, "Feng Jian");
	strcpy(bk1.subject, "The book introduced c language history");
	bk1.book_id=123;
	int count;
	for(count=0;count<10;count++)
		printbook(bk1);
	return 0;

}

void printbook (struct Books book)
{
	printf("The title of first book is : %s\n",book.title);
	printf("The author of first book is : %s\n",book.author);
	printf("This book introduces : %s \n",book.subject);
	printf("you can find this book with below id: %d\n",book.book_id);

}
