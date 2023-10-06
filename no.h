//Nossa própria biblioteca

//tem dois atributos: informação inteiro e proximo ponteiro
struct no {
    //precisa da tag para fazer a recursão
    int info;
    struct no * proximo;  //proximo é um ponteiro de struct no. Aponta para outra caixinha (nó/elemento).
};

//nomear protótipos de função

//aloca nó na memória, recebe inteiro, liga o nó em outra caixinha.
struct no * aloca_no (int);