#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define RESET_COLOR "\033[0m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define YELLOW "\033[1;33m"
#define RED "\033[31m"

struct person {
    char name[35];
    char address[50];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char citizen_no[20];
};

void display_logo();
void menu();
void start();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();

int main() {
    start();
    return 0;
}

void display_logo() {
    printf(BLUE " ****    *****  *****  *****  *****  ****    ***  *      \n");
    printf(" *   *  *     * *      *      *   *  *   *    *   *      \n");
    printf(" *   *  ******* *****  *****  *   *  *   *    *   *      \n");
    printf(" *   *  *     * *      *      *   *  *   *    *   *      \n");
    printf(" ****   *     * *      *      *****  ****    ***  *****  \n" RESET_COLOR);
    printf(GREEN "Daffodil International University\n" RESET_COLOR);
}

void start() {
    menu();
}

void menu() {
    printf("\033[H\033[J"); // Clear screen using ANSI escape sequence (faster than system("cls"))
    display_logo();

    printf("\t\t*WELCOME TO PHONEBOOK*\n\n");
    printf("\t1. Add New\t2. List\t\t3. Exit\n");
    printf("\t4. Modify\t5. Search\t6. Delete\n");

    switch (getch()) {
    case '1':
        addrecord();
        break;
    case '2':
        listrecord();
        break;
    case '3':
        exit(0);
    case '4':
        modifyrecord();
        break;
    case '5':
        searchrecord();
        break;
    case '6':
        deleterecord();
        break;
    default:
        printf("\nInvalid input! Enter 1 to 6 only.");
        getch();
        menu();
    }
}

void addrecord() {
    printf("\033[H\033[J");
    FILE *f = fopen("project.dat", "ab+");
    if (!f) {
        printf("Error opening file!\n");
        return;
    }
    struct person p;

    printf("\nEnter Name: ");
    scanf(" %[^\n]", p.name);
    printf("Enter Address: ");
    scanf(" %[^\n]", p.address);
    printf("Enter Father's Name: ");
    scanf(" %[^\n]", p.father_name);
    printf("Enter Mother's Name: ");
    scanf(" %[^\n]", p.mother_name);
    printf("Enter Phone No.: ");
    scanf("%ld", &p.mble_no);
    printf("Enter Sex: ");
    scanf(" %[^\n]", p.sex);
    printf("Enter E-mail: ");
    scanf(" %[^\n]", p.mail);
    printf("Enter Citizen No.: ");
    scanf(" %[^\n]", p.citizen_no);

    fwrite(&p, sizeof(p), 1, f);
    fclose(f);

    printf("\nRecord saved successfully!\nPress any key to continue...");
    getch();
    menu();
}

void listrecord() {
    printf("\033[H\033[J");
    FILE *f = fopen("project.dat", "rb");
    if (!f) {
        printf("No records found!\n");
        getch();
        menu();
        return;
    }

    struct person p;
    while (fread(&p, sizeof(p), 1, f) == 1) {
        printf("\n-----------------------------------\n");
        printf("Name: %s\nAddress: %s\nFather: %s\nMother: %s\nPhone: %ld\nSex: %s\nE-mail: %s\nCitizen No: %s\n",
               p.name, p.address, p.father_name, p.mother_name, p.mble_no, p.sex, p.mail, p.citizen_no);
    }

    fclose(f);
    printf("\nPress any key to return to menu...");
    getch();
    menu();
}

void searchrecord() {
    printf("\033[H\033[J");
    FILE *f = fopen("project.dat", "rb");
    if (!f) {
        printf("No records found!\n");
        getch();
        menu();
        return;
    }

    struct person p;
    char name[35];
    int found = 0;

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", name);

    while (fread(&p, sizeof(p), 1, f) == 1) {
        if (strcmp(p.name, name) == 0) {
            printf("\nFound Record:\n");
            printf("Name: %s\nAddress: %s\nFather: %s\nMother: %s\nPhone: %ld\nSex: %s\nE-mail: %s\nCitizen No: %s\n",
                   p.name, p.address, p.father_name, p.mother_name, p.mble_no, p.sex, p.mail, p.citizen_no);
            found = 1;
            break;
        }
    }
    fclose(f);

    if (!found)
        printf("\nRecord not found!");

    printf("\nPress any key to return to menu...");
    getch();
    menu();
}

void deleterecord() {
    printf("\033[H\033[J");
    FILE *f = fopen("project.dat", "rb");
    if (!f) {
        printf("No records to delete!\n");
        getch();
        menu();
        return;
    }

    FILE *temp = fopen("temp.dat", "wb");
    struct person p;
    char name[35];
    int found = 0;

    printf("\nEnter Name to Delete: ");
    scanf(" %[^\n]", name);

    while (fread(&p, sizeof(p), 1, f) == 1) {
        if (strcmp(p.name, name) != 0)
            fwrite(&p, sizeof(p), 1, temp);
        else
            found = 1;
    }

    fclose(f);
    fclose(temp);

    if (found) {
        remove("project.dat");
        rename("temp.dat", "project.dat");
        printf("\nRecord deleted successfully!\n");
    } else {
        remove("temp.dat");
        printf("\nRecord not found!\n");
    }

    printf("\nPress any key to return to menu...");
    getch();
    menu();
}

void modifyrecord() {
    printf("\033[H\033[J");
    FILE *f = fopen("project.dat", "rb+");
    if (!f) {
        printf("No records found!\n");
        getch();
        menu();
        return;
    }

    struct person p;
    char name[35];
    int found = 0;

    printf("\nEnter Name to Modify: ");
    scanf(" %[^\n]", name);

    while (fread(&p, sizeof(p), 1, f) == 1) {
        if (strcmp(p.name, name) == 0) {
            printf("\nEnter New Address: ");
            scanf(" %[^\n]", p.address);
            fseek(f, -sizeof(p), SEEK_CUR);
            fwrite(&p, sizeof(p), 1, f);
            found = 1;
            break;
        }
    }
    fclose(f);

    printf(found ? "\nRecord updated successfully!\n" : "\nRecord not found!\n");
    printf("\nPress any key to return to menu...");
    getch();
    menu();
}
