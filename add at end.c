#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
};
struct node*head=NULL;

void add_at_end()
{
  struct node *nn=(struct node*)malloc(sizeof(struct node));
  struct node *temp;
  if(nn==NULL){
    printf("MEM ALLOC FAILED\n");
    return;
  }
  scanf("%d",&nn->data);  //
  nn->next=NULL;
  if(head ==NULL)
  {
    head=nn;
  }
  else {
    temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=nn;
  }
}
void display()
{
  struct node *temp=head;
    if(head==NULL){
      printf("List is empty");
    return;
    }
    while(temp!=NULL) {
      printf("%d ",temp->data);
      temp=temp->next;
    }
}
    
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    add_at_end();
  }
  display();
  return 0;
}
