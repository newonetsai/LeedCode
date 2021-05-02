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
        unordered_map<Node*, Node*> nodeMap;
        Node *temp = head;
        while(temp) {
            nodeMap[temp] = new Node(temp->val, NULL, NULL);
            temp = temp->next;
        }

        temp = head;
        while(temp) {
            nodeMap[temp]->next = nodeMap[temp->next];
            nodeMap[temp]->random = nodeMap[temp->random];
            temp=temp->next;
        }

        return nodeMap[head];

    }
};
