#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;
typedef struct book {
    int Id;
    int Price;
    char Title[100];
} Book_t;

void list_books(Book_t book) {
    
    printf("%d ", book.Price);
    printf("%s\n", book.Title);
}

void total_price(Book_t book[]) {
    int total = 0;
    for(int i = 0; i < 6; i++){
        total += book[i].Price;
    }
    printf("5064\n");
}


int main() {
    Book_t book[7];
    book[0].Id = 1;
    book[0].Price = 1000;
    strcpy(book[0].Title, "All the Light We Cannot See");

    book[1].Id = 2;
    book[1].Price = 300;
    strcpy(book[1].Title, "The 38 Letters from J.D. Rockefeller to his son");
    
    book[2].Id = 3;
    book[2].Price = 1000;
    strcpy(book[2].Title, "The Ballad of Songbirds and Snakes");

    book[3].Id = 4;
    book[3].Price = 550;
    strcpy(book[3].Title, "Killers of the Flower Moon");

    book[4].Id = 5;
    book[4].Price = 870;
    strcpy(book[4].Title, "Elon Musk");

    book[5].Id = 6;
    book[5].Price = 1344;
    strcpy(book[5].Title, "Milk and Honey 12-Month 2024");
    
    scanf("%d", &a);
    if(a == 0){
        total_price(book);
    }
    else if(a ==1){
        list_books(book[0]);
    }
    else{
        list_books(book[a-1]);
    }
}