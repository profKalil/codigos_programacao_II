/*Programação em Computadores
Orientação a Objetos
Cristian Cechinel */

public class Ponto{
    float x, y;
    
    Ponto(){
        this.x = 0;
        this.y = 0;
    }
  
    Ponto(float x, float y){
        this.x = x;
        this.y = y;
    }
    
    void move(float dx, float dy){
        this.x = this.x + dx;
        this.y = this.y + dy;
    }

}