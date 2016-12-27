#include "enemy.h"
Enemy::Enemy()
{
    this->liveBossEnemy=100;
    this->numBasicEnemies=20;
}

int Enemy::enemyNumDecrease()
{
    this->numBasicEnemies--;
}

int Enemy::bossLiveDecrease()
{
    this->liveBossEnemy--;
}

int Enemy::getEnemyNum()
{
    return this->numBasicEnemies;
}

int Enemy::getBossLive()
{
    return this->liveBossEnemy;
}

