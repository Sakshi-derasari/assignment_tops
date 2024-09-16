// #include <stdio.h>
// #include <string.h>

// void reverseString(char str[], char rev[]) {
//     int len = strlen(str);
//     int i, j;
    
//     for(i = len - 1, j = 0; i >= 0; i--, j++) {
//         rev[j] = str[i];
//     }
//     rev[j] = '\0';  // Null-terminate the reversed string
// }

// int main() {
//     char str[100], rev[100];
    
//     printf("Enter a string: ");
//     gets(str);
    
//     reverseString(str, rev);
    
//     printf("Reversed string: %s\n", rev);
    
//     if (strcmp(str, rev) == 0) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }
// }


// #include <stdio.h>
// struct Employee {
//     int empno;
//     char empname[50];
//     char address[100];
//     int age;
// };

// void displayEmployee(struct Employee emp) {
//     printf("Employee Number: %d\n", emp.empno);
//     printf("Employee Name: %s\n", emp.empname);
//     printf("Address: %s\n", emp.address);
//     printf("Age: %d\n", emp.age);
// }

// int main() {
//     struct Employee emp;

//     printf("Enter Employee Number: ");
//     scanf("%d", &emp.empno);
    
//     printf("Enter Employee Name: ");
//     getchar(); 
//     gets(emp.empname);
    
//     printf("Enter Address: ");
//     gets(emp.address);
    
//     printf("Enter Age: ");
//     scanf("%d", &emp.age);

//     displayEmployee(emp);
// }


#include <stdio.h>
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void displayEmployee(struct Employee emp) {
    printf("\nEmployee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee employees[5];

    for(int i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Enter Employee Number: ");
        scanf("%d", &employees[i].empno);
        
        printf("Enter Employee Name: ");
        getchar();
        gets(employees[i].empname);
        
        printf("Enter Address: ");
        gets(employees[i].address);
        
        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
    }
    for(int i = 0; i < 5; i++) {
        displayEmployee(employees[i]);
    }
}