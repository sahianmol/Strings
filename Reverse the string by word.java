public class Solution {
    public String reverseWords(String a) {
        String[] temp=a.split(" ");
        String str="";
        for(int i=temp.length-1;i>=0;i--)
        {
            str=str+" "+temp[i];
        }
        return str.trim();
    }
}
