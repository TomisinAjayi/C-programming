#include<stdio.h>

int main() {

    /*char tomi[10];
    gets(tomi);
    puts(tomi);*/

    char choice[2];
    puts("Welcome to Glo's Customer service.\nHow may we help you?");
    puts("Press a for English.");
    puts("Press b for Yoruba.");
    puts("Press c for Pidgin.");
    puts("Press * to cancel.");
    gets(choice);
//puts(choice);
    if(strcmp(choice, "a") == 0) {
        puts("This is english.");

    } else if(strcmp(choice, "b") == 0) {
        puts("Eleyi ni Yoruba");
    } else if(strcmp(choice, "c") == 0) {
        puts("dis one be pidgin");
    } else if(strcmp(choice, "*") == 0) {
        puts("Thank you.");
        exit(0);
    } else {
        puts("Invalid choice!");
    }
    return 0;
}
