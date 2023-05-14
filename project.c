 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Product {
int id;
char name[100];
int quantity;
float price;
};
void addProduct(struct Product *inventory, int *count) {
if (*count >= 100) {
printf("Inventory is full. Cannot add more products.\n");
return;
}
struct Product newProduct;
printf("Enter product details:\n");
printf("Product ID: ");
scanf("%d", &newProduct.id);
printf("Product Name: ");
scanf(" %[^\n]", newProduct.name);
printf("Quantity: ");
scanf("%d", &newProduct.quantity);
printf("Price: ");
scanf("%f", &newProduct.price);
inventory[*count] = newProduct;
(*count)++;
printf("Product added successfully.\n");
}
void updateProduct(struct Product *inventory, int count) {
int productId;
int found = 0;
 printf("Product deleted successfully.\n");
found = 1;
break;
}
}
if (!found) {
printf("Product not found.\n");
}
}
void displayInventory(struct Product *inventory, int count) {
if (count == 0) {
printf("Inventory is empty.\n");
return;
}
printf("Product Inventory:\n");
printf("ID\tName\tQuantity\tPrice\n");
for (int i = 0; i < count; i++) {
printf("%d\t%s\t%d\t\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
}
}
int main() {
struct Product inventory[100];
int count = 0;
int choice;
printf("Inventory Management System\n");
while (1) {
printf("\nSelect an option:\n");
printf("1. Add a product\n");
printf("2. Update a product\n");
printf("3. Delete a product\n");
printf("4. Display inventory\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
addProduct(inventory, &count);
break;
case 2:
updateProduct(inventory, count);
break;
case 3:
deleteProduct(inventory, &count);
break;
case 4:
displayInventory(inventory, count);
break;
case 5:
printf("Exiting the program...\n");
exit(0);
default:
printf("Invalid choice. Please try again.\n");
break;
}
}
return 0;
