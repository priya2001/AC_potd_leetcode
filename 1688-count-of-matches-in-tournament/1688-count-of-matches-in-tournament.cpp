// //Approach-2 (Using simple math)
// //T.C : O(1)
// //S.C : O(1)
// class Solution {
// public:
//     int numberOfMatches(int n) {
//         return n-1;
//     }
// };


class Solution {
public:
    int numberOfMatches(int n) {
        
        int matches=0;
        while(n>1)
        {
            if(n%2==0)
            {
                matches+=n/2;
                n=n/2;
            }
            else
                
            {
                matches+=(n-1)/2;
                n=((n-1)/2)+1;
            }
        }
        return matches;
    }
};