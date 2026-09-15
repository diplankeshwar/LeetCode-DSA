class Solution {
    public int countGoodSubstrings(String s) {
       
        int a = 0;
        int b = a + 2;
        int count = 0;

        while(b < s.length() ){
            if(s.charAt(a) != s.charAt(a + 1) && s.charAt(a) != s.charAt(a + 2) && s.charAt(a + 1) != s.charAt(a + 2) ){
                count++;
            }
            a++;
            b++;
        }
        return count ;

    }
}