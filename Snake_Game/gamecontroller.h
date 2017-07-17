#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QObject>
#include <QTimer>

class QGraphicsScene;
class QKeyEvent;



class GameController : public QObject
{
    Q_OBJECT
public:
    GameController(QGraphicsScene &scene, QObject *parent = 0);
    ~GameController();

public slots:
    void pause();
    void resume();
    void gameOver();

private:
    QTimer timer;
    QGraphicsScene &scene;

};

#endif // GAMECONTROLLER_H
