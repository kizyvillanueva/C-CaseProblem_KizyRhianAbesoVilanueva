#include <stdio.h>

int main(){
    printf("Name: Kizy Rhian Abeso Villanueva\n");
    printf("ID Number: 2025304403\n");
    printf("------------------------------------\n");

    int num1,num2,product;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    product= num1 * num2;
    printf("-----------------------------------\n");
    printf("Result: The product of %d and %d is %d\n", num1, num2, product);
 
    return 0;   
}
