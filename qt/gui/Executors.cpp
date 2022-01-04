#include "Executors.h"

class FuncRunnable:public QRunnable {

private:
    std::function<void()> target;
protected:

    void run() {
        target();
    }

public:
    FuncRunnable(std::function<void()> func) {
        target = func;
    }
};

Executors::Executors(void) {
    this->pool = new QThreadPool();
    this->pool->setMaxThreadCount(2);
}

void Executors::exec(std::function<void()> func) {

    FuncRunnable* run = new FuncRunnable(func);
    pool->start(run);

}

Executors::~Executors() {
    pool->clear();
    delete pool;
}
