#include <cstdio>

class myclass
{
    friend void double_x(myclass &object);
    private:
    int x;
    void add(int n){
        x += n;
    }
    public :
    myclass(int a){
        x=a;
    }
    void print(){
        printf("%d\n",x);
    }
};
class cost;

class revenue
{
    friend bool profit(revenue &,cost &);
    int revenu;
    public :
    // revenue(int rev) : revenu(rev) {}
    revenue(int rev)
    {
        revenu=rev;
    }
};
class cost
{
    friend bool profit(revenue &,cost &);
    int coste;
    public:
    cost(int cos) : coste(cos) {}
};
bool profit(revenue &re,cost &cos){
    if (re.revenu > cos.coste) return 1;
    else 
        return 0;

}

void double_x( myclass &object)
{
    int current_x_value =object.x;
    object.add(current_x_value);
    //object.x *=2;

}

int  main()
{
    myclass myobject(7);
    myobject.print();
    double_x(myobject);
    myobject.print();
    revenue revenue1(7000);
    cost cost1(5000);
    if(profit(revenue1,cost1))
        printf("hey");
    else printf("no hey");
    
    return 0;
}