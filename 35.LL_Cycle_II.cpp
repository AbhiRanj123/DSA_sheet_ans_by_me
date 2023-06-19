Node* detectcycle(Node*head){
    if(head==NULL ){    
        return NULL;
    }

    Node*slow=head;
    Node*fast=head;

    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
Node *firstNode(Node *head)
{
    //    Write your code here.

    // if(head==NULL) return NULL;

    // Node*start=detectcycle(head);
    // Node*slow=head;

    // while(slow!=start){
    //     slow=slow->next;
    //     start=start->next;
    // }
    // return slow;

    // Node*temp=new Node();
    // while(head!=NULL){
    //     if(head->next==NULL) return NULL;

    //     if(head->next=temp) break;

    //     Node*next=head->next;

    //     head->next=temp;
    //     head=next;
    // }
    // return head;

    unordered_set<Node*>st;
    while(head!=NULL){
        if(st.find(head)!=st.end()) return head;

        st.insert(head);
        head=head->next;
    }
    return NULL;
}
