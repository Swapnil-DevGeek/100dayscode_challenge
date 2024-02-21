#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head == NULL || head->next == NULL)
            return;

        //check for loop
        Node* slow = head;
        Node* fast = head;
        bool isLoop = false;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                isLoop = true;
                break;
            }
        }

        if(!isLoop)
            return;

        // If loop starts from head
        if(slow == head) {
            while(fast->next != head) {
                fast = fast->next;
            }
            fast->next = NULL;
            return;
        }

        //removing the loop
        slow = head;
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = NULL;
    }
};
