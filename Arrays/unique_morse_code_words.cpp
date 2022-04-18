/*                   LEETCODE PROBLEM: 804
                    Unique Morse Code Words
                   
  https://leetcode.com/problems/unique-morse-code-words/
  
  
  International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:

	'a' maps to ".-",
	'b' maps to "-...",
	'c' maps to "-.-.", and so on.
	For convenience, the full table for the 26 letters of the English alphabet is given below:

	[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
	Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.

	For example, "cab" can be written as "-.-..--...", which is the concatenation of "-.-.", ".-", and "-...". We will call such a concatenation the transformation of a word.
	Return the number of different transformations among all words we have.


*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> b;
        if(words.size() == 1)
            return 1;
        
        for(int i=0; i<words.size(); i++) {
            string temp1 = words[i], temp2="";
            bool check = true;
            for(int j=0; j<words[i].length(); j++) {
                temp2 += (arr[temp1[j] - 'a']);
            }
            if(b.size() == 0)
                b.push_back(temp2);
            for(int j=0; j<b.size(); j++) {
                if(temp2 == b[j])
                    check = false;
            }
            
            if(check)
                b.push_back(temp2);
        }
        
        return b.size();
    }
};