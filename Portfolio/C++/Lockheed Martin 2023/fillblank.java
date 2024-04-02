import java.util.Scanner;

// import javax.lang.model.util.ElementScanner14;

public class fillblank {
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);
        int a = kb.nextInt();
        // int temp = kb.nextInt();
        for (int i = 0; i < a; i++) {
            int data = kb.nextInt();
            int temp = kb.nextInt();
            String[] blank = new String[data];
            String[] fill = new String[temp];
            String[] end = new String[temp];
            for(int k=0; k<data; k++)
            {
                String read = kb.nextLine();
              //  System.out.print(read.indexOf(": "));
                int colon = read.indexOf(":");
                blank[k] ="["+ read.substring(0,read.indexOf(": "))+"]";
                fill[k] = read.substring(read.indexOf(":"));
                
            }
            for(int z=0; z<temp;z++)
            {
                String read = kb.nextLine();
                for(int y =0; y<data; y++)
                {
                    if(read.contains(blank[y]))
                    {
                        end[z]=read.substring(0,read.indexOf(blank[y]))+fill[y]+" "+read.substring(read.indexOf("]"));
                        y=data;
                    }
                    else
                    {
                        end[z]=read;
                    }
                }
                for(int r=0; r<temp; r++)
                {
                    System.out.println(end[r]);
                }
            }
            
        }
    }
}