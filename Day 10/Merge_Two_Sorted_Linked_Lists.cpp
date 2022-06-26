#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* solve(Node<int>* first, Node<int>* second){
    //if only one element is present in first list => exception handling
    if(first->next == NULL){
        first->next = second;    //if first node has only one element then uske next me second dal do puri and return
        return first;
    }
    
    
    
    // now init curr1, next1, curr2
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1->next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2->next;    //for updation to next2
    
    //now check in the specific window, and check whether the window is being maintained or not
    while(next1!=NULL && curr2!=NULL){    //curr2 mtlb second wali null nahi
        //now check in window
        if((curr2->data >= curr1-> data) &&
          (curr2->data <= next1->data)){
            //mtlb sab sahi hai, insert kar do beech mei
            
            //5 step process
            //1-3 => add node curr2 in b/w curr1 and next1
            //1
            curr1->next = curr2;
            //2
            next2 = curr2->next;
            //3
            curr2->next = next1;
            //4 & 5 => ptr updation
            //4
            curr1 = curr2;
            //5
            curr2 = next2;
        }//if end
        else{
            //our data not lie in window=> move pointers ahead
//             curr1 & next1 ko aage badana hai condition not match
            curr1 = next1;
            next1 = next1->next;    //yha gadbad de gaya if only one element present in our LL first => kyunki entry nhi kar payega wo wahan  => top pe condn
            //null check => next 1 khtm ho gaya kya?
            if(next1 == NULL){
                //LL khtm => curr1 utha ke 2nd list remianing me chipka do
                curr1->next = curr2;    //bachi hui 2nd list
            }
                //no else needed we covered all
        }
    }
    return first;    //it'll have the new sorted LL
}
//**********************************
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL){
        return second;
    }
    if(second== NULL){
        return first;
    }
    
    //now logic start => identify correct first and second list
    
    if(first->data <= second->data){
       return solve(first, second);
    }
    else{
        return solve(second, first);
    }
    
    //so here we decided which list to make as first and which as last

}
