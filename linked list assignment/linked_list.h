typedef struct node{
    int data;
    struct node* next;
}NODE;

NODE * create_node (int data);
void print_list (NODE * head);

NODE * Insert_at_begin (int data , NODE * head);
NODE * Insert_at_end (int data , NODE * head);
NODE * Insert_at (int data , NODE * head , int index);
NODE * delete_at_begin (NODE * head);
NODE * delete_at_end (NODE * head);
NODE * delete_at (NODE * head , int index);















































