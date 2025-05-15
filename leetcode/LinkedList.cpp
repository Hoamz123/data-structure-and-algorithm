#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//create List
ListNode *createList(int a[],int size){
    if(size == 0) return nullptr;
    ListNode *head = new ListNode(a[0]);
    ListNode *curr = head;
    for(int i=1;i<size;i++){
        curr->next = new ListNode(a[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
}

ListNode *mergeTwoLists(ListNode *list1,ListNode *list2){
    if(list1 == nullptr) return list2;
    if(list2 == nullptr) return list1;
    int val_head = 0;
    if(list1->val <= list2->val){
        val_head = list1->val;
        list1 = list1->next;
    }
    else{
        val_head = list2->val;
        list2 = list2->next;
    }
    ListNode *head = new ListNode(val_head);
    ListNode *curr = head;
    while(list1 != nullptr && list2 != nullptr){
        if(list1->val < list2->val){
            curr->next = new ListNode(list1->val);
            curr = curr->next;
            list1 = list1->next;
        }
        else{
            curr->next = new ListNode(list2->val);
            curr = curr->next;
            list2 = list2->next;
        }
    }
    while(list1 != nullptr){
        curr->next = new ListNode(list1->val);
        curr = curr->next;
        list1 = list1->next;
    }
    while(list2 != nullptr){
        curr->next = new ListNode(list2->val);
        curr = curr->next;
        list2 = list2->next;
    }
    return head;
}

ListNode *mergeKLists(vector<ListNode *> &lists)
{
    if(lists.empty()) return nullptr;
    //co list dau tien
    while(lists.size() > 1){
        lists.push_back(mergeTwoLists(lists[0],lists[1]));
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    //khi nay size = 1 -> co duy nhat 1 phan tu
    return lists[0];
    //acc
}

ListNode *swapPairs(ListNode *head)
{
    if(head == nullptr) return head;//list rong
    if(head->next == nullptr) return head;//list co 1 phan tu
    ListNode *curr = head;
    ListNode *null = new ListNode();
    ListNode *prev = null;
    while(curr != nullptr && curr->next != nullptr){
        prev->next = curr->next;
        curr->next = prev->next->next;
        prev->next->next = curr;
        prev = curr;
        curr = curr->next;
    }
    return null->next;
    //acc
}

ListNode *rotateRight(ListNode *head, int k)
{
    if(head == nullptr) return head;
    vector<int> v;
    ListNode *tmp = head;
    while(tmp != nullptr){
        v.push_back(tmp->val);
        tmp = tmp->next;
    }
    int size = v.size();
    k = k % size;
    if(k==0){
        //dao ngc dung size lan
        return head;
    }
    ListNode *h = new ListNode(v[size - k]);
    tmp = h;
    for(int i = size - k + 1;i < size;i++){
        tmp->next = new ListNode(v[i]);
        tmp = tmp->next;
    }
    for(int i=0;i<size - k;i++){
        tmp->next = new ListNode(v[i]);
        tmp = tmp->next;
    }
    return h;
    //acc
}

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *prev = new ListNode(1000,head);//prev -> next = head
    ListNode *tmp  = prev;
    //1 2 3 3 4 4 5
    while(head != nullptr){
        if(head->next != nullptr && (head->val == head->next->val)){
            while (head->next != nullptr && (head->val == head->next->val)){
                head = head->next;
            }
            tmp->next = head->next;
        }
        else{
            tmp = tmp->next;
        }
        head = head->next;
    }
    return prev->next;
    //acc
}

void deleteNode(ListNode *node)
{
    ListNode *tmp = node->next;
    node->val = tmp->val;
    node->next = tmp->next;
    tmp->next = nullptr;
}

int main(){
    //int arr[] = {1, 2, 4};
    // int a[] = {1, 3, 4};
    // int b[] = {1,4,5,6,7};
    // int c[] = {};
    // ListNode *h1 = createList(arr,3);
    // ListNode *h2 = createList(a,3);
    // ListNode *h3 = createList(b,5);
    // ListNode *h4 = createList(c,0);
    // vector<ListNode *> lists;
    // lists.push_back(h1);
    // lists.push_back(h2);
    // lists.push_back(h3);
    // lists.push_back(h4);
    // ListNode *head = mergeKLists(lists);
    int a[] = {1, 2, 3, 4};
    ListNode *head = createList(a,4);
    // ListNode *prev = new ListNode();
    // ListNode *tmp  = prev;
    // while(head != nullptr){
    //     if(head->val == head->next->val){
    //         while(head->val == (head->next->val)){
    //             head = head->next;
    //         }
    //         head = head->next;
    //         tmp->next = head;
    //         tmp = tmp->next;
    //     }
    //     else{
    //         tmp->next = head;
    //         tmp = tmp->next;
    //     }
    //     head = head->next;
    // }

    printList(swapPairs(head));
}