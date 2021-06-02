public class Solution {
    public boolean trav(String s1, String s2, String s3, int i, int j, int k, int[][] mem) {
        if(i == s1.length()) return s2.substring(j).equals(s3.substring(k));
        if(j == s2.length()) return s1.substring(i).equals(s3.substring(k));
        if(mem[i][j] >= 0) {
            if(mem[i][j] == 1) return true;
            else return false;
        } boolean ans = false;
        if(s3.charAt(k) == s1.charAt(i) && trav(s1, s2, s3, i+1, j, k+1, mem)) ans = true;
        else if(s3.charAt(k) == s2.charAt(j) && trav(s1, s2, s3, i, j+1, k+1, mem)) ans = true;
        if(ans) mem[i][j] = 1; else mem[i][j] = 0;
        return ans;
    }
    public boolean isInterleave(String s1, String s2, String s3) {
        if (s1.length() + s2.length() != s3.length()) return false;
        int memo[][] = new int[s1.length()][s2.length()];
        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                memo[i][j] = -1;
            }
        } return trav(s1, s2, s3, 0, 0, 0, memo);
    }
}
