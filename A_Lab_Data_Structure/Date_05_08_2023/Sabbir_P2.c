#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};
void delete (struct Node **head, int delVal){
  struct Node *temp = *head;
  struct Node *prev;
  if (temp->next == NULL)
    {
      *head = NULL;
      free (temp);
      printf ("Value %d, deleted \n", delVal);
      return;
    }
  if (temp != NULL && temp->data == delVal){
      
      *head = temp->next; 
      printf ("Value %d, deleted \n", delVal);

      free (temp);
      return;
    }
  while (temp != NULL && temp->data != delVal){

      prev = temp;
      temp = temp->next;
    }
  if (temp == NULL)
    {
      printf ("Value not found\n");
      return;
    }

  prev->next = temp->next;
  free (temp);
  printf ("Value %d, deleted \n", delVal);
}

void display (struct Node *node)
{

  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}

int main ()
{

  struct Node *head = NULL;
  struct Node *node2 = NULL;
  struct Node *node3 = NULL;
  struct Node *node4 = NULL;
  struct Node *node5 = NULL;
  struct Node *node6 = NULL;

  head = (struct Node *) malloc (sizeof (struct Node));
  node2 = (struct Node *) malloc (sizeof (struct Node));
  node3 = (struct Node *) malloc (sizeof (struct Node));
  node4 = (struct Node *) malloc (sizeof (struct Node));
  node5 = (struct Node *) malloc (sizeof (struct Node));
  node6 = (struct Node *) malloc (sizeof (struct Node));

  head->data = 50; 
  head->next = node2;

  node2->data = 60;
  node2->next = node3;

  node3->data = 65;
  node3->next = node4;

  node4->data = 70;
  node4->next = node5;

  node5->data = 75;
  node5->next = node6;

  node6->data = 80;
  node6->next = NULL;
  printf ("Before Operations : ");
  display (head);
  delete (&head, 50);
  delete (&head, 70);
  delete (&head, 80);

  printf ("After Operations the list is : ");

  display (head);

  return 0;

}