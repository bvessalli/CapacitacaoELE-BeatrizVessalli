#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numA, numB,operacao, sair,resto;
    float resultado;

    while(sair != 0){
    cout << "Escolha uma das opções abaixo" << endl;
    cout << "Opções basicas:" << endl;
    cout << "1. Somar" << endl;
    cout << "2. Subtrair" << endl;
    cout << "3. Mutiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Opções Avançadas:" << endl;
    cout << "5. Dar o resto de uma divisão" << endl;
    cout << "6. Raiz Quadrada " << endl;
    cout << "7. X elevado a Y" << endl;
    cout << "8. Fatorial " << endl;
    cout << "Digite qual operação deseja executar: ";
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
        case 7:
            cout << "Opção selecionada: X elevado a Y "<<endl;
            cout << "\nNesta operação o objetivo é Calcular o numero A elevado ao numero B"<<endl;
            cout << "\nDigite um valor para o numero A"<<endl;
            cin >> numA;
            cout << "\n\nDigite um valor para o numero B"<<endl;
            cin >> numB;
            
            if (numB==0)
            {
                resultado=1;
                cout << "\nO resultado é: "<< resultado <<endl;
            }
            else if (numB<0)
            {
                resultado=numB/numA;
                cout << "\nO resultado é: "<< resultado <<endl;
            }
            else if (numB==1)
            {
                resultado=numA;
                cout << "\nO resultado é: "<< resultado <<endl;
            }
            else if (numB>1)
            {
                resultado=numA;
                numB=numB-1;
                for(int i =0;i<numB;i++){
                resultado=resultado*numA;
            }
            cout << "\nO resultado é: "<< resultado <<endl;
            }
        break;
        
        default:
            cout << "Opção inválida"<<endl;
        break;
            }
    cout << "\n\nDigite 0 para sair do programa ou qualquer outro digito para continuar"<<endl;
            cin >> sair;
    }   
}