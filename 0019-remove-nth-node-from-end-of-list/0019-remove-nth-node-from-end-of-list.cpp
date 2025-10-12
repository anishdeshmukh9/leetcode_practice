/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* prev = NULL;
        ListNode* one = head;   
        ListNode* two = head;
        ListNode* current = head;


        while(n--){
            two = two->next; 
        }

        if(two == NULL){
            return head->next;
        }

        while(two != NULL){

            prev = current;
            current = current->next;
            one = current;
            two = two->next;


        }

        prev->next =  one->next;

        return head;
        
        
    }
};