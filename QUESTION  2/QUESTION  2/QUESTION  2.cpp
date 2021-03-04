#include <iostream>

using namespace std;

int main()
{
    // Method 1
    cout << "   1" << endl;
    cout << "  121" << endl;
    cout << " 12321" << endl;
    cout << "1234321" << endl;

    // Method 2
     for(int a=1; a<=4;a++){
       for(int b=3;b>=a;b--){
        cout<<" ";
}
       for(int c=1;c<a;c++){
       cout<<c;
}
       for (int d=a;d>=1;d--){
          cout<<d;
}
         cout<<endl;
}


    return 0;
}
