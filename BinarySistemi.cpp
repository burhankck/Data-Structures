#include <stdio.h>
#include <malloc.h>

typedef struct node {
   int num;
   struct node* next;
}node;

node *push(node *root, int num) {
   node *n = (node *)malloc(sizeof(node));
   n->num = num;
   n->next = root;
   root = n;
   return root;
}

void pop(node *root) {
   root = root->next;
}

int top(node *root) {
   return root->num;
}

void printStack(node *root) {
   while(root != NULL) {
       printf("%d ", root->num);
       root=root->next;
   }
   printf("\n");
}

void toBin(int num) {
   node *head = NULL;
   while(num > 0) {
       head = push(head, num%2);
       num /= 2;
   }
   printStack(head);
}

int main() {
   int num;
   printf("Enter an integer: ");
   scanf("%d", &num);
   toBin(num);
   return 0;
}
