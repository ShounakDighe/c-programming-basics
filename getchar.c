#include <stdio.h>
#include <conio.h> // This header is specific to Windows/DOS

int main() {
    char ch;
    
    printf("Press any key: ");
    ch = getch(); // Read a single character without waiting for Enter
    
    printf("You pressed: %c\n", ch);
    
    return 0;
}

