class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = healths.size();

        vector<int> ActIdx;

        for(int i=0; i<n; i++){
            ActIdx.push_back(i);
        }

        sort(begin(ActIdx),end(ActIdx) , [&] (int &i,int &j){
            return positions[i] < positions[j];
        } );

        vector<int> result;
        stack<int> st;

        for(int CurrIdx : ActIdx){
            if(directions[CurrIdx] == 'R'){
                st.push(CurrIdx);
            }else{
                while(!st.empty() && healths[CurrIdx] > 0){
                    int topIdx = st.top();
                    st.pop();
                    if(healths[CurrIdx] < healths[topIdx]){
                        healths[CurrIdx] = 0;
                        healths[topIdx]--;
                        st.push(topIdx);
                    }else if(healths[CurrIdx] > healths[topIdx]){
                        healths[topIdx] = 0;
                        healths[CurrIdx]--;
                    }else{
                        healths[topIdx] = 0;
                        healths[CurrIdx] = 0;
                    }
                }     
                
            }


        }
        for(int i=0; i<n; i++){
            if(healths[i] > 0){
                result.push_back(healths[i]);
            }
        }
        return result;

    }
};