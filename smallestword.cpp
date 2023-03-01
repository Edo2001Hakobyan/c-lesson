#include <iostream>
// This function find the smallest word.
int main()
{
      std::string mystr;
      std::cout<<"Enter a sentence:"<<std::endl;
      std::getline(std::cin,mystr);
      std::string smallestWord = "";
      std::string currentWord = "";
      bool firstWord = true;
      for(int i=0;mystr.length()>i;i++) {
	      if (mystr[i] == ' ') {
		      if(firstWord){
			      smallestWord=currentWord;
				firstWord=false;
		      }	
		      else  if(currentWord.length() < smallestWord.length()) {
			      smallestWord = currentWord;
		      }
		      currentWord = "";
	      }
	      else {
		      currentWord += mystr[i];
	      }
           }
           // check last word      
	      if (currentWord.length() < smallestWord.length()){
		      smallestWord=currentWord;
	      }
	      std::cout<<"The smallest word is "<<smallestWord<<std::endl;
	      
	      return 0;
      	     

}



	     
