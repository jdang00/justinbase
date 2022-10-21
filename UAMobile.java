import java.util.Scanner;

public class UAMobile {
    public static void main(String[] args) {

        System.out.println("Pacakge A: 450 min included / $0.45 per additonal min");
        System.out.println("Pacakge B: 900 min included / $0.40 per additonal min");
        System.out.println("Pacakge C: Unlimited minutes");

        String plan;
        int minutes;

        Scanner sJustinc = new Scanner(System.in);

        System.out.println("");
        System.out.println("");
        System.out.println("Enter plan");
        plan = sJustinc.nextLine();
        System.out.println("Enter minutes");
        minutes = sJustinc.nextInt();



        double totalCharge = 0;
        double base;

        if(plan.equals("A")){
            base = 39.99;

            if(minutes > 450){
                totalCharge = base + (0.45 * (minutes - 450));

            } else {
                totalCharge = base;
            }

            System.out.println("Current package: A");
            System.out.println("Current charge: " + totalCharge);
            System.out.println();
            double b;

            if(59.99 + (0.40 * (minutes - 900)) > totalCharge){
                b = 59.99 + (0.40 * (minutes - 900));
            } else{
                b = 59.99;
            }
            double c = 69.99;

            if(b < totalCharge){
                System.out.printf("Savings B: ");

                System.out.printf("%f\n",totalCharge - b);
            } else{
            }

            if(c < totalCharge){
                System.out.printf("Savings C: ");
                System.out.printf("%f\n",totalCharge - c);
            } else{
            }


        } else if(plan.equals("B")){
            base = 59.99;

            if(minutes >= 900){
                totalCharge = base + (0.40 * (minutes - 900));

            } else {
                totalCharge = base;
            }

            System.out.println("Current package: B");
            System.out.println("Current charge: " + totalCharge);
            System.out.println();

            double a;

            if(39.99 + (0.45 * (minutes - 450)) < totalCharge){
                a = 39.99 + (0.45 * (minutes - 450));
            } else{
                a = 39.99;
            }
            double c = 69.99;

            if(a < totalCharge){
                System.out.printf("Savings A: ");

                System.out.printf("%f\n",totalCharge - a);
            } else{
            }

            if(c < totalCharge){
                System.out.printf("Savings C: ");

                System.out.printf("%f\n",totalCharge - c);
            } else{
            }


        } else if(plan.equals("C")){
            base = 69.99;

            System.out.println("Current package: C");
            System.out.println("Current charge: " + base);
        } else{
            System.out.println("Not a valid plan.");
            System.exit(100);
        }

        




    }
}
