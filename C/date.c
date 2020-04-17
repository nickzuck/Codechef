#include<stdio.h>   // header files 

int main ()
{
	int t, month , nod , date , year ;   // variable declaration 
	scanf ("%d",&t) ; 
	while  (t--)
	{
		scanf ("%d/%d/%d",&date,&month , &year) ; 
		switch (month)
		{
			case 1 :
			case 3: 
			case 5 : 
			case 7 : 
			case 8 : 
			case 10 :  
			case 12 :	  if (date > 31 )
				{
					printf ("Invalid Date\n") ; 
					break;
				}
				else if (date == 31 )
				{
					if (month == 12  )
					{
						date = 1 ; 
						month = 1 ; 
						year ++ ; 
					}
					else 
					{
						date = 1 ; 
						month ++ ; 		
					}
				}

				else
					date ++ ; 

				printf ("%d/%d/%d\n",date, month , year) ; 
				break ; 
		

			case 4 : 
			case 6 : 
			case 9 : 
			case 11 : 
				if (date > 30)
				{
					printf ("Invalid Date\n") ; 
					break ; 
				}
				else if (date == 30 )
				{
					date = 1 ; 
					month ++ ; 		
				}

				else
					date ++ ; 

				printf ("%d/%d/%d\n",date, month , year) ; 
				break ; 

			case 2 : 
				if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
					nod = 28 ; 
				else 
					nod = 27 ; 		
				if (date > nod )
				{
					printf ("Invalid Date\n") ; 
					break ; 
				}
				else if (date == nod   )
				{
					date = 1 ; 
					month ++ ; 		
				}

				else
					date ++ ; 
				printf ("%d/%d/%d\n",date, month , year) ; 
				break ; 				

			default  : printf ("Invalid Date\n")  ;  
				
							
				
		}// switch case ends 
	} // while ends 

return 0 ; 
}