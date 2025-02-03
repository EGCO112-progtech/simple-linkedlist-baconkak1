//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3; //5+3 = 8

    //เพิ่มท้าย
    struct node d;
    b.next = &d;
    b.next->value = 11;
    d.next = NULL; //อย่าลืมใส่ NULL

    //เพิ่มหัว
    struct node new_node;
    new_node.value = 2;
    new_node.next = head;
    head = &new_node;

    typedef struct node* NodePtr;
    typedef struct node Node;
    NodePtr tmp=head;

    int i =0;

    //ปริ้นค่าปกติ
    // printf("%d\n", head->value);
    // printf("%d\n", head->next->value);
    // printf("%d\n", head->next->next->value);
    // printf("%d\n", head->next->next->next->value);

    //for loop ปริ้นค่า
    // int i,n=4;
    // for(i=0;i<n;i++){
    //     printf("%3d", tmp->value);
    //     tmp = tmp->next;
    // }

    //while loop ปริ้นค่า
    tmp = head;
    while(tmp != NULL){
        printf("%3d", tmp->value);
        tmp = tmp->next;
    }

    //เวลามัลล็อคตัวเต็ม
    // head = (struct node*) malloc(sizeof(struct node));
    //แบบย่อ
    //typedef struct node* NodePtr;
    //typedef struct node Node;
    // head = (NodePtr) malloc(sizeof(Node));

    printf("\n\n");
    head = (NodePtr) malloc(sizeof(Node));
    tmp = head;
    for (i = 0; i < 3; i++) {
        //สร้างอีก สามโหนดมาต่อท้าย
        //ใส่ค่า i+3 ใน value
        tmp->value = i + 3;
        tmp->next = (NodePtr) malloc(sizeof(struct node));
        tmp = tmp->next;
    }
    tmp->value=i+3;
    tmp->next=NULL;

    tmp = head;
    while(tmp!=NULL){
        head = head->next;
        printf("%3d", tmp->value);
        free(tmp);
        tmp = head;
    }
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    // typedef struct node* NodePtr;
    // NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
    */
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(){
            printf("%3d", tmp->value);
           // What is missing???
        }
    */
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    
    return 0;
}
