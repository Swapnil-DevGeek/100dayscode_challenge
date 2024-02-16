#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <int, vector<int>, greater<int> > minHeap;
        ListNode* ans = new ListNode (-1);

        for(int i=0;i<lists.size();i++){
            ListNode* curr = lists[i];
            while(curr){
                minHeap.push(curr->val);
                curr = curr->next; 
            }
        } 

        ListNode* curr = ans;
        while(minHeap.size() != 0){
            ListNode* nextNode = new ListNode(minHeap.top());
            curr->next = nextNode;
            curr = curr->next;
            minHeap.pop();
        }

        return ans->next;
    }
};