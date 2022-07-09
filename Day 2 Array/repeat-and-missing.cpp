vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int size = A.size()+1;
    
    vector<int> subs(size,0);
    vector<int> ans;
    for(int i =0; i<A.size();i++)
    {
        subs[A[i]]++;
    }
    for(int i = 1 ; i<=A.size();i++)
    {
        if(subs[i] == 0 or subs[i]>1)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
// Optimal approach after Bit manipulation