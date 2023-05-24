public class TestaPessoa{

    public static void main(String[] args){
    
        Pessoa p = new Pessoa();
        p.nome = "João";
        p.idade = 20;
        System.out.println("Nome :" + p.nome);
        System.out.println("Idade :" + p.idade);
        p.faz_aniversario();
        System.out.println("Nome :" + p.nome);
        System.out.println("Idade :" + p.idade);
    
    }


}