#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "Seleccione una opcion:\n";
    cout << "1. Determinar si un numero es mayor de edad.\n";
    cout << "2. Determinar cual es el mayor de dos numeros.\n";
    cout << "3. Determinar si un numero es par o impar.\n";
    cout << "4. Calcular el factorial de un numero.\n";
    cout << "5. Mostrar los numeros impares desde 1 hasta un numero con while.\n";
    cout << "6. Mostrar los numeros impares desde 1 hasta un numero con For.\n";
    cout << "7. Mostrar el nombre del dia de la semana correspondiente a un numero.\n";
    cin >> opcion;
    switch (opcion){
        case 1: {
            int edad;
            cout << "Ingrese su edad: ";
            cin >> edad;
            if (edad >= 18) {
                cout << "Es mayor de edad." << endl;
            } else {
                cout << "No es mayor de edad." << endl;
            }
            break;
        }
        case 2: {
            int num1, num2;
            cout << "Ingrese dos numeros: ";
            cin >> num1 >> num2;
            if (num1 > num2) {
                cout << num1 << " es el mayor." << endl;
            } else if (num2 > num1) {
                cout << num2 << " es el mayor." << endl;
            } else {
                cout << "Los numeros son iguales." << endl;
            }
            break;
        }
        case 3: {
            int num;
            cout << "Ingrese un numero entero: ";
            cin >> num;
            if (num % 2 == 0) {
                cout << "Es un numero par." << endl;
            } else {
                cout << "Es un numero impar." << endl;
            }
            break;
        }
        case 4: {
            int num, factorial = 1;
            cout << "Ingrese un numero entero positivo: ";
            cin >> num;
            if (num < 0) {
                cout << "No se puede calcular el factorial de un numero negativo." << endl;
            } else {
                int i = 1;
                while (i <= num) {
                    factorial *= i;
                    i++;
                }
                cout << "El factorial de " << num << " es " << factorial << "." << endl;
            }
            break;
        }
            case 5: {
                int num;
                cout << "Ingrese un numero mayor a 10 y menor que 30: ";
                cin >> num;
                if (num > 10 && num < 30) {
                    cout << "Los numeros impares del 1 hasta el " << num << " son: ";
                    int i = 1;
                    while (i <= num) {
                        cout << i << " ";
                        i += 2;
                    }
                    cout << endl;
                } else {
                    cout << "El numero ingresado no esta dentro del rango especificado." << endl;
                }
                break;
            }
            case 6: {
                int num;
                cout << "ingresar un numero mayor a 10 y menor que 30: ";
                cin >> num;
                if (num > 10 && num < 30) {
                    cout << "Los numeros impares del 1 hasta" << num << " son: ";
                    for (int i = 1; i <= num; i += 2) {
                        cout << i << " ";
                    }
                    cout << endl;
                } else {
                    cout << "El numero ingresado no esta dentro del rango que se especifica" << endl;
                }
            }
            break;
                case 7: {
                    int dia;
                    cout << "Ingresar un numero del 1 al 5: ";
                    cin >> dia;
                    switch (dia) {
                        case 1:
                            cout << "Lunes" << endl;
                            break;
                        case 2:
                            cout << "Martes" << endl;
                            break;
                        case 3:
                            cout << "Miércoles" << endl;
                            break;
                        case 4:
                            cout << "Jueves" << endl;
                            break;
                        case 5:
                            cout << "Viernes" << endl;
                            break;
                        default:
                            cout << "El numero ingresado no es valido." << endl;
                            break;
                    }
                    break;
                }
                default: {
                    cout << "La opcion seleccionada no es valida." << endl;
                    break;
                }
            }
            return 0;
        }