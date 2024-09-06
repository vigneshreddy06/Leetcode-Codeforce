class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> hashSet;

        for(int& num : nums)
            hashSet.insert(num);

        for(ListNode *ptr = head; ptr->next;){
            if(hashSet.find(ptr->next->val) != hashSet.end())
                ptr->next = ptr->next->next;
            else ptr = ptr->next;
        }

        if(hashSet.find(head->val) != hashSet.end())
            head = head->next;

        return head;
    }
};