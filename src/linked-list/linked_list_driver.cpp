#include <iostream>

struct Node{
    int data = 0;
    Node *next = nullptr;
};

// Node *FindN(Node *curr, int n){
//     if(n == 0){
//         return curr;
//     }
//     Node *prev, *next;
//     prev = curr;
//     if(curr->next != nullptr){
//         curr = curr->next;
//     }
// }

// void deleteNode(Node *begone){
//     Node *temp = begone;

// }

int main(){

    std::cout << "Hello World!" << std::endl;
    int silence = 4;
    Node* head = new Node({silence});

    Node *curr = head;

    Node *fill = new Node({4});

    for(int i=0; i<5; i++){
        curr->next = new Node({i});
        curr = curr->next;
    }

    curr = head;
    while(curr != nullptr){
        std::cout << curr->data << " -> ";
        curr = curr->next;
    }

    //TODO: delete the nodes
    

    return 0;
}