#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
	
	case 'a':
		printf("%c vowel",ch);
		break;
	case 'e':
	    printf("%c vowel",ch);
		break;
	case 'i':
	printf("%c vowel",ch);
	    break;
	case 'o':
	    printf("%c vowel",ch);
	    break;
	case 'u':
	    printf("%c vowel",ch);
		break;
	case 'A':
	    printf("%c vowel",ch);
		break;
	case 'E':
	    printf("%c vowel",ch);
		break;
	case 'I':
	     printf("%c vowel",ch);
	     break;
    case 'O':
	     printf("%c vowel",ch);
		 break;				
    case 'U':
    	 printf("%c vowel",ch);
	default:
	    printf("consonant");	
    }
}
