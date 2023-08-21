#ifndef COMMUNICATION_
#define COMMUNICATION_

class Process
{
    public:
        Process();
        void run();
        void load1(char pass[1024]);
        void load2(char pass[1024]);
        void writing1(char pass[1024]);
        void writing2(char pass[1024]);
        void writing3(char pass[1024]);

    protected:


    private:
        char pipe[1024]; 

        
};

#endif