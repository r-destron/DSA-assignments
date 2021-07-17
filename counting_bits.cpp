class Solution {
public:
    vector<int> countBits(int n) {
        //Rohit Pokhriyal
         vector<int> arr(n+1);
         if(n <= 0) return arr;
        
        for(int i=0; i<arr.size(); i++) {
            if( ( 1 & i ) == 0)     arr[i] = arr[ i >> 1] ;
            else    arr[i] = 1 + arr[ i >> 1 ];
        }
        return arr;
    }
};