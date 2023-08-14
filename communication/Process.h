#ifndef COMMUNICATION_
#define COMMUNICATION_

class Process
{
    public:
        Process();
        void run(int no, int use, char comm[1024]);
        void load1();
        void load2();
        void writing1();
        void writing2();
        void writing3();

    protected:


    private:
        char pipe[1024]; 

        
};

#endif