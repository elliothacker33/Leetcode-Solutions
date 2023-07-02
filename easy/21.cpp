// Merge two sorted linked lists- te-93%
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	if(list1==nullptr && list2==nullptr)
	    return nullptr;
	if(list1==nullptr)
	    return list2; 
	if(list2==nullptr)
	    return list1;
	ListNode* l=new ListNode();
	ListNode* head=l;
	while(list1!=nullptr || list2!=nullptr){
		if(list1!=nullptr && list2!=nullptr){
		    if(list1->val<=list2->val){
			l->val=list1->val;
			list1=list1->next;
		    }
		    else{
			l->val=list2->val;
			list2=list2->next;
		    }
		    l->next= new ListNode();
		    l=l->next;
		}
		else if(list1!=nullptr){
		    l->val=list1->val;
		    if(list1->next!=nullptr)
			l->next= new ListNode();
		    else l->next=nullptr;
		    list1=list1->next;
		    l=l->next;
		}
		else if(list2!=nullptr){
		    l->val=list2->val;
		    if(list2->next!=nullptr)
			l->next= new ListNode();
		    else l->next=nullptr;
		    list2=list2->next;
		    l=l->next;
		}
	}
	return head;
    }
};

