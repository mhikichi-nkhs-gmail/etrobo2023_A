#ifndef COMMUNICATION_
#define COMMUNICATION_

class Process
{
    public:
        Process();
        void run();
        void load(int pass);
        void load1(int pass);
        void load2(int pass);
        void writing1(int pass);
        void writing2(int pass);
        void writing3(int pass);

    protected:


    private:
        char pipe[1024]; 

        
};

#endif