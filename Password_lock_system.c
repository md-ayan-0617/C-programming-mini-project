#include <stdio.h>
int main() {
    int password = 4411;
    int userPassword;
    int n = 3;//number of attems

    for (int i=0; i<n;i++) {
        printf("Enter your password: ");
        scanf("%d", &userPassword);

        if (userPassword == password) {
            printf("Login successful\n");
            return 0;
        } else {
            printf("Wrong password. Chances left: %d\n",3-i-1);
            
        }
    }
    printf("System locked");

   

    return 0;
}
