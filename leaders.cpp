vector<int> leaders(int a[], int n){

        vector<int>ans; 
        if(n==1){
            ans.push_back(a[n-1]);
            return ans;
        }
        int max = -1;
        int i = n-1;
        while(i>=0){
            if(a[i]>=max){
                max = a[i];
                ans.push_back(max);
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
