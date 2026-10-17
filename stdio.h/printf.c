#include <stdio.h>

int main(){
    /*
     * La funcion printf() que se encuentra dentro de stdio.h
     * es una funcion con la cual te permite imprimir en pantalla
     * texto, variables, caracteres en si lo que quieras
     * a continuacion te demuestro como imprimir un hola
     */

    printf("hola");

    /* Tambien si quieres puedes imrpimir un arreglo de caracteres
     * pero tienes que tener en cuenta que para imprimir variables
     * tienes que saber los placeholder te dejo una imagen con todos
     * los que hay en la carpeta utils y la imagen se llama placeholders.jpg
     */
    char *array = "mi array";
    printf("%s", array);

    /*
     * Basandonos en la imagen podemos hacer muchas cosas
     * y una cosa si buscas poner un salto de linea tienes que usar \n
     */
    printf("\n");

    // Definire una variable entera de valor 5
    int num = 5;

    // ahora para imprimir esa variable solo hago lo siguiente
    printf("%d", num);

    // ya sabiendo testo ahora puedes testear con todos los placeholders que estan en la imagen
    return 0;
}
