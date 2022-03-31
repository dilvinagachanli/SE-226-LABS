#include <iostream>
#include <new>
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
    Stack(int a){
        top = nullptr;
        s=a;

    }

    int size(){
        cout<<"The size is: "<<a<<endl;
        return a;
    }
    void push(int data){

        if(s==0){
            cout<<"You can't add anymore."<<endl;
        }

        else{
            Node *t = new Node(data, nullptr);


            (*t).data = data;
            (*t).next = top;
            top=t;
            cout<<(*t).data<<" pushed into stack\n";
            s--;
        }

    }




    void pop(){

        Node *temp;
        if(!top){
            cout<<"Stack UnderFlow can't delete."<<endl;
        }
        else{


            temp=top;
            top=top->next;


            cout<<"You popped " << (*temp).data<<endl;
            free(temp);
            s--;
        }

    }


    void topS(){

        cout<<"Top element is: " << (*top).data<<endl;

    }

    void isEmpty(){
        if(a==0){

            cout<<"The stack is empty."<<endl;

        }
        if(s==0){
            cout<<"Stack is full."<<endl;
        }
        else{
            cout<<"Stack is not empty."<<endl;
        }

    }



};

int main() {

    Stack *s = new Stack(3);
    s->push(10);
    s->push(12);
    s->push(3);
    s->push(4);

    s->pop();
    s->topS();



    s->size();
    s->isEmpty();
}
