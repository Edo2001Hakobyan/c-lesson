#include <iostream>
// This function find the longest word.
int main()
{
      std::string mystr;
      std::cout<<"Enter a sentence:"<<std::endl;
      std::getline(std::cin,mystr);
      std::string longestWord = "";
      std::string currentWord = "";
      for(int  i=0;mystr.length()>i;i++) {
	      if (mystr[i] == ' ') {
		      if(currentWord.length() > longestWord.length()) {
			      longestWord = currentWord;
		      }
		      currentWord = "";
	      }
	      else {
		      currentWord += mystr[i];
	      }
           }
           // check last word      
	      if (currentWord.length() > longestWord.length()){
		      longestWord=currentWord;
	      }
	      std::cout<<longestWord<<std::endl;
	      
	      return 0;
      	     

}



	     
