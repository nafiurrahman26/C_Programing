void print(){
struct node*temp;
temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
     temp=temp->next;
}
printf("NULL");
}