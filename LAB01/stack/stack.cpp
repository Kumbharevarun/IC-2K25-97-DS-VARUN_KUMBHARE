#include <iostream>
#include<conio.h>
#define max 3
using namespace std;

class stack{
    int a[max];
    int top;
public:
    stack();
    void create();
    void push();
    void pop();
    void display();
};

stack::stack(){
    top=-1;
}

void stack::create(){
    int x;
    if (top!=-1)
      cout<<"elemet alredy exists";
    else{
        do{
            cout << "enter element to push";
            cin >> x;
            top++;
            a[top]=x;
        }while(top!=1);
    }
}

void stack::push(){
    int x;
    cout << "enter element to push";
    cin >> x;
    if (top==max)
       cout << "stack overflow"<<"\n";
    else {
        top++;
        a[top]=x;
    } 
}


void stack::pop(){
    int d;
    if(top == -1)
      cout <<"stack underflow"<<"\n";
    else{
        d= a[top];
        top--;
        cout <<"element deleted is:"<< d <<"\n";
    }

}

void stack::display(){
    if (top==-1)
      cout<< "stack has no elements";
    else {
        for (int i = top; i>=0; i--){
          cout<< a[i] << " "; 
        } 
    }
}


int main(){
    cout << "hello welcome \n"<<"you can create a stack here \n";

    stack s;
    int choice;
    char c;

    do{
        cout << "which operation do you want to perform on stack?? \n";
        cout << "0.create \n";
        cout<< "1.push \n";
        cout<< "2.pop \n";
        cout<< "3.display \n";
        cin>>choice;

       switch (choice)
       {
          case 0 : s.create();
          break;
          case 1 : s.push();
           break;
           case 2 : s.pop();
          break;
          case 3 : s.display();
          break; 
          default: cout<<"wrong input"<<"\n";
       }
       cout << "do you want to continue "<<"\n";;
       c=getch();
    }while(c=='y');


    return 0;
}
