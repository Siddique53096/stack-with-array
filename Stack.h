class Stack {
private:
    int* array; 
    int size;   
    int top;    

public:
    Stack(int size); 
    ~Stack();        
    void push(int num);  
    void pop();          
    bool isFull();       
    bool isEmpty();      
    int peek();          
    void display();      
};