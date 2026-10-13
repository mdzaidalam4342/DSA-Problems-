#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class linkedlist{
    public:
    Node*head;
    Node*tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node*temp=new Node(val);
        if(size==0)
        head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtBeiginning(int val){
        Node*temp=new Node(val);
        if(size==0)
        head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(40);
    ll.insertAtBeiginning(80);
    ll.insertAtBeiginning(75);
    ll.display();
}