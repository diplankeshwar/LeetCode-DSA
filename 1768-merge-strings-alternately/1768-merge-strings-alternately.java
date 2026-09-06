class Solution {
    public String mergeAlternately(String word1, String word2) {
        int n = word1.length();
        int m = word2.length();
        StringBuilder merge = new StringBuilder();

        int i = 0;
        int j = 0;

        while (i < n && j < m) {
            merge.append(word1.charAt(i));
            merge.append(word2.charAt(j));

            i++;
            j++;
        }

        while (i < n) {
            merge.append(word1.charAt(i));
            i++;
        }

        while (j < m) {
            merge.append(word2.charAt(j));
            j++;
        }

        return merge.toString();
    }
}