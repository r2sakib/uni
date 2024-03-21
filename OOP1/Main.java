class Main { 
    public static void main(String args[]) { 
        String s1 = "Hello";
        StringBuilder s3 = new StringBuilder(s1);
        String s2 = s3.reverse().toString();
        
        
        System.out.println(s2);
    } 
}