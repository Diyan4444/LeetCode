class MyLinkedList {
public:
    ListNode* head;
    ListNode* tail;
    int size;
    MyLinkedList() {
        head=tail=NULL;
        size=0;
    }
    
    int get(int index) 
    {
        if(index<0||index>=size)return -1;
        if(index==0)return head->val;
        else if(index==size-1)return tail->val;
        else
        {
            ListNode* temp=head;
            for(int i=1;i<=index;i++)
            {
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void addAtHead(int val)
    {
        ListNode* temp = new ListNode(val);
        if(size==0)head=tail=temp;
        else 
        {
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void addAtTail(int val) 
    {
        ListNode* temp = new ListNode(val);
        if(size==0)head=tail=temp;
        else
        {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void addAtIndex(int index, int val) 
    {
        if(index<0 || index>size)return;
        if(index==0) 
        {
            addAtHead(val);
            return;    
        }
        else if(index==size)
        {
            addAtTail(val);
            return;
        }
        ListNode* a = new ListNode(val);
        ListNode* temp = head;
        for(int i =0;i<index-1;i++)
        {
            temp=temp->next;
        }
        a->next=temp->next;
        temp->next=a;
        size++;
    }
    void deleteAtIndex(int index) 
    {
        if(index < 0 || index >= size) return;

        if(index == 0)
        {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            if(size == 1) tail = NULL;
            size--;
            return;
        }

        ListNode* temp = head;
        for(int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }

        ListNode* toDelete = temp->next;
        temp->next = toDelete->next;

        if(index == size - 1)
        {
            tail = temp;
        }

        delete toDelete;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */