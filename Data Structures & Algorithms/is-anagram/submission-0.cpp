class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        int s1= s.length();
        int t1= t.length();;

        if (s1!=t1)
        return false;

        int count1 = 0 ;  int count2 = 0;
        
        for(int i=0;i<s1;i++)
        {
            count1=0;
            count2=0;
            for(int j=0;j<s1;j++)
            {
               if(s[i]==s[j])
               count1++;

               if(s[i]==t[j])
               count2++;
            }

            if(count1!=count2)
            return false;
        }

        return true;
    }
};
