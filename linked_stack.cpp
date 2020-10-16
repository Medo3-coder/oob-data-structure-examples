#include <iostream>
using namespace std;

template<class t>

class stack {
	
	struct node
	{
		t item;
        node *next ;		
    };
    
    node *top , *curr;
    
    public :
    stack()
    {
		top = NULL ;  
	}
    
    void push(t newItem)
    {
		//make a new space item Via new node
		node *newItemPtr = new node ;
		if(newItemPtr==NULL)
		cout << " stack puch cannot allocate memory " ;
		else{
		newItemPtr->item = newItem ;
		newItemPtr->next=top ;
		top = newItemPtr ;
	}
		
		
	}
	
	bool isEmpty()
	{
		return top==NULL ;
	}
	
	void pop()
	{
		if(isEmpty())
		cout << " stack is empty no pop " ;
		else 
		{
			node*temp = top;
			top = top ->next;
			temp = temp->next =NULL ; 
			delete temp ; 
			
			
		}
	}
    
    //حذف مع استرجاع القيمة 
    void pop(t&stackTop)
	{
		if(isEmpty())
		cout << " stack is empty no pop " ;
		else 
		{
			stackTop = top->item;
			node*temp = top;
			top = top ->next = NULL ;
			delete temp ; 
			
			
		}
	}
    
    
    
    // to find the element on top 
      void getTop(t&stackTop)
	{
		if(isEmpty())
		cout << " stack is empty no getTop " ;
		else 
		{
			stackTop = top->item;
		
			
			
		}
	}
	
	
	
	
	void display()
	{
		curr = top ;
		cout << "\n Item in stack : ";
		cout << "[";
		while(curr!=NULL)
		{
			cout << curr->item<< " ";
			curr = curr->next;
		}
		cout << "]\n";
	}    
    
	
	};




int main()

{
	stack<int>s ;
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	s.pop();
	
	int x = 0 ;
	s.getTop(x);
	cout<<x<<endl;
	s.display();
	
}
