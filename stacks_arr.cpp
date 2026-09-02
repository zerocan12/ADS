#include <iostream>
using namespace std ;

class stack {
    // properties
    public:
    int *arr ;
    int size ;
    int top ;
    
    // behaviour 
    stack (int size){
        this -> size = size;
        arr= new int[size] ;
        top = - 1 ;
    }
    
    void push (int element){
        if(size - top > 1){
            top++ ;
            arr[top] = element ;
        }
        else{
            cout << "stack overflow" << endl ;
        }
    }
    
    void pop() {
        if(top >= 0){
            top-- ;
        }
        else{
            cout << "stack underflow" << endl;
        }
    }
    
    int peek(){
        if(top >= 0){
            return arr[top] ;
        }
        else{
            cout << "stack is empty" << endl ;
            return -1 ;
        }
    }
    
    bool isEmpty(){
        if(top == -1){
          return true ;  
        }
        else{
           return false ;
        }
    }

 };

int main()
{   
    int n ;
    cin >> n ;
    stack st(n);
    for(int i = 0 ; i < n ; i++){
        int element ;
        cin >> element ;
        st.push(element) ;
    }
    
    for(int i = n - 1 ; i >= 0 ; i--){
        cout << "Top is " << st.peek() << endl ;
        st.pop() ;
    }
    
    if (st.isEmpty()){
        cout << "Stack is Empty" << endl ;
    }
    else{
        cout << "Stack os not Empty" << endl ;
    }

    return 0;
}