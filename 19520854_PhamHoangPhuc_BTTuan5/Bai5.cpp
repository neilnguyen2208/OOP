#include <iostream>

using namespace std;

class Node{
public:
    int iData;
    Node *pNext;    
};
Node *GetNode(int x){
    Node *p = new Node;
    p->iData = x;
    p->pNext = nullptr;
    return p;
}
class List{
public:
    Node *sHeap;
    Node *sTail;
};
void CreateStack(List &s){
    s.sHeap = nullptr;
    s.sTail = nullptr;
}
bool IsEmpty(List &s){
    if(s.sHeap == nullptr) return 1; 
    return 0;
}
void Push(List &s, Node *Temp){
    if(s.sHeap == nullptr){
        s.sHeap = Temp;
        s.sTail = Temp;
    }
    else{
        Temp->pNext = s.sHeap;
        s.sHeap = Temp;
    }
}
bool Pop(List &s, int &trave){
    Node *p;
    if(IsEmpty(s) != 1){
        p = s.sHeap;
        trave = p->iData;
        s.sHeap = s.sHeap->pNext;
        if(s.sHeap == nullptr) s.sTail = nullptr;
        delete p;
        return 1;
    }
    return 0;
}
void Input(List &s){
    int x;
    while(1){
        cin >> x;
        if(x == 0) break;
        Node *p = GetNode(x);
        Push(s, p);
    }
}
void Output(List s){
    Node *p = s.sHeap;
    while(p != nullptr){
        cout << p->iData << " ";
        p = p->pNext;
    }
}
int Top(List s){
    return s.sHeap->iData;
}
int main(){
    List s;
    CreateStack(s);
    Input(s);
    int iTrave;
    if(s.sHeap == nullptr){
        return 0;
        system("pause");
    }
    else{
        Output(s);
        cout << endl;
        if(Pop(s, iTrave) == 1) cout << iTrave << endl;
        else cout << "No";
        cout << "Top = " << Top(s);
        system("pause");
        return 0;
    }
    
}






