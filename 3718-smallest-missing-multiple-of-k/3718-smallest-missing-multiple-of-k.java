import java.util.HashSet;
import java.util.Set;
class Solution {
    public int missingMultiple(int[] nums, int k) {
        HashSet<Integer> set1 = new HashSet<Integer>();


        for(int x : nums){
            set1.add(x);

        }
        int i = 1;
        int multi = k;
        while(set1.contains(multi)){
            i++ ;
            multi = k * i ;
        }
        return multi;

    }
}