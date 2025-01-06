 #include <iostream>
using namespace std;

class animal{
  //state or Properties
  private:
  int weight;
  public:
  int age;
  string name;
  //Constructor
  animal(){
    this->weight = 0;
    this-> age = 0;
    this-> name = "";
    cout<< "Constructor"<<endl;
  }
  //Parameter Constructor 
   animal(int age){
    this->weight = 0;
    this-> age = age;
    this-> name = "";
    cout<< "parameter Constructor"<<endl;
  }

  //Parameterised Constructor 
   animal(int age, int weight){
    this->weight = weight;
    this-> age = age;
    this-> name = "";
    cout<< "parameter Constructor of 2 int"<<endl;
  }

  //Parameter Constructor 
   animal(int age, int weight, string name){
    this->weight = weight;
    this-> age = age;
    this-> name = name;
    cout<< "parameter Constructor of 3variable"<<endl;
  }

  // Copy Constructor
  animal( animal &obj){
    this->weight = obj.weight;
    this-> age = obj.age;
    this-> name = obj.name;
    cout<< "Copy Constructor "<<endl;
  }

  //Destructor(~)
  ~animal(){
    cout<<"Destructor"<<endl;
  }
  //Behaivours or function(c++) or method(java)
   void eat(){
    cout << "Eating" << endl;
   }
   void sleep(){

   }
   void speak(){

   }
   // who to access the private data by using get(return the ans) and set(set the ans)
   int getweight(){
    return weight;
   }
   void setweight(int w){
    weight = w;
   }
};
int main() {
  //object creation
  // Static
  animal ramesh;
  ramesh.age = 12;
  cout <<  ramesh.age << endl;
  ramesh.eat();
  ramesh.setweight(101);
  cout<<ramesh.getweight()<<endl;

  //Dynamic
  animal* rahul = new animal;

  (*rahul).age = 13;
  cout <<  (*rahul).age << endl;
  //alternative
  rahul->age = 14;
   cout <<  rahul->age << endl;
   rahul->setweight(1212);
   cout<<rahul->getweight()<<endl;

  animal a(10);
  animal *b = new animal(10,20);
  animal *c = new animal(10,20,"ayush");

  //copy Object
  animal d = a;
  animal e(d);
  //Destructor for static which is called automatically 
  animal f; 
  //Destructor for dynamic which is called manually(using delete)
  animal *g = new animal;
  delete g;
  return 0;
}