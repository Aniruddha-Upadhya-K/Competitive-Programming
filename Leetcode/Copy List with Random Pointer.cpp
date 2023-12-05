// https://leetcode.com/problems/copy-list-with-random-pointer

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;

        unordered_map<Node*, Node*> mem;
        Node* headCopy = head;

        Node* newHeadNode = new Node(head->val);
        Node* newHead = newHeadNode;

        while(head != NULL) {
            if(head->next != NULL) {
                Node* newNode = new Node(head->next->val);
                newHead->next = newNode;

                mem.insert({head, newHead});

                newHead = newHead->next;
                head = head->next;
            } else {
                mem.insert({head, newHead});
                head = head->next;
                newHead = newHead->next;
            }
        }
        head = headCopy;
        newHead = newHeadNode;
        while(head != NULL) {
            newHead->random = mem[head->random];
            newHead = newHead->next;
            head = head->next;
        }
        return newHeadNode;
    }
};
