import java.io.Console;

public class Pi {

public static void main(String[] args) {
        System.out.println("Add meg milyen pontossággal akarod megadni a Pi értékét?");
        String line = System.console().readLine();
        double x = Double.parseDouble(line);
        double y = 0.0;

        for(double i = 0; i <= x; i++)
        {
            y = y + (1.0/Math.pow(16.0,i))*((4.0/(8.0*i + 1.0))-(2.0/(8.0*i + 4.0)) - 
            (1.0/(8.0*i + 5.0)) - (1.0/(8.0*i + 6.0)));
        }
        System.out.println("Pontosság: " + y);
    }
}
