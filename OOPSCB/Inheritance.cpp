#include <iostream>
#include<list>
using namespace std;
class YoutubeChannel
{
    //encapsulation -> make data members private 
    //accewss using methods in public
    private:
    string ChannelName;
    int SubscribersCount;
    list<string> VideoTitles;
    protected:
    string OwnerName;
    //Constructor method
    public:
    YoutubeChannel(string chanName,string ownName)
    {
        ChannelName = chanName;
        OwnerName = ownName;
        SubscribersCount = 0;
    }

    void getChannelInfo()
    {
        //need not use YTC. as we are already this method is inside class
        // cout<<"Channel Name :" << YTC.ChannelName <<endl; 

    cout<<"Channel Name :" << ChannelName <<endl; 
    cout<<"Owner Name :" <<OwnerName<<endl;
    cout<<"Subscribers Count: "<<SubscribersCount<<endl;
    cout<<"Video Titles List: "<<endl;
    for(string Title:VideoTitles) //for each loop
    {
        cout<<Title<<endl;
    }
    }

    void Subscribe()
    {
        SubscribersCount++;
    }

    void UnSubscribe()
    {
        if(SubscribersCount>0)
        {
            SubscribersCount--;
        }
    }

    void PublishVideo(string title)
    {
        VideoTitles.push_back(title);
    }



};
//creating dreived class CookingYoutubeChannel
//whatever is public in Base Class will be public in derived class
class CookingYoutubeChannel : public YoutubeChannel
{
//creating constructor for Derived Class
public: //very important
    CookingYoutubeChannel(string chanName,string ownName):YoutubeChannel(chanName,ownName) //note this
{

}
//creating a method for derived class
void practice()
{
    //to access OwnerName data member from base class, we use protected for data member
    cout<<OwnerName<<" is Pratising recipes, trying new flavors, then yummy yum";
}
};
int main() {
    
    //creating object YTChannel and passing default values to the constructor
    CookingYoutubeChannel YTChannel("Jeeva Cooks","Jeeva");
    YTChannel.Subscribe();
    YTChannel.Subscribe();
    YTChannel.practice();
    YTChannel.getChannelInfo();
    YTChannel.PublishVideo("Chicken Pasta");
    YTChannel.PublishVideo("Mutton Biriyani");

    //now for base class
    YoutubeChannel YTChannel2 ("Jeeva Talks","Jeeva"); //object for base class
    YTChannel2.Subscribe();
    YTChannel2.getChannelInfo();
    //cant give YTChannel2.practice() --> co it belongs to derived class

    //can also create another object for derived class

    CookingYoutubeChannel YTChannel3("Dhaaru Cooks","Dhaaru");
    YTChannel3.Subscribe();
    YTChannel3.PublishVideo("Panner Biriyani");
    YTChannel3.PublishVideo("Ramen");
    YTChannel3.getChannelInfo();
    YTChannel3.practice();
    return 0;

}


OUTPUT:

Jeeva is Pratising recipes, trying new flavors, then yummy yumChannel Name :Jeeva Cooks
Owner Name :Jeeva
Subscribers Count: 2
Video Titles List: 
Channel Name :Jeeva Talks
Owner Name :Jeeva
Subscribers Count: 1
Video Titles List: 
Channel Name :Dhaaru Cooks
Owner Name :Dhaaru
Subscribers Count: 1
Video Titles List: 
Panner Biriyani
Ramen
Dhaaru is Pratising recipes, trying new flavors, then yummy yum
