#include<stdio.h>
#include<stdlib.h>
//blog url:http://www.cnblogs.com/Anker/archive/2013/03/04/2943498.html
//get the length of linklist by recursion and tailrecursion
typedef struct node
{
	int data;
	struct node* next;
}node,*linklist;
//init linklist
void InitLinklist(linklist* head)
{
	if(*head != NULL)
		free(*head);
	*head = (node*)malloc(sizeof(node));
	(*head)->next = NULL;
}
//insert Node to linklist
void InsertNode(linklist* head,int d)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = d;
	newNode->next = (*head)->next;
	(*head)->next = newNode;
}
// recursion for length of linklist
int GetLengthRecursive(linklist head)
{
	if(head->next == NULL)
		return 0;
	return (GetLengthRecursive(head->next)+1);
}
//take the tailrecursion get the length with help of  variable acc keeping the current length.Constantly accumulate
int GetLengthTailRecursive(linklist head,int *acc)
{
	if(head->next == NULL)
		return *acc;
	*acc = *acc + 1;
	return GetLengthTailRecursive(head->next,acc);
}

void PrintLinklist(linklist head)
{
	node* pnode = head->next;
	while(pnode)
	{
		printf("%d->",pnode->data);
		pnode = pnode->next;
	}
	printf("->NULL\n");
}

int main()
{
	linklist head = NULL;
	int len = 0;
	InitLinklist(&head);
	InsertNode(&head,1);
	InsertNode(&head,1);
	InsertNode(&head,1);
	InsertNode(&head,1);
	InsertNode(&head,1);
	InsertNode(&head,1);
	InsertNode(&head,1);
	InsertNode(&head,1);
	PrintLinklist(head);
	printf("the length of linklist is : %d \n",GetLengthRecursive(head));
	GetLengthTailRecursive(head,&len);
	printf("the length of linklist is : %d \n",len);
	system("pause");
}
