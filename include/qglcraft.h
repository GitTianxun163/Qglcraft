#ifndef QGLCRAFT_H

#include <QtOpenGL/QtOpenGL>
#include <QtWidgets/QtWidgets>

class QglcraftWindow : public QGLWidget {
    Q_OBJECT;
public:
    QglcraftWindow();
    ~QglcraftWindow();
private:
    void setupUi();
};

#endif