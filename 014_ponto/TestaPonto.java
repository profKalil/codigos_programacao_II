/*Programação em Computadores
Orientação a Objetos
Cristian Cechinel */

public class TestaPonto{

    public static void main(String[] args){
        Ponto p1 = new Ponto(); 
        System.out.println("x "+ p1.x);
        System.out.println("y "+ p1.y);
        p1.move(2, 5);
        System.out.println("x "+ p1.x);
        System.out.println("y "+ p1.y);
        
    }
    

}