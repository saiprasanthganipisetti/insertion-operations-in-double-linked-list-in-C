#include<stdio.h>

int main()
{
  int num,loc;
  printf("Enter the number to be inserted");
  scanf("%d",&num);
  printf("Enter the number after which to be inserted");
  scanf("%d",&loc);
  int *temp = head;
  while(temp->val != loc)
  {
    temp = temp->next;
  }
  num->next = temp->next;
  temp->next = num;
  return head;
}
