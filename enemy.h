#ifndef ENEMY_H
#define ENEMY_H
#include <QObject>

class Enemy
{
public:
    Enemy();
    int enemyNumDecrease();
    int bossLiveDecrease();
    int getEnemyNum();
    int getBossLive();
public slots:
    virtual void move();
private:
    int numBasicEnemies;
    int liveBossEnemy;


};

#endif // ENEMY_H
