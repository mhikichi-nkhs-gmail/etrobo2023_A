#ifndef COMMUNICATION_
#define COMMUNICATION_

class Process
{
    public:
        Process();
        void load();
        void writing();

    protected:

    private:
        char pipe[1024]; 
};

#endif