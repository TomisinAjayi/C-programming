#include<stdio.h>
struct tomisin {
    char hobbies[10];
    int likes;
};
struct students{
    char name[10];
    int age;
    // structure in structure add a variable name
    struct tomisin tomi;
};

int main() {

    struct students onestudent = {"tomi", 20 , {"reading", 5}};
    puts(onestudent.name);
    // copy of info from one structure var to another
    struct students anotherstudent;
    memcpy(&anotherstudent,&onestudent, sizeof(struct students));
    puts(anotherstudent.name);
    //structure in another structure
    puts(onestudent.tomi.hobbies);


    return 0;
}
