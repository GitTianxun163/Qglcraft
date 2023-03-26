#include <qglcraft.h>
using namespace std;

QglcraftWindow::QglcraftWindow() : QGLWidget(){
    this->setupUi();
}

QglcraftWindow::~QglcraftWindow() {

}

void QglcraftWindow::setupUi() {
    this->resize(800,600);
    
}

void QglcraftWindow::paintGL() {
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glLoadIdentity();
    glTranslatef( -1.5,  0.0, -6.0 );
    glBegin( GL_TRIANGLES );
    glVertex3f(  0.0,  1.0,  0.0 );
    glVertex3f( -1.0, -1.0,  0.0 );
    glVertex3f(  1.0, -1.0,  0.0 );
    glEnd();
    glTranslatef(  3.0,  0.0,  0.0 );
    glBegin( GL_QUADS );
    glVertex3f( -1.0,  1.0,  0.0 );
    glVertex3f(  1.0,  1.0,  0.0 );
    glVertex3f(  1.0, -1.0,  0.0 );
    glVertex3f( -1.0, -1.0,  0.0 );
    glEnd();
}