#include <iostream>
#include <cstring>

int main()
{
  //Holds allowed characters
  char allowedChars[52] = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
			   'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			   'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
			   'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'] 

  //Takes the input text
  char input[80];
  cin >> input;

  char formattedInput[80];
  //Removes everything not in allowedChars
  for(i = 0, i <= 80; i++)
  {
    
  }

  char reverse[81];
  for(i = 81; i >= 0; i--)
  {
    if(input[i] == '\0')
    {
      for(j = i; i >= 0; i--)
      {
	if(strchr(allowedChars, input[i] != nullptr))
	{
	  reverse[81-i] = input[i]
	}
      }
	
  }
  
}
      
