#include<stdio.h>

struct Node
{
  int data;
  struct Node *next;
};

void delete (struct Node **head, int delVal)
{
  struct Node *temp = *head;
  struct Node *prev;

  //Case when there is only 1 node in the list
  if (temp->next == NULL)
    {
      *head = NULL;
      free (temp);
      printf ("Value %d, deleted \n", delVal);
      return;
    }
  //if the head node itself needs to be deleted
  if (temp != NULL && temp->data == delVal)
    {
      //Case 1 head becomes 30
      *head = temp->next; //changing head to next in the list

      printf ("Value %d, deleted \n", delVal);
      //case 1: 22 deleted and freed
      free (temp);
      return;
    }

  //run until we find the value to be deleted in the list
  while (temp != NULL && temp->data != delVal)
    {
      //store previous link node as we need to change its next val
      prev = temp;
      temp = temp->next;
    }

  //if value is not present then
  //temp will have traversed to last node NULL
  if (temp == NULL)
    {
      printf ("Value not found\n");
      return;
    }

  // Case 2: (24)->next = 16 (as 20->next = 16)
  // Case 3: (16)->next = NULL (as 12->next = NULL)
  prev->next = temp->next;
  free (temp);

  //case 2: 20 deleted and freed
  //case 3: 12 deleted and freed
  printf ("Value %d, deleted \n", delVal);
}

void display (struct Node *node)
{

  //as linked list will end when Node is Null
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}

int main ()
{
  //creating 4 pointers of type struct Node
  //So these can point to address of struct type variable
  struct Node *head = NULL;
  struct Node *node2 = NULL;
  struct Node *node3 = NULL;
  struct Node *node4 = NULL;
  struct Node *node5 = NULL;
  struct Node *node6 = NULL;

  // allocate 3 nodes in the heap
  head = (struct Node *) malloc (sizeof (struct Node));
  node2 = (struct Node *) malloc (sizeof (struct Node));
  node3 = (struct Node *) malloc (sizeof (struct Node));
  node4 = (struct Node *) malloc (sizeof (struct Node));
  node5 = (struct Node *) malloc (sizeof (struct Node));
  node6 = (struct Node *) malloc (sizeof (struct Node));


  head->data = 50; // data set for head node
  head->next = node2; // next pointer assigned to address of node2

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

  /*No need for & i.e. address as we do not
     need to change head address
   */
  printf ("Before Operations : ");
  display (head);

  //deleting first occurance of a value in linked list
  delete (&head, 50);
  delete (&head, 70);
  delete (&head, 80);

  printf ("After Operations the list is : ");

  display (head);

  return 0;

}