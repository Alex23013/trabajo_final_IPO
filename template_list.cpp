#include <iostream>
using namespace std;

template <typename T,typename U>
T min( T arr[], U size)
{
	T min =arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]<min)
		{min= arr[i];}
	}
	return min;
}

int main()
{
	cout << "Con un array tipo int"<<endl;	
	int arr[]={10,2,30};
	int result;
	result=min<int>(arr,3);
	cout << "el min es: "<<result<<endl;	
	cout << "Con un array tipo float"<<endl;
	float ar[]={10.2,2.8,30.2};
	float to;
	to=min<float>(ar,3);
	cout <<  "el min es: "<<to<<endl;
	
}
