https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1/?page=1&status[]=solved&category[]=Stack&category[]=Queue&sortBy=submissions#

		string FirstNonRepeating(string A){

        string ans = "";
        queue<char> q;
        int freq[26] = {0};
        
        for(int i=0; i<A.size(); i++)
        {
            q.push(A[i]);
            freq[A[i]-'a']++;
            
            while(!q.empty())
            {
                if(freq[q.front()-'a'] > 1)
                {
                    q.pop();
                }
                else
                {
                    break;
                }
            }
            if(q.empty())
            {
                ans += '#';
            }
            else
            {
                ans += q.front();
            }
            
        }
        
        return ans;

	}