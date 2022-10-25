void display()
{
	struct node *temp;
	temp = start;
	printf("The elements in the linked list are :\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
