/* TOC Lab : Implement a PDA for L = { set of all strings over {0,1} such that  0^n1^n, acceptance by final state */

#include<stdio.h>
#include<string.h>
#define MAX 100

enum states { q0, q1,q2,qf,qr};
void push(char ch);
void pop();
char get_stack_top();
enum states delta(enum states, char, char);

struct stack
{
	char symbols[MAX];
	int top;
};

struct stack s;

int main()
{
	printf("Kiran Joshi Sukubhattu.\n");
	printf("Roll no. 47\n\n");
	char input[20];
	enum states curr_state = q0;
	s.top = -1;
	int i =0;
	char ch = 'e'; 
	char st_top = 'e';
	curr_state = delta(curr_state,ch,st_top);
	
	printf("\n Enter a binary string: ");
	gets(input);
	
	ch = input[i];
	st_top = get_stack_top();
	int c=0;
	
	while( c <=strlen(input))
	{
		curr_state = delta(curr_state,ch,st_top);
		ch = input[++i];
		st_top=get_stack_top();
		c++;
      }
	if(curr_state==qf)
	   printf("\n The string %s is accepted.",input);
	else 
	    printf("\n The string %s is not accepted.",input);	    
		
   return 0;			
}

enum states delta(enum states s, char ch, char st_top)
{
	   enum states curr_state = qr;
		switch(s)
		{
			case q0:
				if(ch=='e' && st_top=='e')
				{
					curr_state = q1;
					push('$');
				}
				break;
			case q1:
				if(ch=='0' && (st_top=='$' ||st_top=='0'))
				{
					curr_state = q1;
					push(ch);
				}
				else if(ch=='1' && st_top=='0')
				{
					curr_state = q2;
					pop();
				}
				else
				curr_state = qr;  // qr for undefined transition
			     break;
			case q2:
				if(ch=='1' && st_top=='0')
				{
					curr_state = q2;
					pop();
				}
				else if(ch=='\0' and st_top=='$')
				{
					curr_state = qf;
					pop();
				}
				else 
				 curr_state = qr;
			
				 
			     break;
		}
	return curr_state;
}


char get_stack_top()
{
	return (s.symbols[s.top]);
}

void push(char ch)
{
	if(s.top<MAX-1 )
	  {
	  	s.symbols[++s.top] = ch;
	  }
	else
	{
		printf("\n Stack Full.");
	}
}

void pop()
{
	if(s.top>-1)
	{
		s.symbols[s.top]=' ';
		s.top--;
	}
	else
	printf("\n Stack Empty.");
}

