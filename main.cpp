#include <iostream>
#include "juego.cpp"

int main()
{
	bienvenido();
player_mesa a;
player_person b;
int salida =5;
while(salida !=0)
	{
	//cout <<"Dispones de: "<<b.mostrar_dinero()<<" dolares"<<endl;
	tienes_tanto_US(b.mostrar_dinero());
	int apuesta;
	//cout <<"Cuantos dolares de apuesta ?? "<<endl;
	apuesta_();
	cin>>apuesta;
	if(b.val_dinero(apuesta))
		{
		Juego myjuego;
		b.dinero=myjuego.partida(a,b,false,apuesta);
		//cout <<"Le queda "<<b.mostrar_dinero()<<" dolares"<<endl;
		tienes_tanto_US(b.mostrar_dinero());
		if(b.dinero <=0)
			{
			//cout << "Ya no puedes seguir jugando "<<endl;
			//cout <<" Se te acabaron los dolares "<<endl;	
			ya_no_puede_jugar();
			tienes_tanto_US(0);
			salida=0;}
		else
			{
			//cout <<"Que desea hacer? "<<endl;
			escoge_una_opcion();
			cout << "1:continuar      0:salir"<<endl;	
			cin>>salida;
			}
		}
	else{	//cout << "NO tienes ese dinero "<<endl;
		no_tiene_esos_US (apuesta);}
	}
}
