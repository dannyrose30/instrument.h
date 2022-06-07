#include <string>
using namespace std;


class Instrument{
public:
   Instrument();
   Instrument(string family, string brand, double price, string color);
string get_family();
string get_brand();
string get_color();
double get_price();
void set_family(string f);
void set_brand(string b);
void set_color(string c);
void set_price(double p);
~Instrument();
Instrument(const Instrument& orig);
Instrument& operator=(const Instrument& right);

private:
   string family, brand, color;
   double price; 
};



class Guitar: public Instrument {
  public: 
   Guitar() : Instrument(), string_count(0), type_code(0) {}
   Guitar(string family, string brand, double price, string color, int string_count, char type_code) : Instrument(family, brand, price, color), this->string_count(string_count), this->type_code(type_code) {};
  int get_string_count() { return string; }
  void set_string_count(string s) { string_count = s; }
  char get_type_code() { return type_code; }
  void set_type_code(char t) { type_code = t; }

private: 
   int string_count;
   char type_code;
}






Instrument::Instrument() : family(""), brand(""), color(""), price(0.0) {};
Instrument::Instrument(string family, string brand, double price, string color) : this->family(family), this->brand(brand), this->color(color), this->price(price) {};
string Instrument::get_family() { return family; }
string Instrument::get_brand() { return brand; }
string Instrument::get_color() { return color; }
double Instrument::get_price() { return price; }
void Instrument::set_family(string f) { family = f; }
void Instrument::set_brand(string b) { brand = b; }
void Instrument::set_color(string c) { color = c; }
void Instrument::set_price(double p) { price = p; }
Instrument::~Instrument() { }
Instrument::Instrument(const Instrument& orig) {
  this->family = orig.get_family();
  this->brand = orig.get_brand();
  this->color = orig.get_color();
  this->price = orig.get_price();
}
Instrument& Instrument::operator=(const Instrument& right) {
  if(this = &right) { return *this; }
  this->family = right.get_family();
  this->brand = right.get_brand();
  this->color = right.get_color();
  this->price = right.get_price();
  return *this;
}



