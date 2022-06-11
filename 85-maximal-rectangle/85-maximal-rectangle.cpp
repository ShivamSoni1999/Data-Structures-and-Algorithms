// Intuit MakeMyTrip Microsoft Samsung Google Flipkart Amazon 

class Solution {
public:
 vector<int>LeftIndex(vector<int>& arr,int n) //function returns index of left smallest element
      {
           vector<int>left;
           stack<pair<int,int>>s;// mantain <Element,Index>
           int pseudoIndex=-1;
           for(int i=0;i<n;i++)
           {
               if(s.size()==0) left.push_back(pseudoIndex);
               else if(s.size()>0 && s.top().first<arr[i]) left.push_back(s.top().second); //always push index(second) to vector.
               else if(s.size()>0 && s.top().first>=arr[i])
               {
                      while(s.size()>0 && s.top().first>=arr[i]) {s.pop();}
                      if(s.size()==0) left.push_back(pseudoIndex); 
                      else left.push_back(s.top().second);//always push index(second) to vector.
               }
               s.push({arr[i],i});
        } 
           return left;
    }       
    vector<int>RightIndex(vector<int>& arr,int n) //function returns index of right smallest element
    {
        vector<int>right;
        stack<pair<int,int>>s1;
        int pseudoIndex2=n;
        for(int i=n-1;i>=0;i--)
        {
            if(s1.size()==0) right.push_back(pseudoIndex2);
            else if(s1.size()>0 && s1.top().first<arr[i]) right.push_back(s1.top().second);
            else if(s1.size()>0 && s1.top().first>=arr[i])
            {
                while(s1.size()>0 && s1.top().first>=arr[i]) {s1.pop();}
                if(s1.size()==0)right.push_back(pseudoIndex2); 
                else right.push_back(s1.top().second);      
            }
            s1.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    int largestRectangleArea(vector<int>& arr) 
    {
       ios::sync_with_stdio(0); cout.tie(0); cin.tie(0); 
       int n = arr.size(); 
       vector<int>left  =LeftIndex(arr,n);
       vector<int>right =RightIndex(arr,n);
       int area=0;
       int mx=INT_MIN;
       for(int i=0;i<n;i++)
       {
           int width=right[i]-left[i]-1; //calculating widhth 
           area=arr[i]*width;            //finding area for each
           mx=max(mx,area);
       }
       return mx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {  // Finally......our required Maximal Rectangle Function
        int n=matrix.size();
        if(n == 0){
            return 0;
        }
        int m=matrix[0].size();
        vector<int> v;
        for(int j=0;j<m;j++){
            v.push_back(matrix[0][j]-'0');
        }
        int mx= largestRectangleArea(v);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0')
                    v[j]=0;
                else
                    v[j]=v[j]+(matrix[i][j]-'0');
            }
            mx=max(mx,largestRectangleArea(v));
        }
        return mx;
    }
};