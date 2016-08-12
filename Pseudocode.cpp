#include <iostream>
using namespace std;
 

 void hanoi(int n, int start, int finish, int extra){
   if(n != 0){
        hanoi(n-1, start, extra, finish);
        cout << "Move disk" << endl; 
        cout<< n <<endl;
        cout<< "from peg"<< endl;
        cout << start << endl;
        cout << "to peg"<< endl;
        cout << finish << endl ;
        cout << "-----------" << endl; 
        
        hanoi(n-1, extra, finish, start);
   }

}

int main(int argc, char **argv)
{
  
	int n;
   cout <<"Enter number of disks "<< endl; 
   cin >> n; ;
   cout << "----------- \n"; 
   cout << endl; 
   hanoi(n, 1, 2, 3);

  return 0;
}
