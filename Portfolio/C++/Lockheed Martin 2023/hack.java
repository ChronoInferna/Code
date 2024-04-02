import java.util.Scanner;

// import javax.lang.model.util.ElementScanner14;

public class hack
{
    public static void main(String[] args)
    {
        Scanner kb = new Scanner(System.in);
        int a = kb.nextInt();
        for(int i = 0; i<a;i++)
        {
           int l = kb.nextInt();
           String d = kb.nextLine();
           for(int k = 0; k<(l-4);k++)
           {
          String itoken;
          String token;
            if((k+2)>l-1||(k+1)>l-1)
            {
                break;
            }
            if((k+3)>l-1)
            {  itoken = d.substring(k+2) + d.substring(k+1, k+2) + d.substring(k, k+1);
                 token = d.substring(k, k+1) + d.substring(k+1, k+2) + d.substring(k+2);
            }
           else 
           {  itoken = d.substring(k+2, k+3) + d.substring(k+1, k+2) + d.substring(k, k+1);
             token = d.substring(k, k+1) + d.substring(k+1, k+2) + d.substring(k+2, k+3);
        }
        
            if(d.contains(itoken))
            {
                if(k==0)
                {
                    int b = d.indexOf(itoken);
                    String tem = d.substring(4, b)+d.substring(b+3);
                    d=tem;
                    l = d.length();
                }

               else  
                {
                    int b = d.indexOf(itoken);
                    String tem = d.substring(, b)+d.substring(b+3);
                    d=tem;
                    l = d.length();
                }


            }
           }
           System.out.println(d);

        }
    }
}