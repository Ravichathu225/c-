#include <iostream>
using namespace std ;

int main() {
  string stream, subject , classes;
  string Bio,  Math ;
  int totalMarks,CombinedMathsMarks, PhysicsMarks, ChemistryMarks,biologyMarks;
  string A,B,C,D,E;
  cout << "Type your stream: ";
  cin >> stream;
  cout << "Type your subject: ";
  cin >> subject;
  cout << "Type your classes: ";
  cin >> classes;
  if (stream == Math ) { 
    
    if(classes == A ){
        cout << "Type your CombinedMathsMarks: ";
        cin >> CombinedMathsMarks;
        cout << "Type your Physics Marks: ";
        cin >> PhysicsMarks;
        cout << "Type your Chemistry Marks: ";
        cin >> ChemistryMarks;
        totalMarks = CombinedMathsMarks+PhysicsMarks+ChemistryMarks;
        cout << totalMarks;
    }
    if(classes ==B ){
        cout << "Type your CombinedMathsMarks: ";
        cin >> CombinedMathsMarks;
        cout << "Type your Physics Marks: ";
        cin >> PhysicsMarks;
        cout << "Type your Chemistry Marks: ";
        cin >> ChemistryMarks;
        totalMarks = CombinedMathsMarks+PhysicsMarks+ChemistryMarks;
        cout << totalMarks;
    }
    if(classes ==C ){
        cout << "Type your CombinedMathsMarks: ";
        cin >> CombinedMathsMarks;
        cout << "Type your Physics Marks: ";
        cin >> PhysicsMarks;
        cout << "Type your Chemistry Marks: ";
        cin >> ChemistryMarks;
        totalMarks = CombinedMathsMarks+PhysicsMarks+ChemistryMarks;
        cout << totalMarks;
    }
    if(classes ==D ){
        cout << "Type your CombinedMathsMarks: ";
        cin >> CombinedMathsMarks;
        cout << "Type your Physics Marks: ";
        cin >> PhysicsMarks;
        cout << "Type your Chemistry Marks: ";
        cin >> ChemistryMarks;
        totalMarks = CombinedMathsMarks+PhysicsMarks+ChemistryMarks;
        cout << totalMarks;
    }
    if(classes == E ){
        cout << "Type your CombinedMathsMarks: ";
        cin >> CombinedMathsMarks;
        cout << "Type your Physics Marks: ";
        cin >> PhysicsMarks;
        cout << "Type your Chemistry Marks: ";
        cin >> ChemistryMarks;
        totalMarks = CombinedMathsMarks+PhysicsMarks+ChemistryMarks;
        cout << totalMarks;
    }


}
if (stream == Bio ) {
    if(classes == A ){
        cout << "Type your biologyMarks Marks: ";
        cin >> biologyMarks;
        cout << "Type your Physics Marks: ";
        cin >> PhysicsMarks;
        cout << "Type your Chemistry Marks: ";
        cin >> ChemistryMarks;
        totalMarks = CombinedMathsMarks+PhysicsMarks+ChemistryMarks;
        cout << totalMarks;
    }
    if(classes ==B ){
        cout << "Type your biology Marks : ";
        cin >> biologyMarks;
        cout << "Type your Physics Marks: ";
        cin >> PhysicsMarks;
        cout << "Type your Chemistry Marks: ";
        cin >> ChemistryMarks;
        totalMarks = CombinedMathsMarks+PhysicsMarks+ChemistryMarks;
        cout << totalMarks;
    }
    if(classes ==C ){
        cout << "Type your biology Marks: ";
        cin >> biologyMarks;
        cout << "Type your Physics Marks: ";
        cin >> PhysicsMarks;
        cout << "Type your Chemistry Marks: ";
        cin >> ChemistryMarks;
        totalMarks = CombinedMathsMarks+PhysicsMarks+ChemistryMarks;
        cout << totalMarks;
    }
    
    
    
    }  
  
  return 0;
}
c++