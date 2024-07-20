#include <stdio.h>
#include <stdlib.h> // For exit()
#define MAX 10

// Global variables and function prototypes
int b[MAX], n, pos, e, i;

void create();
void deletion();
void search();
void insert();
void display();

int main() {
    int ch;
    char g = 'y';

    do {
        printf("\n Main Menu");
        printf("\n 1. Create \n 2. Delete \n 3. Search \n 4. Insert \n 5. Display\n 6. Exit \n");
        printf("\n Enter your Choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                create();
                break;
            case 2:
                deletion();
                break;
            case 3:
                search();
                break;
            case 4:
                insert();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0); // Properly exit the program
                break;
            default:
                printf(" \n Enter the correct choice:");
        }

        printf("\n Do you want to continue? (y/n): ");
        scanf(" %c", &g); // Add a space before %c to consume any newline left in the buffer
    } while(g == 'y' || g == 'Y');

    return 0;
}

void create() {
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);

    printf("\n Enter the Elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
}

void deletion() {
    printf("\n Enter the position to delete: ");
    scanf("%d", &pos);

    if(pos >= n || pos < 0) {
        printf("\n Invalid Location.");
        return;
    }

    for(i = pos; i < n - 1; i++) {
        b[i] = b[i + 1];
    }

    n--; // Decrease the count of elements
    printf("\n The Elements after deletion:");
    display();
}

void search() {
    printf("\n Enter the Element to be searched: ");
    scanf("%d", &e);

    for(i = 0; i < n; i++) {
        if(b[i] == e) {
            printf("\n Value %d is at position %d.", e, i);
            return; // Exit after finding the first occurrence
        }
    }

    printf("\n Value %d is not in the list.", e);
}

void insert() {
    printf("\n Enter the position to insert: ");
    scanf("%d", &pos);

    if(pos > n || pos < 0) {
        printf("\n Invalid Location.");
        return;
    }

    printf("\n Enter the element to insert: ");
    scanf("%d", &e);

    for(i = n - 1; i >= pos; i--) {
        b[i + 1] = b[i];
    }

    b[pos] = e;
    n++; // Increase the count of elements
    printf("\n The list after insertion:");
    display();
}

void display() {
    printf("\n The Elements of The list are:");
    for(i = 0; i < n; i++) {
        printf(" %d", b[i]);
    }
    printf("\n");
}



