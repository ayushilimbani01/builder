#include<iostream>
#include<string.h>

using namespace std;

class Hotel
{
	 
	private :
		int id,staff_size,room_size;
		char hotelname[100],hoteladdress[100];
		
	public :
		void setData(int id,char hotelname[],char hoteladdress[],int staff_size,int room_size)
		{
			this->id=id;
			strcpy(this->hotelname,hotelname);
			strcpy(this->hoteladdress,hoteladdress);
			this->staff_size=staff_size;
			this->room_size=room_size;
					
		}
	
	   void getData()
	   {
	   	  cout<<"Id ="<<id<<endl;
	   	  cout<<"Hotelname ="<<hotelname<<endl;
	   	  cout<<"Hoteladdress ="<<hoteladdress<<endl;
		  cout<<"Staff_size ="<<staff_size<<endl;
		  cout<<"Room_size ="<<room_size<<endl;
		   	   
    	}   
					
};


int main()
{
	Hotel h1;
	
	h1.setData(5,"fast food","mota varachha",40,10);
	h1.getData();
	
	
}
