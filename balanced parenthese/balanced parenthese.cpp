
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool arePair(char open , char close)
{
	if (open == '(' && close == ')')
	return true ;
	else if (open == '{' && close == '}')
	return true ;
	else if (open == '[' && close == ']')
	return true ;
	return false ;
}


bool areBalanced(string exp)

{
	stack<char>s;
	for (size_t i = 0 ; i < exp.length(); i++ )
	{
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
		s.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{                                  //{4+2}
			if (s.empty() || !arePair(s.top() , exp[i]))  //{ = top and compare with exp[i]
			return false ;
			else 
		  {s.pop();}
	    }
	}
	// if stack has on exp  
	return s.empty()?true:false ; 
}

int main()

{
	string expression;
	cout << " enter an expression : ";
	cin >> expression;
	if (areBalanced(expression))
	cout << " balanced \n " ;
	else 
	cout << " not balanced  \n ";
	
	
	
}
