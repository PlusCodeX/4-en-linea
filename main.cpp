    #include <iostream>
    #include <stdlib.h>

    using namespace std;

    int main()
    {
    int auxiliar,cont,c;
    char r='.',x,o,tablero[6][7];
    // Seleccionado de caracteres
    do
    {
    cout<<"Jugador 1, ingrese caracter con el que va a jugar: ";
    cin>>x;
    cout<<"Jugador 2, ingrese caracter con el que va a jugar: ";
    cin>>o;
    cout<<endl;
    }while(x==o);
    // Llenado inicial del tablero
    for(int f=0;f<6;f++)
        {
            for(int c=0;c<7;c++)
            {
                tablero[f][c]=r;
            }
        }
    //Cantidad maxima de turnos que se pueden jugar
        for(int a=0;a<21;a++)
        {
    // Ciclo para aceptar solo valores permitidos
        do
         {
    // Jugada del jugador 1
         cout<<"Donde va a colocar su ficha jugador 1: ";
         cin>>c;
         cout<<endl;
         }while(c<1||c>7);
         cout<<endl;
    // Ciclo cuando columna este llena
     while(tablero[0][c-1]!=r)
    {
        do
        {
        cout<<"Columna llena o numero invalido"<<endl<<"Vuelva a colocar la ficha: ";
        cin>>c;
        cout<<endl;
        }while(c<1||c>7);
    }
    cout<<endl;
    // Colocacion de la ficha jugador 1
    tablero[0][c-1]=x;
    // Codigo para bajar ficha jugador 1
     for(int f=0;f<5;f++)
        {
        if(tablero[f+1][c-1]==r)
        {
        auxiliar= tablero[f][c-1];
        tablero[f][c-1]=tablero[f+1][c-1];
        tablero[f+1][c-1]=auxiliar;
        }
    }
    //Llenado del tablero cuando jugador 1 coloca la ficha
    for(int f=0;f<6;f++)
        {
            for(int c=0;c<7;c++)
            {
                cout<<tablero[f][c]<<"   ";
            }
            cout<<endl;
            cout<<endl;
        }
    // Ganador jugador 1 vertical
    for(int f=0;f<6;f++)
    {
        if(tablero[f][c-1]==x)
        {
            cont++;
        }else
        {
            cont=0;
        }
        if(cont==4)
        {
            cout<<"Ganaste jugador 1"<<endl;
            cout<<endl;
            system("pause");
            return 0;

        }
    }
    cont=0;
    //Ganador jugador 1 horizontal
    for(int i=0;i<6;i++)
    {
      for(int j=0;j<7;j++)
    {
        if(tablero[i][j]==x)
        {
            cont++;
        }else
        {
            cont=0;
        }
        if(cont==4)
        {
            cout<<"Ganaste jugador 1"<<endl;
            cout<<endl;
            system("pause");
            return 0;
        }
    }
    }
    cont=0;
    // Ganador jugador 1 Diagonal a la derecha
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<7;j++)
        {

                while(tablero[i][j]==x&&i<6&&j<7)
                {
                    cont++;
                    i++;
                    j++;

                if(cont==4)
                {
                    cout<<"Ganaste jugador 1"<<endl;
                    cout<<endl;
                    system("pause");
                    return 0;
                }
                }
                cont=0;
        }
    }
    //Ganador jugador 1 diagonal a la izquierda
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<7;j++)
        {

                while(tablero[i][j]==x&&i<6&&j<7)//||tablero[i++][j--]==x)
                {
                    cont++;
                    i++;
                    j--;
                if(cont==4)
                {
                    cout<<"Ganaste jugador 1"<<endl;
                    cout<<endl;
                    system("pause");
                    return 0;
                }
                }
                cont=0;
        }
    }
    //Jugada del jugador 2
         do
         {
         cout<<"Donde va a colocar su ficha jugador 2: ";
         cin>>c;
         cout<<endl;
         } while(c<1||c>7);
        cout<<endl;
    //Ciclo cuando este llena la columna
     while(tablero[0][c-1]!=r)
    {
        do
        {
        cout<<"Columna llena o numero invalido"<<endl<<"Vuelva a colocar la ficha: ";
        cin>>c;
        cout<<endl;
        }while(c<1||c>7);
    }
    cout<<endl;
    //Colocacion de la ficha jugador 2
    tablero[0][c-1]=o;
    // Codigo para bajar ficha jugador 2
     for(int f=0;f<5;f++)
        {
        if(tablero[f+1][c-1]==r)
        {
        auxiliar= tablero[f][c-1];
        tablero[f][c-1]=tablero[f+1][c-1];
        tablero[f+1][c-1]=auxiliar;
        }
    }
    // Llenado del tablero cuando jugador 2 coloca la ficha
    for(int f=0;f<6;f++)
        {
            for(int c=0;c<7;c++)
            {
                cout<<tablero[f][c]<<"   ";
            }
            cout<<endl;
            cout<<endl;
        }
    // Ganador jugador 2 vertical
    for(int f=0;f<6;f++)
    {
        if(tablero[f][c-1]==o)
        {
            cont++;
        }else
        {
            cont=0;
        }
        if(cont==4)
        {
            cout<<"Ganaste jugador 2"<<endl;
            cout<<endl;
            system("pause");
            return 0;
        }
    }
    cont=0;
    //Ganaste jugador 2 horizontal
    for(int i=0;i<6;i++)
    {
      for(int j=0;j<7;j++)
    {
        if(tablero[i][j]==o)
        {
            cont++;
        }else
        {
            cont=0;
        }
        if(cont==4)
        {
            cout<<"Ganaste jugador 2"<<endl;
            cout<<endl;
            system("pause");
            return 0;
        }
    }
    }
    cont=0;
    // Ganador jugador 2 Diagonal a la derecha
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<7;j++)
        {

                while(tablero[i][j]==o&&i<6&&j<6)//||tablero[i++][j--]==x)
                {
                    cont++;
                    i++;
                    j++;
                if(cont==4)
                {
                    cout<<"Ganaste jugador 2"<<endl;
                    cout<<endl;
                    system("pause");
                    return 0;
                }
                }
                cont=0;
        }
    }
    //Ganador jugador 1 diagonal a la izquierda
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<7;j++)
        {

                while(tablero[i][j]==o&&i<6&&j<7)//||tablero[i++][j--]==x)
                {
                    cont++;
                    i++;
                    j--;
                if(cont==4)
                {
                    cout<<"Ganaste jugador 2"<<endl;
                    cout<<endl;
                    system("pause");
                    return 0;
                }
                }
                cont=0;
        }}
    }
    // Caso en el cual se llena el tablero y nadie gana
    cout<<"Nadie gano este juego"<<endl;
    cout<<endl;
        return 0;
    }
