#include "gamewidget.h"
#include <QPainter>
#include <QKeyEvent>
#include <QRandomGenerator>

GameWidget::GameWidget(QWidget *parent)
    : QWidget(parent), birdY(200), velocity(0), pipeX(400), score(0), gameOver(false)
{
    setFixedSize(400, 500);
    setFocusPolicy(Qt::StrongFocus);

    bird.load(":/images/bird.png");

    gapY = QRandomGenerator::global()->bounded(120, 300);

    connect(&timer, &QTimer::timeout, this, &GameWidget::updateGame);
    timer.start(20);
}

void GameWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);

    p.fillRect(rect(), QColor(135, 206, 235));

    p.drawPixmap(50, birdY, bird);

    p.setBrush(Qt::green);
    p.drawRect(pipeX, 0, 50, gapY - 70);
    p.drawRect(pipeX, gapY + 70, 50, height());

    p.setPen(Qt::black);
    p.drawText(10, 20, QString("Score: %1").arg(score));

    if (gameOver)
        p.drawText(rect(), Qt::AlignCenter, "GAME OVER\nPress SPACE");
}

void GameWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space)
    {
        if (gameOver)
        {
            birdY = 200;
            velocity = 0;
            pipeX = width();
            score = 0;
            gameOver = false;
        }
        velocity = -7;
    }
}

void GameWidget::updateGame()
{
    if (gameOver)
        return;

    velocity += 1;
    birdY += velocity;

    pipeX -= 3;
    if (pipeX < -50)
    {
        pipeX = width();
        gapY = QRandomGenerator::global()->bounded(120, 300);
        score++;
    }

    if (birdY < 0 || birdY + bird.height() > height())
        gameOver = true;

    if (pipeX < 90 && pipeX + 50 > 50)
    {
        if (birdY < gapY - 70 || birdY + bird.height() > gapY + 70)
            gameOver = true;
    }

    update();
}
