#include <iostream>
#include "Queue.h"
using namespace std;
using namespace MyQueue;
int main (){
    int choice = 1;
    double tmp_data;
    cout<<"Enter the first element of queue:";
    cin>>tmp_data;
    Node *start = make_queue(tmp_data);
    Node *end = start;
    while (choice){
        cout<<"1)enqueue\n2)dequeue\n3)pick\n";
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Enter new element:";
            cin>>tmp_data;
            enqueue(&end,tmp_data);
            break;
        case 2:
            cout<<"deleted data:"<<dequeue(&start)<<endl;
            break;
        case 3:
            cout<<"picked data:"<<pick(start)<<endl;
            break;
        default:
            return 0;
            break;
        }//switch choice
    }//while choice
    return 0;
}