
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1){
            return stones[0];
        }

        std::sort(stones.begin(), stones.end(), std::greater<int>());
        int add = stones[0] - stones[1];
        
        if(add == 0 && stones.size() == 2){
            return 0;
        }

        stones.erase(stones.begin() , stones.begin() + 2);
        if(add != 0){
        stones.push_back(add);
        }
        
        return lastStoneWeight(stones);
    }
};
