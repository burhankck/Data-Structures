#include <stdio.h>
#include<ctype.h>
// queue (array)
char queue[50];
int front = 0;
int rear = 0;


void enqueue(char);
char dequeue();
bool isEmpty();

int main()
{
   
   char ch = '1';
   printf("Enter a string : ");
   
   while (ch != '\n')
   {
       
       ch = getchar();
       
       if (isalpha(ch) != 0)
       {
         
           if (islower(ch) > 0)
           {
               
               ch = toupper(ch);
           }
           
           enqueue(ch);
       }
    
       else if (isdigit(ch) > 0)
       {
           // discard it
           continue;
       }
       
       else if (ispunct(ch) > 0)
       {
           
           continue;
       }
     
       else if (isspace(ch) > 0)
       {
         
           enqueue(ch);
       }
       else
          
           continue;
}
   printf("\nThe Output : ");
  
   while (isEmpty())
   {
      
       ch = dequeue();
       
       printf("%c", ch);
   }
}



void enqueue(char element) {
   
   if (rear != 100)
   {
       
       queue[rear++] = element;
   }
}


char dequeue()
{
   
       return queue[front++];
}


bool isEmpty() {
   
   if (front != rear)
      
       return 1;
   else
       
       return 0;
  
}
