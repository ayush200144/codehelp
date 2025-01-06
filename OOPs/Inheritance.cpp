 #include <iostream>
using namespace std;

class animal{
  //state or Properties
  public:
  int weight;
  int age;
  string name;
 
  //Behaivours or function(c++) or method(java)
   void eat(){
    cout << "Eating" << endl;
   }
   void sleep(){

   }
   void speak(){

   }
};
class dog : private animal {
      public:
      void print(){
        cout<< this->age;
      }
};
int main() {
  dog d;
  cout<< d.age<<endl;
  d.print();
  return 0;
}

 #include <iostream>
using namespace std;

class animal{
  //state or Properties
  protected:
  int weight;
  int age;
  string name;
 
  //Behaivours or function(c++) or method(java)
   void eat(){
    cout << "Eating" << endl;
   }
   void sleep(){

   }
   void speak(){

   }
};
class dog : protected animal {
      public:
      void print(){
        cout<< this->age;
      }
};
int main() {
  dog d;
  cout<< d.age<<endl;
  d.print();
  return 0;
}

 #include <iostream>
using namespace std;

class animal{
  //state or Properties
  private:
  int weight;
  int age;
  string name;
 
  //Behaivours or function(c++) or method(java)
   void eat(){
    cout << "Eating" << endl;
   }
   void sleep(){

   }
   void speak(){

   }
};
class dog : private animal {
      public:
      void print(){
        cout<< this->age;
      }
};
int main() {
  dog d;
  cout<< d.age<<endl;
  d.print();
  return 0;
}