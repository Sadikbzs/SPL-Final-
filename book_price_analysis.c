#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LEN 100
#define MAX_AUTHOR_LEN 100
#define NUM_BOOKS 3

typedef struct {
    char title[MAX_TITLE_LEN];
    char author[MAX_AUTHOR_LEN];
    float price;
} Book;

int main() {
    Book books[NUM_BOOKS];
    int i;
    int highest_index = 0, lowest_index = 0;

    // Input book details
    for (i = 0; i < NUM_BOOKS; i++) {
        printf("Enter details for book %d:\n", i + 1);

        printf("Title: ");
        fgets(books[i].title, MAX_TITLE_LEN, stdin);
        // Remove trailing newline
        books[i].title[strcspn(books[i].title, "\n")] = 0;

        printf("Author: ");
        fgets(books[i].author, MAX_AUTHOR_LEN, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); // consume newline left by scanf
    }

    // Find highest and lowest price books
    for (i = 1; i < NUM_BOOKS; i++) {
        if (books[i].price > books[highest_index].price) {
            highest_index = i;
        }
        if (books[i].price < books[lowest_index].price) {
            lowest_index = i;
        }
    }

    // Display results
    printf("\nBook with the highest price:\n");
    printf("Title: %s\n", books[highest_index].title);
    printf("Author: %s\n", books[highest_index].author);
    printf("Price: %.2f\n", books[highest_index].price);

    printf("\nBook with the lowest price:\n");
    printf("Title: %s\n", books[lowest_index].title);
    printf("Author: %s\n", books[lowest_index].author);
    printf("Price: %.2f\n", books[lowest_index].price);

    return 0;
}
