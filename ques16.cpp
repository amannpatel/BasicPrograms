#include<iostream>
using namespace std;

class figure
{
public:
    virtual void read()=0;
    virtual void show()=0;
};

class close:public figure
{
protected:
    int close_fig;
public:
    close()
    {
        close_fig=0;
    }
    void read()
    {
        cout<<"How many close figure are there: ";
        cin>>close_fig;
    }
    void show()
    {
        cout<<"Total number of close figure: "<<close_fig<<endl;
    }
    ~close()
    {

    }
};

class open:public figure
{
protected:
    int open_fig;
public:
    open()
    {
        open_fig=0;
    }
    void read()
    {
        cout<<"How many open figure are there: ";
        cin>>open_fig;
    }
    void show()
    {
        cout<<"Total number of open figure: "<<open_fig<<endl;
    }
    ~open()
    {

    }
};

class polygon:public close
{
    int angle, side;
public:
    polygon()
    {
        angle=0;
        side=0;
    }
    void read()
    {
        cout<<"How many angle are there in the polygon [close figure] ";
        cin>>angle;
        cout<<"How many side are there in the polygon [close figure] ";
        cin>>side;
    }
    void show()
    {
        cout<<"Number of angle: "<<angle<<endl<<"Number of side: "<<side<<endl;
    }
    ~polygon()
    {

    }
};

class ellipse:public close
{
    int oval;
public:
    ellipse()
    {
        oval=0;
    }
    void read()
    {
        cout<<"How many oval shape are there in the figure: ";
        cin>>oval;
    }
    void show()
    {
        cout<<"Total no. of oval figure: "<<oval<<endl;
    }
    ~ellipse()
    {

    }
};

class line:public open
{
    int lines;
public:
    line()
    {
        lines=0;
    }
    void read()
    {
        cout<<"How many lines are there in the figure: ";
        cin>>lines;
    }
    void show()
    {
        cout<<"Total number of lines in the figure: "<<lines<<endl;
    }
    ~line()
    {

    }
};

class polyline:public open
{
    int polylines;
public:
    polyline()
    {
        polylines=0;
    }
    void read()
    {
        cout<<"How many polylines are there in the figure: ";
        cin>>polylines;
    }
    void show()
    {
        cout<<"Total number of polylines: "<<polylines<<endl;
    }
    ~polyline()
    {

    }
};

main()
{
    polygon triangle, rectangle, pentagon;
    triangle.read();
    triangle.show();
    rectangle.read();
    rectangle.show();
    pentagon.read();
    pentagon.show();
}
