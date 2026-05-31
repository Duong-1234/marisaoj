//Phan loai nam
#include <iostream>
using namespace std;
double a;
int main() {
    cin>>a;
    if(a <= 4.9) cout<<"SAFE";
    else if(a <= 8.9) cout<<"TOXIC";
    else cout<<"VERY TOXIC";
    return 0;
}