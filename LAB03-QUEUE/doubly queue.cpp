#include <iostream>
#include <conio.h>
using namespace std;
#define max 5

class dque{
    int x,front,rear;
    int arr[max];
public:
    dque(){
        front = rear = -1;
    }
    void insert_F();
    void insert_R();
    void delete_F();
    void delete_R();
    void display();
};

void dque::insert_R(){
    if(front=(rear+1)%max)
       cout << "queue is full";
    else{
    cout<< "enter data; ";
    cin>>x;
    if (rear=-1)
        front=rear=0;
    else
        rear=(rear+1)%max;
    }
    arr[rear]=x;
}

void dque::insert_F(){
    if (front=1)
      cout << "queue is empty";
    else 
      cout << "enter element";
      cin>> x;
         if(rear==-1){
            front=rear=0;
        }
        else {
            front = ((max(front-1))%max
        }

} 