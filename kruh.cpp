#include <iostream>

class Kruh
{
  	public:
		double pi = 3.14;

		void setRadius ( int x )
		{
			radius = x;
		}
		void print()
		{
			std::cout << "Radius je: " << radius << std::endl;
		}
		double spocitejPlochu() const
		{
			return pi * radius * radius;
		}
		double spocitejObvod() const
		{
			return 2 * pi * radius; 
		}
		double getRadius() const
		{
			return radius;
		}
		void vypisUdaje(const Kruh& libovolnyKruh)
		{
			std::cout << "Radius daneho kruhu: " << libovolnyKruh.getRadius() << std::endl;
			std::cout << "Plocha daneho kruhu: " << libovolnyKruh.spocitejPlochu() << std::endl;
			std::cout << "Obvod daneho kruhu: " << libovolnyKruh.spocitejObvod() << std::endl;	
		}	
	private:
		int radius;

};


int main()
{
   float prvniRadius = 2;
   Kruh prvniKruh;
   prvniKruh.setRadius( prvniRadius );
	prvniKruh.print();
	
   float druhyRadius = 4;
   Kruh druhyKruh;
   druhyKruh.setRadius( druhyRadius );
	druhyKruh.print();

   std::cout << "Plocha kruhu:" << prvniKruh.spocitejPlochu() << std::endl;
   std::cout << "Obvod kruhu:" << prvniKruh.spocitejObvod() << std::endl;

   druhyKruh.vypisUdaje(druhyKruh);

   // BONUS: radius kruhu bude sablonovy parametr, a udela pole kruhu a pro kazdy kruh spocita vse
   return 0;
}


