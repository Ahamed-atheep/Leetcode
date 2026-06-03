class Solution {
public:
    int bestClosingTime(string customers) {
        int closed=0;
        int open=0;
        int n=customers.size();
        for(int i=0;i<n;i++) 
        {
            if(customers[i]=='Y') open++;
        }
        int penalty=open+closed;
        int mini=penalty;
        int position=0;
        for(int i=0;i<n;i++)
        {
            
            if(customers[i]=='Y')
            {
                open--;
            }
            else
            {
                closed++;
            }
            penalty=open+closed;
            cout<<penalty<<" ";
            if(mini>penalty)
            {
                mini=penalty;
                position=i+1;
            }
            
        }
        return position;
    }
};