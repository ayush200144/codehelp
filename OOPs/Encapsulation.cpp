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
class dog : public animal {

}
int main() {
  dog d;
  d.eat();
  return 0;
}