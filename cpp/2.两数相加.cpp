/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
        ListNode *l = new ListNode;
        ListNode *p = l;
        int temp = 0, carry = 0;
        for (; l1 && l2; l1 = l1->next, l2 = l2->next)
        {
            temp = l1->val + l2->val + carry;
            ListNode *add = new ListNode(temp % 10);
            p->next = add;
            p=p->next;
            carry = temp / 10;
        }
        /*
        if (!l1 && !l2)
        {
            p = l->next;
            delete l;
            l = p;
            return l;
        }
        */
        ListNode *surplus = nullptr;
        if (l1)
        {
            surplus = l1;
        }
        else if(l2)
        {
            surplus = l2;
        }

        for (; surplus; surplus = surplus->next)
        {
            temp = surplus->val + carry;
            ListNode *add = new ListNode(temp % 10);
            p->next = add;
            p=p->next;
            carry = temp / 10;
        }
        if(carry==1)
        {
            p->next=new ListNode(1);
        }
        p = l->next;
        delete l;
        l = p;
        return l;
    }
};
// @lc code=end

