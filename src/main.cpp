#include <qglcraft.h>
using namespace std;

int main(int argc,char* argv[]) {
    QApplication app(argc,argv);
    QglcraftWindow window;
    window.show();
    return app.exec();
}