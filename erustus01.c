
#include <stdio.h>
#include <string.h>
// getting users name 
int main() {
    char name[50];
    int age;
printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);

name[strcspn(name, "\n")] = 0;
// age
printf("Please enter your age: ");
scanf ("%d", &age);
//  cheking if the user is eligible to vote
if (age >= 18) {
    printf("Hello %s, you are eligible to vote!\n", name);
    } else {
    printf("Hello %s, you are not eligible to vote.\n", name);
    
} 

}
