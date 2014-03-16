#include <stdio.h> 
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main(int argc, string argv[])

{

// validating key

    if (argc != 2)
    {
    		printf("Please type ./vigenere and a space and another key word.'\n");
    		exit (EXIT_FAILURE);
    }
                  
    string key = argv[1];
    printf("%s\n", key);
   
   if (isdigit(argv[1][0]));
   {
   }   
   
   printf("Give me a phrase to cipher:\n");
   string phrase = GetString();
   printf("Phrase given: %s\n", phrase);
   int c = 0;
   int j = 0;
   int k = atoi(argv[j]);
   
// changing plain text by key    
    for (int i = 0; i < strlen(phrase); i++)
        for (int j = 0; int g = argv[i]
        {
		if (isalpha(phrase[i])) 
        	{
			c = (phrase[i] + j);
			printf("Letter of the phrase: %c and key %i.\n", phrase[i], j);
				if (islower(phrase[i]))
                {
         	        if (c > 'z')
			        	c = c - 26;
         	    }
         	    if (isupper(phrase[i]))
                {
					if (c > 'Z')
				   		c = c - 26;
         	    }
							
			printf("%c", (char)c);                       
 			}
					else
					{
									printf("%c", phrase[i]);
					}
 
        }
				printf("\n");
}
