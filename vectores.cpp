#include <iostream>

using namespace std;

void mostrar(int vector[3]){
    for(int i = 0; i<3 ; i++){
        cout<<" "<<vector[i]<<" ";
    }
    cout<<""<<endl;
}

void sumar(int vectorC[3], int vectorAxB[3]){
    int sumatoria=0;
    int i;
    for(i=0;i<3;i++){
        sumatoria=sumatoria+vectorC[i]*vectorAxB[i];
    }
    cout<< sumatoria<<endl;

}

void escalar(int vectorC[3],int vectorAxB[3]){
    int suma = 0, i;
    int vectorAxBxC[3];
    for(i = 0; i<3 ; i++){
        vectorAxBxC[i]=vectorC[i]*vectorAxB[i];
    }
    cout<<"REALIZANDO OPERACIONES: ";
    mostrar(vectorAxBxC);
    cout<<"CALCULANDO LA SUMA: "; 
    sumar(vectorC,vectorAxB);
}


int main() {

    int puntoP[3] = {5,4,5};
    int puntoQ[3] = {4,10,6};
    int puntoR[3] = {1,8,7};
    int puntoS[3] = {2,6,9};
 
    cout<<"-------- PUNTOS P --------"<<endl;
    mostrar(puntoP);
    cout<<"-------- PUNTOS Q --------"<<endl;
    mostrar(puntoQ);
    cout<<"-------- PUNTOS R --------"<<endl;
    mostrar(puntoR);
    cout<<"-------- PUNTOS S --------"<<endl;
    mostrar(puntoS);
    cout<<"-----------------------------------------------"<<endl;

    int vectorA[3] = {puntoQ[0]-puntoP[0], puntoQ[1]-puntoP[1], puntoQ[2]-puntoP[2]};
    int vectorB[3] = {puntoR[0]-puntoP[0], puntoR[1]-puntoP[1], puntoR[2]-puntoP[2]};
    int vectorC[3] = {puntoS[0]-puntoP[0], puntoS[1]-puntoP[1], puntoS[2]-puntoP[2]};

    cout<<"-------- VECTOR A --------"<<endl;
    mostrar(vectorA);
    cout<<"-------- VECTOR B --------"<<endl;
    mostrar(vectorB);
    cout<<"-------- VECTOR C --------"<<endl;
    mostrar(vectorC);

    //Producto cruz
    cout<<"-------- PRODUCTO CRUZ DE AxB--------"<<endl;
    cout<<"(6 x 2)-(1 x 4) = ";
    int productoUno =(vectorA[1]*vectorB[2])-(vectorA[2]*vectorB[1]);
    cout<<productoUno<<endl;

    int productoDos = ((vectorA[0])*vectorB[2])-(vectorA[2]*(vectorB[0]));
    cout<<"((-1) x 2)-(1 x (-4)) = -";
    cout<<productoDos<<endl;

    int productoTres = (vectorA[0]*vectorB[1]) - (vectorA[1]*vectorB[0]);
    cout<<"((-1) x 4)-(6 x (-4)) = ";
    cout<<productoTres<<endl;

    //+i-j+k
    //Guardo en otro vector el resultado
    int vectorAxB[3] = {productoUno, (-1)*productoDos, productoTres};

    //Producto punto
    cout<<"-------- PRODUCTO PUNTO (AxB).C--------"<<endl;
    cout<<"8 x (-3) + (-2) x 2 + 20 x 2 "<<endl;    
    escalar(vectorC,vectorAxB);   

    return 0;

}
