#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    int F, C,op;
    cout<<"Filas:";
    cin >> F;
    cout<<"Columnas:";
    cin>> C;
    int matriz[F][C];
    do{
        cout<<"MENU"<<endl<<"-------"<<endl<<"1. Generar Matriz Aleatoria"<<endl<<"2. Mostrar solo Pares"<<endl<<"3. Mostrar solo Impares"<<endl<<"4. Salir"<<endl<<"Ingrese opción: ";
        cin>>op;
        if (op==1) {
            for (int i = 0; i < F; i++) {
                for (int j = 0; j < C; j++) {
                    matriz[i][j] = rand() % 99;
                    cout << matriz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (op==2) {
            for (int i = 0; i < F; i++) {
                for (int j = 0; j < C; j++) {
                    if ((matriz[i][j]) % 2 == 0)
                        cout << matriz[i][j] << " ";
                    else cout << 0<< " ";
                }
                cout << endl;
            }
        }
        else if (op==3) {
            for (int i = 0; i < F; i++) {
                for (int j = 0; j < C; j++) {
                    if ((matriz[i][j]) % 2 != 0)
                        cout << matriz[i][j] << " ";
                    else cout << 0<< " ";
                }
                cout << endl;
            }
        }
        }while(op!=4);
    return 0;
}