#include <iostream>

class Tvar //base class 
{
	public:
		int value;

		Tvar() {}
		virtual double obvod() const = 0;
		virtual double obsah() const = 0;
		//virtual std::string jmeno() = 0;
		int getValue() const {
			return value;
		}
		virtual void print() const {
			std::cout << "Hodnota funkce: " << getValue() << std::endl; 
		}
	private:
};

class Kruh : public Tvar //derived class 
{
	public:
		Kruh(int r) : radius(r) {}

		/*void setRadius( double x ){
			radius = x;
		}
		*/
		double obvod() const override {
			return 2 * 3.14 * radius;
		}
		
		double obsah() const override {
			return 3.14 * radius * radius;
		}

		void print() const override {
			std::cout << "Obvod kruhu: " << obvod() << std::endl; 
			std::cout << "Obsah kruhu: " << obsah() << std::endl;		
		}
	private:
		int radius;

};

class Ctverec : public Tvar //derived 2nd class 
{
	public: 
		Ctverec(int a) : strana(a) {}

		double obvod() const override {
			return 4 * strana;
		}

		double obsah () const override {
			return strana * strana;
		}

		void print() const override {
			std::cout << "Obvod ctverce: " << obvod() << std::endl;
                        std::cout << "Obsah ctverce: " << obsah() << std::endl;
                }
	private:
		int strana;
};

int main(){
	Kruh obj1(3);
	Ctverec obj2(5);
	//obj.setRadius(3);
	
	obj1.print();
	obj2.print();
}
