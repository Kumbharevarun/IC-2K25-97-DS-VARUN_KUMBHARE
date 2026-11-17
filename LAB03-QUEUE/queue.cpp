#include <iostream>
#include <conio.h>
using namespace std;
#define max 5

class que{
    int x,front, rear;
    int arr[max];
public:
    que(){
        front = rear = -1;
    }
    void insert();
    void deleteE();
    void display();
};

void que::insert(){
    if (rear==max-1)
      cout <<" \n queue overflow";
    else {
        cout << "enter element: ";              //takes single elemet at a time
        cin>>x;
         if (rear==-1)
           front =rear= 0;
        else
           rear++;
        arr[rear]=x;
    }
}

void que::deleteE(){
    if(front==-1)
     cout << " \n queue underflow";
    else {
     x = arr[front];
        cout <<"\n element deleted is: "<<x;
    if (front == rear)
         front = rear = -1;
    else
     front++;
    }
}

void que::display(){
    if(front==-1)
      cout << " \n queue underflow";
    else{
        cout <<"queue is ;/n";
        for (int i = front ; i<=rear; i++)
         cout<< arr[i] <<" ";
    }
}

// done making all the functions now time for main


int main(){
    cout << "hello welcome \n"<<"you can create a queue here \n";

    que q;
    int choice;
    char c;

    do{
        cout << "which operation do you want to perform on stack?? \n";
       // cout << "0.create \n";
        cout<< "1.insert \n";
        cout<< "2.delete element \n";
        cout<< "3.display \n";
        cin>>choice;

       switch (choice)
       {
         // case 0 : s.create();
         // break;
          case 1 : q.insert();
          break;
          case 2 : q.deleteE();
          break;
          case 3 : q.display();
          break; 
          default: cout<<"wrong input"<<"\n";
       }
       cout << "do you want to continue "<<"\n";;
       c=getch();
    }while(c=='y');


    return 0;
}
