#include <qglcraft.h>

QglcraftWindow::QglcraftWindow() : QGLWidget(){
    this->setupUi();
}

QglcraftWindow::~QglcraftWindow() {

}

void QglcraftWindow::setupUi() {
    this->resize(800,600);
    
}