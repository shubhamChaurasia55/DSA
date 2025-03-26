
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // using find size of linkedList
        int size = 0;
        ListNode *temp = head;
        while(temp != NULL) {
            size++;
            temp = temp->next;
        }
        temp = head;
        for(int i=0;i<size/2;i++) temp = temp->next;
        return temp;
    }
};