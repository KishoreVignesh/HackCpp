#ifndef HACKSTACK_H
#define HACKSTACK_H

template<typename T>
class Element{
    public :
    T value;
    Element * previous;
};

template<typename T>
class HackStack
{
    public:
        HackStack();
        ~HackStack();
        void push(T t);
        T pop();
        long totalSize();
    protected:
    private:
    Element<T>* top;
};

#endif // HACKSTACK_H
