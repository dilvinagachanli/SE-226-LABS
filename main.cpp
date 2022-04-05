#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int x, Node *n){
        data=x; next=n;
    }
};

class Stack{
private:
    Node *top;
    int s;
    int a;

public:
    Stack(int n){
        top = nullptr;
        s=n;
        a=n;
    }

    int size(){
        return a-s;
    }

    void push(int data){
        if(s==0){
            cout<<"You can't add anymore."<<endl;
        } else{
            Node t = new Node(data, nullptr);
            (t).data = data;
            (t).next = top;
            top=t;
            cout<<(t).data<<" pushed into stack\n";
            s--;
        }

    }

    void pop(){
        Node temp;
        if(!top){
            cout<<"Stack UnderFlow can't delete."<<endl;
        }
        else{
            temp=top;
            top=top->next;

            cout<<"You popped " << (temp).data<<endl;
            free(temp);
            s++;
        }
    }

    void topS(){
        cout<<"Top element is: " << (*top).data<<endl;
    }

    bool isEmpty(){
        if(size()==0){
            cout<<"Stack is empty."<<endl;
            return true;
        }
        cout<<"Stack is not empty."<<endl;
        return false;
    }
};

int main() {

    Stack *s = new Stack(3);
    s->push(10);
    s->push(12);
    s->pop();
    s->push(3);
    s->push(4);

    s->pop();
    s->topS();
    s->pop();
    s->pop();
    s->pop();

    cout<<"The size is: "<<s->size()<<endl;
    s->isEmpty();
}