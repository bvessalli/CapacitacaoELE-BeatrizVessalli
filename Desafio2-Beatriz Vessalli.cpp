#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numA, numB,operacao, sair,resto;
    float resultado;

    while(sair != 0){
    cout << "\nEscolha uma das opções abaixo\n" << endl;
    cout << "\nOpções basicas\n" << endl;
    cout << "1. Somar" << endl;
    cout << "2. Subtrair" << endl;
    cout << "3. Mutiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "\nOpções Avançadas\n" << endl;
    cout << "5. Dar o resto de uma divisão" << endl;
    cout << "6. Raiz Quadrada " << endl;
    cout << "7. " << endl;
    cout << "8. " << endl;
    cout << "Digite sua opção: ";
    cin >> operacao;
    switch (operacao)
    {
        case 1:
            cout << "Opção selecionada: Somar"<<endl;
            cout << "\nDNesta operação o numero A sera somado ao numero B"<<endl;
            cout << "\nDigite um valor para o numero A"<<endl;
            cin >> numA;
            cout << "\n\nDigite um valor para o numero B"<<endl;
            cin >> numB;
            resultado=numA+numB;
            cout << "\nO resultado é: "<< resultado <<endl;
        break;
        case 2:
            cout << "Opção selecionada: Subtrair"<<endl;
            cout << "\nDNesta operação o numero B sera subitraido do numero A"<<endl;
            cout << "\nDigite um valor para o numero A"<<endl;
            cin >> numA;
            cout << "\n\nDigite um valor para o numero B"<<endl;
            cin >> numB;
            resultado=numA-numB;
            cout << "\nO resultado é: "<< resultado <<endl;
        break;
        case 3:
            cout << "Opção selecionada: Mutiplicar"<<endl;
             cout << "\nDNesta operação o numero A sera mutiplicado pelo numero B"<<endl;
            cout << "\nDigite um valor para o numero A"<<endl;
            cin >> numA;
            cout << "\n\nDigite um valor para o numero B"<<endl;
            cin >> numB;
            resultado=numA*numB;
            cout << "\nO resultado é: "<< resultado <<endl;
        break;
        case 4:
            cout << "Opção selecionada: Dividir"<<endl;
             cout << "\nDNesta operação o numero A sera dividido pelo numero B"<<endl;
            cout << "\nDigite um valor para o numero A"<<endl;
            cin >> numA;
            cout << "\n\nDigite um valor para o numero B"<<endl;
            cin >> numB;
            resultado=numA/numB;
            cout << "\nO resultado é: "<< resultado <<endl;
        break;
        case 5:
            cout << "Opção selecionada: Dar o resto da operação"<<endl;
            cout << "\nNesta operação o objetivo é dar o resto da divisão do numero A ao ser dividido pelo numero B"<<endl;
            cout << "\nDigite um valor para o numero A"<<endl;
            cin >> numA;
            cout << "\n\nDigite um valor para o numero B"<<endl;
            cin >> numB;
            resultado=numA%numB;
            cout << "\nO resultado é: "<< resultado <<endl;
        break;
        case 6:
            cout << "Opção selecionada: Raiz Quadrada"<<endl;
            cout << "Nesta operação o objetivo é apresentar a raiz quadrada do numero digitado"<<endl;
            cout << "\nDigite um valor para o numero"<<endl;
            cin >> numA;
            resultado=sqrt(numA);
            cout << "\nO resultado é: "<< resultado <<endl;
            break;
        default:
            cout << "Opção inválida"<<endl;
        break;# CapacitacaoELE-BeatrizVessalli
# CapacitacaoELE-BeatrizVessalli
