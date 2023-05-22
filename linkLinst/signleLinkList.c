#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;
struct node *trav = NULL;

void printNode ()
{
  printf ("Node : ");
  trav = head;
  while (trav != NULL)
    {
      printf ("%d->", trav->data);
      trav = trav->next;
    }
  printf ("\r\n");
}

void insert_at_begning (int data)
{
  struct node *temp;
  temp = (struct node *) malloc (sizeof (struct node));
  if (temp == NULL)
    {
      return;
    }
  temp->data = data;
  //trav = head;
  /*no node avilable */
  if (head == NULL)
    {
      temp->next = NULL;
      head = temp;
    }
  else
    {				/*add node in begning */

      temp->next = head;
      head = temp;
    }
}

void insert_at_end (int data)
{
  struct node *temp;
  temp = (struct node *) malloc (sizeof (struct node));
  if (temp == NULL)
    {
      return;
    }
  temp->data = data;
  temp->next = NULL;
  trav = head;
  /*check if no node avilable,make it first node */
  if (head == NULL)
    {
      temp->next = NULL;
      head = temp;
    }
  else
    {				/*Look for last node */
      while (trav->next != NULL)
	{
	  trav = trav->next;
	}
      trav->next = temp;
    }
}

int count_number_of_node ()
{
  int count = 0;
  trav = head;
  while (trav != NULL)
    {
      count++;
      trav = trav->next;
    }

  return count++;
}

void inset_at_pos (int pos, int data)
{
  struct node *temp;
  temp = (struct node *) malloc (sizeof (struct node));
  if (temp == NULL)
    return;

  temp->data = data;

  int totalNode = count_number_of_node ();
  printf ("totalNode %d\n", totalNode);

  trav = head;

  if (totalNode < pos)
    {
      printf ("invalid location..... \r\n");
    }
  else
    {
      for (int i = 0; i < pos - 1; i++)
	{
	  trav = trav->next;
	  if (trav == NULL)
	    return;

	}

      printf ("valid location..... \r\n");
      temp->next = trav->next;
      trav->next = temp;

    }

}

int find_node (int data)
{
  trav = head;
  int pos = 1;
  /*NO Node */
  if (trav == NULL)
    {
      return;
    }
  while (trav->data != data)
    {
      if (trav == NULL)
	{
	  return;
	}
      pos++;
      trav = trav->next;

    }
  return pos;
}

//=======================Delete Node=========================

void deleteNode_at_begning ()
{
  // trav = head;
  struct node *temp;
  /*check node are there */
  if (head == NULL)
    {
      return;
    }
  else if (head->next == NULL)	/*check if only one node */
    {
      temp = head;
      head = NULL;
      free (temp);
    }
  else
    {
      temp = head;
      head = head->next;
      free (temp);
    }

}

void delete_at_end ()
{
  struct node *temp,*prev;
  trav = head;

  /* check node avilable */
  if (head == NULL)
    {
      return;
    }
  else if (head->next == NULL)
    {				/* only one node */

      temp = head;
      head = head->next;
      free (temp);
    }
  else{				/*traverse till end */
      while (trav->next != NULL)
	  {
	    prev = trav;
	    trav = trav->next;
	  }
        prev->next = NULL;
        free (trav);
    }
}

void delete_at_pos(int pos)
{
    struct node *prev; 
    trav = head;
    
    for(int i=1;i<pos;i++)
    {
        prev = trav;
        trav = trav->next;
    }
    prev->next = trav->next;
    free(trav);
    
}

int find_node_and_delete(int data)
{
    struct node *prev;
    trav = head;
    int pos=1;
    //TODO: if data not avilable need to do workaround
    while(trav->data != data)
    {
        prev = trav;
        pos++;
        trav = trav->next;
    }
    prev->next = trav->next;
    free(trav);
    return pos;
}

void reverse()
{
    struct node *prev=NULL;
    struct node *next =NULL;
    struct node *current;
    current = head; 
    
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
       
        prev = current;
        current = next;
    }
   head = prev;
}
//===========================================================
int main ()
{
  printf ("Hello World");
  insert_at_begning (5);
  insert_at_begning (4);
insert_at_begning(3);

printf("TotalNode %d\n",count_number_of_node());
insert_at_end(8);
insert_at_end(9);
printf("TotalNode %d\n",count_number_of_node());
printNode();

inset_at_pos(3,6);
inset_at_pos(2,1);
printNode();

int nodepos =find_node(5);
printf("nodepos :%d\n",nodepos);

  deleteNode_at_begning ();
  printNode ();
  
  delete_at_end();
  delete_at_end();
    printNode ();
   
   
   insert_at_end(10);
insert_at_end(11);
insert_at_end(12);
insert_at_end(13);

delete_at_pos(2);
printNode ();
    
int pos = find_node_and_delete(11);
printf("deleted pos %d \n",pos);
printNode ();
printf("Reverse string====\n");
printNode ();
reverse();
printNode ();
  return 0;
}






