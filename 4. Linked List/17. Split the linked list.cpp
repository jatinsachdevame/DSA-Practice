/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  split the linked list
 */

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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int count=0;
        ListNode *x=root;
        while(x!=NULL) 
        {
            count++;
            x=x->next;
        }
        
        int intervalsize = count / k, lastLeftNode = count % k;
        vector<ListNode*> v(k);
        for (int i = 0; i < k && root; ++i) {
            v[i] = root;
            for (int j = 1; j < intervalsize + (i < lastLeftNode); ++j)
                root = root->next;
            ListNode *next = root->next;
            root->next = nullptr;
            root = next;
        }
        return v;
    }
};
