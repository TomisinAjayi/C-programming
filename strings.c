#include<stdio.h>
#include<string.h>

int main() {

    /*char tomi[10];
    gets(tomi);
    puts(tomi);*/

    char choice[2];
    puts("Welcome to Glo's Customer service.\nHow may we help you?");
    puts("Press 1 for English.");
    puts("Press 2 for Yoruba.");
    puts("Press 3 for Pidgin.");
    puts("Press * to cancel.");
    gets(choice);

    if(choice == "1") {
        puts("This is english.");
    } else if(choice == "2") {
        puts("Eleyi ni Yoruba");
    } else if(choice == "3") {
        puts("dis one be pidgin");
    } else if(choice == "*") {
        return 0;
    } else {
        puts("Invalid choice");
    }

    return 0;
}
