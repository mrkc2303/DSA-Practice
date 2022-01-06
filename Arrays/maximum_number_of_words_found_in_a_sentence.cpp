/*                    LEETCODE PROBLEM: 2114
              Maximum Number of Words Found in Sentences
                   
  https://leetcode.com/problems/move-zeroes/
  
  
  A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
  You are given an array of strings sentences, where each sentences[i] represents a single sentence.
  Return the maximum number of words that appear in a single sentence.
*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        for(int i=0; i<sentences.size(); i++) {
            int count=1;
            // for(int j=0; j<sentences[i].size(); j++) {
            //     if(sentences[i][j] == ' ')
            //         count++;
            // }
            count = std::count(sentences[i].begin(),sentences[i].end(),' ');
            count++;
            maxCount = max(maxCount, count);
        }
        

        return maxCount;
    }
};
