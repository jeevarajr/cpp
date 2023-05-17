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
    int ContentQuality;
    //to keep track of quality of both methods with 
    // same name practice
    //Constructor method
    public:
    YoutubeChannel(string chanName,string ownName)
    {
        ChannelName = chanName;
        OwnerName = ownName;
        SubscribersCount = 0;
        ContentQuality = 0; //initialising Content Quality to Zero
    }

    //creating Channel Analytics method in base class
    //to later acces using derived class --> using pointers --> polymorphism
    void ChannelAnalytics()
    {
    if(ContentQuality>3)
    {
        cout<<ChannelName<< " is performing bad, needs improvement"<<endl;
    }
    else
    {
        cout<<ChannelName<<" is doing great. Keep it up"<<endl;
    }
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
    void Practice()
{
    //to access OwnerName data member from base class, we use protected for data member
    cout<<OwnerName<<" is Pratising recipes, trying new flavors, then yummy yum"<<endl;
    ContentQuality++; 
}
};

class SingingYoutubeChannel : public YoutubeChannel
{
//creating constructor for this derived class
public:
    SingingYoutubeChannel(string chanName,string ownName):YoutubeChannel(chanName,ownName)
{

}
//creating pracitce method -> same name but different job
    void Practice()
{
    cout<<OwnerName<<" is learning music, playing new songs"<<endl;
    ContentQuality++;
}
};
//creating another derived class to implement polymorphism
//below public is important

int main() {
    
    //creating object YTChannel and passing default values to the constructor
    CookingYoutubeChannel YTChannel("Jeeva Cooks","Jeeva");
    SingingYoutubeChannel SingChannel("Rahman Sings","ARR");
    YTChannel.Practice();
    SingChannel.Practice();
    SingChannel.Practice();
    SingChannel.Practice();
    SingChannel.Practice();

//creating pointers for base class object to store objects of derived class
    YoutubeChannel* YT1 = &YTChannel;
    YoutubeChannel* YT2 = &SingChannel;

    YT1 -> ChannelAnalytics();
    YT2 -> ChannelAnalytics();
   
    return 0;

}

OUTPUT:

Jeeva is Pratising recipes, trying new flavors, then yummy yum
ARR is learning music, playing new songs
ARR is learning music, playing new songs
ARR is learning music, playing new songs
ARR is learning music, playing new songs
Jeeva Cooks is doing great. Keep it up
Rahman Sings is performing bad, needs improvement
