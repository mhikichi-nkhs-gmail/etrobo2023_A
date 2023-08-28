#ifndef COMMUNICATION_
#define COMMUNICATION_

class Process
{
    public:
        Process();
        void run();
        void load(int pass);
        void writing(int pass);

    protected:
        enum SECTION_NO{
            SNAP,
            BLOCK,
            IOT
        };

    private:
          
};

#endif