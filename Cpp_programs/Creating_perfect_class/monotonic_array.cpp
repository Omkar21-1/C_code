/*
 *      monotonic array
 *      array elements ascendingorder ni tri pahije ny
 *      Tr descending order ni tri pahije
 *
 *
 * */

#include<iostream>
using namespace std ;
class monochromic{
        private:
                bool asc = 1;
                bool desc = 1;
                int a[10];
                int n;
        public:
                void accept()
                {
                        cout<<"Enter How Many No.: ";
                        cin>>n;
                        for(int i=0; i<n; ++i)
                        {
                                cin>>a[i];
                        }
                }
                void check()
                {
                        int j = n-1;
                        for(int i=0; i<j; ++i)
                        {
                                if(a[i]>a[i+1])
                                {
                                        asc = 0;
                                }
                                else if(a[i]<a[i+1])
                                {
                                        desc = 0;
                                }
                        }
                }

			void display()
                {
                        for(int i=0; i<n; ++i)
                        {
                                cout<<a[i]<<" ";
                        }
                        cout<<endl;
                        if(asc == 1|| desc == 1)
                        {
                                cout<<"Yes"<<endl;
                        }
                        else
                        {
                                cout<<"No"<<endl;
                        }
                }
};
int main()
{
        monochromic m;

        m.accept();
        m.check();
        m.display();


        return 0;
}