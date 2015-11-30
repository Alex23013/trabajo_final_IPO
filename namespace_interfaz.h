#include<iostream>
using namespace std;

namespace Interfaz
{
	static void bienvenido()
	    {
		cout<<"	                        ( o o )                     "<<endl; 
		cout<<"	+----------------.oooO--(_)--Oooo.----------------+ "<<endl;
		cout<<"                                                     "<<endl;
		cout<<"	|                   BIENVENIDO                    | "<<endl;
		cout<<"                                                     "<<endl;
		cout<<"	|                  .oooO                          | "<<endl;
		cout<<"	|                  (   )   Oooo.                  | "<<endl;
		cout<<"	+-------------------| (----(   )------------------+ "<<endl;
		cout<<"	                     |_)    ) /                     "<<endl;
		cout<<"	                           (_/                      "<<endl;
	    }

	static void print_card(int num)
		{
		cout << " _____  "<<endl;
		cout << "|     | "<<endl;
		cout << "| "<<num<<"   | "<<endl;
		cout << "| "<<"&"<<"   | "<<endl;
		cout << "|_____| "<<endl;
		}
	static void volaste()
 		{
		cout<<"	 __   __ _______ ___     _______ _______ _______ _______ "<<endl;
		cout<<"	|  | |  |       |   |   |   _   |       |       |       |"<<endl;
		cout<<"	|  |_|  |   _   |   |   |  |_|  |  _____|_     _|    ___|"<<endl;
		cout<<"	|       |  | |  |   |   |       | |_____  |   | |   |___ "<<endl;
		cout<<"	|       |  |_|  |   |___|       |_____  | |   | |    ___|"<<endl;
		cout<<"	 |     ||       |       |   _   |_____| | |   | |   |___ "<<endl;
		cout<<"	  |___| |_______|_______|__| |__|_______| |___| |_______|"<<endl;                                            
		} 
	static void volo()
 		{
		cout<<"	 __   __ _______ ___     _______ "<<endl;
		cout<<"	|  | |  |       |   |   |       |"<<endl;
		cout<<"	|  |_|  |   _   |   |   |   _   |"<<endl;
		cout<<"	|       |  | |  |   |   |  | |  |"<<endl;
		cout<<"	|       |  |_|  |   |___|  |_|  |"<<endl;
		cout<<"	 |     ||       |       |       |"<<endl;
		cout<<"	  |___| |_______|_______|_______|"<<endl;                                            
		}
	static void tienes_tanto_US(int n)
	{
	cout<<" _______ ___ _______ __    _ _______ _______     "<<"   __   __ _______       "<<endl;
	cout<<"|       |   |       |  |  | |       |       |    "<<"  |  | |  |       |      "<<endl;
	cout<<"|_     _|   |    ___|   |_| |    ___|  _____|    "<<"  |  | |  |  _____|      "<<endl;
	cout<<"  |   | |   |   |___|       |   |___| |_____    "<<n<<"  |  |_|  | |_____       "<<endl;
	cout<<"  |   | |   |    ___|  _    |    ___|_____  |    "<<"  |       |_____  |  ___ "<<endl;
	cout<<"  |   | |   |   |___| | |   |   |___ _____| |    "<<"  |       |_____| | |   |"<<endl;
	cout<<"  |___| |___|_______|_|  |__|_______|_______|    "<<"  |_______|_______| |___|"<<endl;
	}
	static void tiene_tanto_US(int n)
	{
	cout<<" _______ ___ _______ __    _ _______     "<<"    __   __ _______       "<<endl;
	cout<<"|       |   |       |  |  | |       |    "<<"   |  | |  |       |      "<<endl;
	cout<<"|_     _|   |    ___|   |_| |    ___|    "<<"   |  | |  |  _____|      "<<endl;
	cout<<"  |   | |   |   |___|       |   |___|   "<<n<<"   |  |_|  | |_____       "<<endl;
	cout<<"  |   | |   |    ___|  _    |    ___|    "<<"   |       |_____  |  ___ "<<endl;
	cout<<"  |   | |   |   |___| | |   |   |___     "<<"   |       |_____| | |   |"<<endl;
	cout<<"  |___| |___|_______|_|  |__|_______|    "<<"   |_______|_______| |___|"<<endl;
	}
	
	static void apuesta_()
	{
	cout<<" _______ _______ __   __ _______ _______ _______ _______   "<<endl;  
	cout<<"|   _   |       |  | |  |       |       |       |   _   |  "<<endl;
	cout<<"|  |_|  |    _  |  | |  |    ___|  _____|_     _|  |_|  |  "<<endl;
	cout<<"|       |   |_| |  |_|  |   |___| |_____  |   | |       |  "<<endl;
	cout<<"|       |    ___|       |    ___|_____  | |   | |       |  "<<endl;
	cout<<"|   _   |   |   |       |   |___ _____| | |   | |   _   |  "<<endl;
	cout<<"|__| |__|___|   |_______|_______|_______| |___| |__| |__|  "<<endl;
	}
	
	static void ganaste()
	{
	cout<<" _______ _______ __    _ _______ _______ _______ _______ "<<endl;
	cout<<"|       |   _   |  |  | |   _   |       |       |       |"<<endl;
	cout<<"|    ___|  |_|  |   |_| |  |_|  |  _____|_     _|    ___|"<<endl;
	cout<<"|   | __|       |       |       | |_____  |   | |   |___ "<<endl;
	cout<<"|   ||  |       |  _    |       |_____  | |   | |    ___|"<<endl;
	cout<<"|   |_| |   _   | | |   |   _   |_____| | |   | |   |___ "<<endl;
	cout<<"|_______|__| |__|_|  |__|__| |__|_______| |___| |_______|"<<endl;
	}
	static void la_mesa()
	{
	 cout<<"___     _______   __   __ _______ _______ _______ "<<endl;
	cout<<"|   |   |   _   | |  |_|  |       |       |   _   |"<<endl;
	cout<<"|   |   |  |_|  | |       |    ___|  _____|  |_|  |"<<endl;
	cout<<"|   |   |       | |       |   |___| |_____|       |"<<endl;
	cout<<"|   |___|       | |       |    ___|_____  |       |"<<endl;
	cout<<"|       |   _   | | ||_|| |   |___ _____| |   _   |"<<endl;
	cout<<"|_______|__| |__| |_|   |_|_______|_______|__| |__|"<<endl;
	}
	
	static void gana_la_mesa()
	{
	cout<<" _______ _______ __    _ _______ "<<endl;
	cout<<"|       |   _   |  |  | |   _   |"<<endl;
	cout<<"|    ___|  |_|  |   |_| |  |_|  |"<<endl;
	cout<<"|   | __|       |       |       |"<<endl;
	cout<<"|   ||  |       |  _    |       |"<<endl;
	cout<<"|   |_| |   _   | | |   |   _   |"<<endl;
	cout<<"|_______|__| |__|_|  |__|__| |__|"<<endl;
	la_mesa();
	}

	static void doblas_tu_dinero()
	{
	cout<<"  ______  _______ _______ ___     _______ _______     __   __ _______ "<<endl;
	cout<<" |      ||       |  _    |   |   |   _   |       |   |  | |  |       |"<<endl;
	cout<<" |  _    |   _   | |_|   |   |   |  |_|  |  _____|   |  | |  |  _____|"<<endl;
	cout<<" | | |   |  | |  |       |   |   |       | |_____    |  |_|  | |_____ "<<endl;
	cout<<" | |_|   |  |_|  |  _   ||   |___|       |_____  |   |       |_____  |"<<endl;
	cout<<" |       |       | |_|   |       |   _   |_____| |   |       |_____| |"<<endl;
	cout<<" |______||_______|_______|_______|__| |__|_______|   |_______|_______|"<<endl;
	}
	
	static void pierdes_lo_apostado()
	{
	cout<<"  _______ ___ _______ ______   ______  _______ _______  "<<endl;
	cout<<" |       |   |       |    _ | |      ||       |       | "<<endl;
	cout<<" |    _  |   |    ___|   | || |  _    |    ___|  _____| "<<endl;
	cout<<" |   |_| |   |   |___|   |_||_| | |   |   |___| |_____  "<<endl;
	cout<<" |    ___|   |    ___|    __  | |_|   |    ___|_____  | "<<endl;
	cout<<" |   |   |   |   |___|   |  | |       |   |___ _____| | "<<endl;
	cout<<" |___|   |___|_______|___|  |_|______||_______|_______| "<<endl;
	apuesta_();
	}
	
	static void cuanto_apuesta()
	{
	cout<<"  _______ __   __ _______ __    _ _______ _______ "<<endl;
	cout<<" |       |  | |  |   _   |  |  | |       |       |"<<endl;
	cout<<" |       |  | |  |  |_|  |   |_| |_     _|   _   |"<<endl;
	cout<<" |       |  |_|  |       |       | |   | |  | |  |"<<endl;
	cout<<" |      _|       |       |  _    | |   | |  |_|  |"<<endl;
	cout<<" |     |_|       |   _   | | |   | |   | |       |"<<endl;
	cout<<" |_______|_______|__| |__|_|  |__| |___| |_______|"<<endl;
	apuesta_();
	}
	
	static void escoge_una_opcion()
	{
	cout<<" _______ _______ _______ _______ _______ _______ "<<endl;
	cout<<"|       |       |       |       |       |       |"<<endl;
	cout<<"|    ___|  _____|       |   _   |    ___|    ___|"<<endl;
	cout<<"|   |___| |_____|       |  | |  |   | __|   |___ "<<endl;
	cout<<"|    ___|_____  |      _|  |_|  |   ||  |    ___|"<<endl;
	cout<<"|   |___ _____| |     |_|       |   |_| |   |___ "<<endl;
	cout<<"|_______|_______|_______|_______|_______|_______|"<<endl;
	cout << ""<<endl;
	cout << ""<<endl;
	}
	
	static void no()
	{
	cout<<" __    _ _______ "<<endl;
	cout<<"|  |  | |       |"<<endl;
	cout<<"|   |_| |   _   |"<<endl;
	cout<<"|       |  | |  |"<<endl;
	cout<<"|  _    |  |_|  |"<<endl;
	cout<<"| | |   |       |"<<endl;
	cout<<"|_|  |__|_______|"<<endl;
	}
	static void ya()
	{
	cout<<" __   __ _______ "<<endl;
	cout<<"|  | |  |   _   |"<<endl;
	cout<<"|  |_|  |  |_|  |"<<endl;
	cout<<"|       |       |"<<endl;
	cout<<"|_     _|       |"<<endl;
	cout<<"  |   | |   _   |"<<endl;
	cout<<"  |___| |__| |__|"<<endl;
	}
	
	static void puede_jugar()
	{
	 cout<<"_______ __   __ ______ ______  _______      ___ __   __ ______ _______ _____   "<<endl;
	cout<<"|       |  | |  |      |      ||      |     |   |  | |  |      |   _   |   _ |  "<<endl;
	cout<<"|    _  |  | |  |   ___|  _    |    __|     |   |  | |  |   ___|  |_|  |  | ||  "<<endl;
	cout<<"|   |_| |  |_|  |  |___| | |   |   |__      |   |  |_|  |  | __|       |  |_||_ "<<endl;
	cout<<"|    ___|       |   ___| |_|   |    __|  ___|   |       |  ||  |       |   __  |"<<endl;
	cout<<"|   |   |       |  |___|       |   |__  |       |       |  |_| |   _   |  |  | |"<<endl;
	cout<<"|___|   |_______|______|______||______| |_______|_______|______|__| |__|__|  |_|"<<endl;
	}
	
	static void no_tiene_esos_US (int n)
	{
	no();
	tienes_tanto_US(n);
	}
	static void ya_no_puede_jugar ()
	{
	ya();
	no();
	puede_jugar();
	}
	static void la_mesa_puede_jugar()
	{
	la_mesa();
	puede_jugar();
	}
static void con()
	{	
	cout<<" _______ _______ __    _ "<<endl;
	cout<<"|       |       |  |  | |"<<endl;
	cout<<"|       |   _   |   |_| |"<<endl;
	cout<<"|       |  | |  |       |"<<endl;
	cout<<"|      _|  |_|  |  _    |"<<endl;
	cout<<"|     |_|       | | |   |"<<endl;
	cout<<"|_______|_______|_|  |__|"<<endl;	
	}
};
