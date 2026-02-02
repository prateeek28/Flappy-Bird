#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPixmap>

class GameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GameWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *) override;
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void updateGame();

private:
    QTimer timer;
    int birdY;
    int velocity;
    int pipeX;
    int gapY;
    int score;
    bool gameOver;
    QPixmap bird;
};

#endif
