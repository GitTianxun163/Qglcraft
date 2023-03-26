#ifndef QGLCRAFT_H

#include <QtOpenGL/QtOpenGL>
#include <QtWidgets/QtWidgets>
#include <QtCore/QtCore>
#include <QtGui/QtGui>

class QglcraftWindow : public QGLWidget {
    Q_OBJECT;
public:
    QglcraftWindow();
    ~QglcraftWindow();
private:
    void setupUi();
    void paintGL();
};

#endif