#ifndef EXECUTORS_H
#define EXECUTORS_H

#include<QThreadPool>

class Executors {

private:
    QThreadPool* pool;

public:

    Executors();
    ~Executors();
    void exec(std::function<void()> func);

};

#endif // EXECUTORS_H
