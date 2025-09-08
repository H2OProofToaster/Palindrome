#include <iostream>
#include <cstring>

int main()
{
  //Holds allowed characters
  char allowedCharsUpper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
				'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  char allowedCharsLower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
			        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

  //Takes the input text
  char input[80];
  std::cin.get(input, 80);

  char formattedInput[80];
  int placedCounter = 0;
    
  //Removes everything not in allowedChars
  for(int i = 0; i <= 80; i++)
  {

    //Debug
    std::cout << "Validating" << input[i] << placedCounter << "\n";
    
    //Checks for termination
    if(input[i] == '\0')
    {
      formattedInput[placedCounter] = '\0';
      break;
    }

    //Uppercase, go to lower
    else if(strchr(allowedCharsUpper, input[i]) != nullptr)
    {
      formattedInput[placedCounter] = input[i] + 32;
      placedCounter++;
    }

    //Lowercase, continue
    else if(strchr(allowedCharsLower, input[i]) != nullptr)
    {
      formattedInput[placedCounter] = input[i];
      placedCounter++;
    }
  }

  //Debug
  std::cout << "Formatted input" << formattedInput;

  //Iterate from back to find terminator, then start there
  char reverse[80];
  for(int i = 81; i >= 0; i--)
  {
    if(formattedInput[i] == '\0')
    {
      for(int j = i - 1; j >= 0; j--)
      {
	reverse[i - j] = formattedInput[j];
      }
      reverse[i] = '\0';
      break;
    }
  }

  //Debug
  std::cout << "Reversed" << reverse;

  //Check if palindrome
  bool isPalindrome = false;
  if(strcmp(formattedInput, reverse) == 0)
  {
    isPalindrome = true;
  }

  //Print out
  if(isPalindrome == true) { std::cout << "Palindrome"; }
  else { std::cout << "Not a palindrome"; }
}
