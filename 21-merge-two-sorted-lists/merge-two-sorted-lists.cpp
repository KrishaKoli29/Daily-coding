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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) 
    {
        vector<int> arr;

        while (head1 != nullptr)
        {
            arr.push_back(head1->val);
            head1 = head1->next;
        }   

        while (head2 != nullptr)
        {
            arr.push_back(head2->val);
            head2 = head2->next;
        }
        sort(arr.begin(), arr.end()); 

        ListNode *merged = new ListNode(-1);
        ListNode *curr = merged;

        for (int i=0; i<arr.size(); i++)
        {
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return merged->next;
    }

    void printMerged(ListNode *curr)
    {
        while (curr != nullptr)
        {
            cout << curr->val;
        }
        if (curr->next != nullptr)
        {
            cout << " ";
        }
        curr = curr->next;
    }
};