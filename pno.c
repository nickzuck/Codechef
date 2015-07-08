#include<stdio.h>
#include<ctype.h>

int main ()
{
	char  exp[401] ,ch;
	short unsigned int test ; 
	
	scanf ("%u",&test);
	
	for (i=0 ; i<test ; i ++)
	{
		scanf ("%c",&exp[i]);
		while (exp[i] != '\n')
		{
			if (!isalpha(exp[i]))
				printf ("%d",ch);
			else
				{
					while(Priority(ch) <= Priority(Top Most Stack))
					{
            						element = Pop(S);
            						Print(ele);
         					  }

				}

		}
	}	

}
int prec_oper(char oper)
{
switch(oper)
 {
 case '^' :  return 1;
 case '/' :  return 2;
 case '*' :  return 3;
 case '+' :  return 4;
 case '-' :  return 5;
 default: return 0;
 }
}
 
void push(char item)
{
top++;
stack[top]=item;
return;
}
 
int pop()
{
top=top-1;
return stack[top+1];
}
 