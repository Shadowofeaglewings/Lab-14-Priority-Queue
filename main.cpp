#include <iostream>
#include "PQType.h"
#include "PQType.cpp"
using namespace std;

int main()
{
    /*PQType<int> pq(15);
    if(pq.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    pq.Enqueue(4);
    pq.Enqueue(9);
    pq.Enqueue(2);
    pq.Enqueue(7);
    pq.Enqueue(3);
    pq.Enqueue(11);
    pq.Enqueue(17);
    pq.Enqueue(0);
    pq.Enqueue(5);
    pq.Enqueue(1);

    if(pq.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    int val;
    pq.Dequeue(val);
    cout<<val<<endl;
    pq.Dequeue(val);
    cout<<val<<endl;


    int mB;
    cin>>mB;
    int timeInMinute;
    cin>>timeInMinute;
    PQType<int> pq2(mB);
    int value;
    for(int i = 0;i<mB;i++)
    {
        cin>>value;
        pq2.Enqueue(value);
    }
    int result  = 0;
    for(int i= 0;i<3;i++)
    {
        pq2.Dequeue(val);
        pq2.Enqueue(val/2);
        result+=val;
    }
    cout<<result<<endl;*/
    int mB;
    cin>>mB;
    int timeInMinute;
    cin>>timeInMinute;
    PQType<int> pq2(mB);
    int value;
    for(int i = 0; i<mB; i++)
    {
        cin>>value;
        pq2.Enqueue(value);
    }
    int val;
    int enval;
    int result  = 0;
    for(int i= 0; i<3; i++)
    {
        pq2.Dequeue(val);
        cout<<"Dequeued :"<<val<<endl;
        if(val<=5)
        {
            enval = ((val*60)/100)+1;
            cout<<"Enqueued<=5 :"<<enval<<endl;
            pq2.Enqueue(enval);
        }
        else
        {
            enval = ((val*40)/100)+1;
            cout<<"Enqueued>5 :"<<enval<<endl;
            pq2.Enqueue(enval);
        }


        result+=val;
    }
    cout<<result<<endl;






    return 0;
}
