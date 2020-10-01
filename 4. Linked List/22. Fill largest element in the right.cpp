/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  Fill the greatest element 
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
    
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size();
        int temp=v[n-1];
        v[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            if(v[i]>temp)
            {
                temp=v[i];
                v[i]=0;
            }
            else v[i]=temp;
        }
        return v;
        
    }
};
