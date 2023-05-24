public class TestaQuadrado{

    public static void main(String[] args){
        Quadrado q1 = new Quadrado(2);
        Quadrado q2 = new Quadrado((float)3.5);
        
        float areaq1 = q1.calculaArea();
        float areaq2 = q2.calculaArea();
        
        System.out.println("Área q1 = " + areaq1);
        System.out.println("Área q2 = " + areaq2);

    }


}

