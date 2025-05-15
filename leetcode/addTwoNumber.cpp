#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *createList(int arr[], int size)
{
    if (size == 0) return nullptr; // Trả về nullptr nếu mảng rỗng

    ListNode *head = new ListNode(arr[0]); // Tạo nút đầu tiên
    ListNode *current = head;

    for (int i = 1; i < size; i++)
    {
        current->next = new ListNode(arr[i]); // Tạo nút mới và liên kết
        current = current->next;              // Di chuyển đến nút tiếp theo
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

ListNode *reverse(ListNode *head){
    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *next = nullptr;
    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *ans = new ListNode(0);
    ListNode *currAns = ans;
    int tmpRmb = 0;//luu bien nho
    while(l1 != nullptr || l2 != nullptr || tmpRmb != 0){
        int val1 = (l1 != nullptr) ? l1->val : 0;
        int val2 = (l2 !=  nullptr) ? l2->val : 0;
        int sum = val1 + val2 + tmpRmb;
        int rs = sum % 10;
        tmpRmb = sum / 10;
        currAns->next = new ListNode(rs);
        currAns = currAns->next;

        if(l1 != nullptr) l1 = l1 -> next;
        if(l2 != nullptr) l2 = l2 -> next;
    }
    return ans -> next;
}
//acc

ListNode* reverseBetween(ListNode* head, int left, int right) {
    vector<int> v;
    v.push_back(-10000000);
    ListNode *tmp = head;
    while(tmp != nullptr){
        v.push_back(tmp->val);
        tmp = tmp->next;
    }
    int size = v.size();
    while(left <= right){
        swap(v[left],v[right]);
        left++;
        right--;
    }
    ListNode *h = new ListNode(v[1]);
    ListNode *curr = h;
    for(int i=2;i<size;i++){
        curr->next = new ListNode(v[i]);
        curr = curr->next;
    }
    return h;
    //acc
}

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *tmp = head;
    int cnt = 1;
    int size = 0;
    while(tmp != nullptr){
        size ++;
        tmp = tmp->next;
    }
    tmp = head;
    int target = size - n + 1;
    ListNode *prev = nullptr;
    while(cnt != target){
        //xoa khi nao cnt == target ->node can xoa
        cnt++;
        prev = tmp;
        tmp = tmp->next;
    }
    //xuong den day la luc xoa
    if(tmp == head){
        //xoa node dau
        head = head->next;
    }
    else{
        prev->next = tmp->next;
    }
    delete tmp;
    return head;
    //acc
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
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
    //acc
}

int main(){
    // int arr1[] = {9,9,9,9,9,9,9};
    // ListNode *list1 = createList(arr1, 7);

    // // Danh sách 2
    // int arr2[] = {9,9,9,9};
    // ListNode *list2 = createList(arr2, 4);
    
    // printList(list1);
    // cout << endl;
    // printList(list2);
    // cout << endl;
    // ListNode *ans = addTwoNumbers(list1,list2);
    // printList(ans);


    int arr[] = {1,2,4};
    int a[] = {1,3,4};
    ListNode *head = createList(arr,3);
    ListNode *head2 = createList(a,3);
    ListNode *h = mergeTwoLists(head,head2);
    printList(h);
}