#include<stdio.h>
#include<string.h>
#include<ctype.h>

char stack [40];
int top = 0;
int prec_oper(char );
void push(char) ;
int pop();

int main ()
{
	int p,b, t,i,k,len;
	char inf[400],post[400];
	
	scanf ("%d",&t);
	for (i=0 ; i<t ; i++)
	{
		gets(inf);
		len = strlen(inf);
		
		p=b=0 ;
		
		push('(');
		inf[len] = ')';
		
		for(k=0; k<len;k++)
		{
			inf [k] = inf [k];

			if(isalpha(inf [k]))
			post[p++] = inf [k] ;

			else if (inf [k]== '(')
			{
			push (inf [k]);
			
			}
			else if (inf[k] == '+' || inf [k] == '-' || inf [k] = '/'||inf[k] == '*')
			{
				if(prec_oper(inf [k])>prec_oper(stack[top]) && prec_oper(stack[top])!=0)
   				{
    				  post[p++]=pop();
  				  push(inf [k]);
 				}
				
				else 
				push (inf [k]);
			}
			
			else if (inf [k] ==  ')')
			{
				for(b= top ; stack[b]!='('; b++ )
				{
				post [++p ] = pop ();
				pop();
				}
			}
		}		
		for(k=0;k<p;i++)
		{
			printf("%c",post[i]);
			printf("\n");
		}
	
	}
return 0 ;
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
 