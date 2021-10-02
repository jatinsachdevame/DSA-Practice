/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title : Connected components 
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
    int numComponents(ListNode* head, vector<int>& G) {
        set<int> s;
        for(int i=0;i<G.size();i++) s.insert(G[i]);
        int count=0;
        set<int> :: iterator it1;
        int flag=0;
        while(head!=NULL)
        {
          it1=s.find(head->val);
            if(it1!=s.end())
            {
                if(flag==0) count++;
                flag=1;
            }
            else flag=0;
            head=head->next;
        }
        return count;
        
    }
};
