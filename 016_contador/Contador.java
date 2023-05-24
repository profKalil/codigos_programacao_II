public class Contador{
    String nome;
    int contagem;
    int maximo; 
    
    Contador(String nome, int maximo){
        this.nome = nome;
        contagem = 0;
        this.maximo = maximo;
    }
    void incrementa(){
        if (contagem == maximo){
            reset();
        }
        contagem++;
    }
    void reset(){
        contagem = 0;
    }
    
 
}