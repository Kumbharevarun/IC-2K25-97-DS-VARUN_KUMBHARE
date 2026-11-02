#include <iostream>
#include<conio.h>
#define max 5
using namespace std;

class mstack{
    int arr[max] , top1 , top2 , x ;
public:
    mstack();
    void create();
    void push1();
    void push2();
    void pop1();
    void pop2();
    void show1();
    void show2();
};

mstack::mstack(){
    top1=-1;
    top2=max;
}


void mstack::create(){
    int x;
    if (top1!=-1 )
      cout<<"elemet alredy exists";
    else{
        do{
            cout << "enter element to push";
            cin >> x;
            top1++;
            arr[top1]=x;
        }while(top1!=max-1);
    }
}


void mstack::push1(){
    if(top1+1 == top2)
      cout<<"\n stack overflow ";
    else{
     cout << "\n enter element to push: ";
     cin>>x;
     top1++;
     arr[top1]=x; 
    }
}

void mstack::push2(){
    if (top2-1 == top1)
      cout<<"\n stack overflow ";
    else{
      cout << "\n enter element to push: ";
      cin>>x;
      top2--;
      arr[top2]=x; 
    }
}

void mstack :: pop1(){
    if ( top1 == -1)
      cout << "stack underflow";
    else {
        x= arr[top1];
        top1--;
        cout<< "element popped out is:  " << x << endl;
    }
}

void mstack::pop2(){
    if (top2==max)
      cout << "stack underflow";
    else {
        x= arr[top2];
        top2++;
        cout<< "element popped out is:  " << x << endl;
    }
}

void mstack:: show1(){
    if (top1==-1)
      cout << "stack underflow , has no elements";
    else {
     cout <<"elements are: \n ";
     for (int i = top1; i>-1; i--){
       cout << arr[i]<<" ";
     }
    }
}

void mstack :: show2(){
    if (top2 == max)
      cout<< "has no elements\n";
    else{
     cout<< "elements are;\n"; 
       for (int i = top2 ; i<max; i++)
         cout<< arr[i] << "  ";
    }

}


int main(){
    cout << "hello welcome \n"<<"you can create a multiple 2 pointer stack here \n";

    mstack ms;
    int choice;
    char c;

    do{
        cout << "which operation do you want to perform on stack?? \n";
        cout << "0.create\n";
        cout<< "1.push \n";
        cout<< "2.push2 \n";
        cout<< "3.pop \n";
        cout<< "4.pop2 \n";
        cout<< "5.show1 \n";
        cout<< "6.show2 \n";
        cin>>choice;

       switch (choice)
       {
           case 0 : ms.create();
           break;
           case 1 : ms.push1();
           break;
           case 2 : ms.push2();
           break;
           case 3 : ms.pop1();
           break;
           case 4 : ms.pop2();
           break;
           case 5 : ms.show1();
           break; 
           case 6 : ms.show2();
           break; 
          default: cout<<"wrong input"<<"\n";
       }
       cout << "do you want to continue "<<"\n";;
       c=getch();
    }while(c=='y');
    return 0;
}
