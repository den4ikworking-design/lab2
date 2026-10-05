#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));
    for (int i = 1; i <= 3; i++) {
        ofstream f("file" + to_string(i) + ".txt");
        for (int j = 0; j < 10; j++) {
            if (j > 0) f << " ";
            f << rand() % 10 + 1;
        }
        f << endl;
    }
    return 0;
}
