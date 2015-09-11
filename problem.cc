/**
 * @file problem.cc
 * @author chenyongtao(com@baidu.com)
 * @date 2015/09/11 17:48:26
 * @brief 
 *  
 **/

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenListA = 0;
        int lenListB = 0;
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        ListNode *ptrA = headA;
        while (ptrA != NULL) {
            ++lenListA;
            ptrA = ptrA->next;
        }
        ListNode *ptrB = headB;
        while (ptrB != NULL) {
            ++lenListB;
            ptrB = ptrB->next;
        }
        int pos = 0;
        if (lenListA > lenListB) {
            pos = lenListA - lenListB;
            while (pos-- > 0) {
                headA = headA->next;
            }
        } else {
            pos = lenListB - lenListA;
            while (pos-- > 0) {
                headB = headB->next;
            }
        }
        while (headA != NULL && headB != NULL) {
            if (headA->val == headB->val) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;

    }
};

class MinStack {
public:
    void push(int x) {
        v.push_back(x);
        if (x < min) {
            min = x;
        }
    }

    void pop() {
        int top = this->top();
        v.pop_back();
        if (top == min) {
            min = INT_MAX;
            for (int i = 0; i < v.size(); ++i) {
                if (v.at(i) < min) {
                    min = v.at(i);
                }
            }
        }
    }

    int top() {
        v.back();
    }

    int getMin() {
        return min;
    }
private:
    vector<int> v;
    int min = INT_MAX;
};

class MinStack {
public:
    void push(int x) {
        v.push_back(x);
        if (x < min) {
            min = x;
        }
    }

    void pop() {
        int top = this->top();
        v.pop_back();
        if (top == min) {
            min = INT_MAX;
            for (int i = 0; i < v.size(); ++i) {
                if (v.at(i) < min) {
                    min = v.at(i);
                }
            }
        }
    }

    int top() {
        v.back();
    }

    int getMin() {
        return min;
    }
private:
    cvector v;
    int min = INT_MAX;
};

class cvector {
    public:
        int push_back(int x) {
            if (used_size < allocate_size) {
                ptr[used_size] = x;
            } else {
                ptr = realloc(ptr, );
            }
        }

        int back() {

        }

        int pop_back() {

        }

    private:
        int *ptr;
        int allocate_size;
        int free_size;
        int used_size;
};





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
