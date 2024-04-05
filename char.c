#include<stdio.h>
#include<ctype.h>
int main() {
char c;
printf("Enter a character: ");
scanf("%c", &c);
if(isspace(c) == 0) {
printf("Not a white-space character.");
}
else {
printf("White-space character.");
}
return 0;
}

