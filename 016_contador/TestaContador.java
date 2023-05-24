public class TestaContador{

    public static void main(String[] args){
        
        Contador c1 = new Contador("pontos", 5);
        
        for (int i = 0; i < 6; i++){
            c1.incrementa();
            System.out.println(c1.nome + " " + c1.contagem);
        }

    }

}