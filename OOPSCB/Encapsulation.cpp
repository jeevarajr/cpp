#include <iostream>
#include<list>
using namespace std;
class YoutubeChannel
{
    //encapsulation -> make data members private 
    //accewss using methods in public
    private:
    string ChannelName;
    string OwnerName;
    int SubscribersCount;
    list<string> VideoTitles;

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
int main() {
    YoutubeChannel YTC("Jeeva Talks","Jeeva"); // constructor
    //first object YTC
    YTC.PublishVideo("Osho");
    YTC.PublishVideo("Psychology");
    YTC.PublishVideo("Philosophy");
    YTC.PublishVideo("Science");
    YTC.PublishVideo("Mystery");
    YTC.Subscribe(); //1
    YTC.Subscribe(); //2
    YTC.Subscribe(); //3
    YTC.UnSubscribe(); //2
    YTC.getChannelInfo(); //calling the method to print
    //second object YTC2
    YoutubeChannel YTC2("Jeeva Speaks","Jeeva Again");
    YTC2.getChannelInfo();//calling the method to print
    YTC2.Subscribe(); //1
    YTC2.Subscribe(); //2
    YTC2.UnSubscribe(); //1

    return 0;

}


OUTPUT:
Channel Name :Jeeva Talks
Owner Name :Jeeva
Subscribers Count: 2
Video Titles List: 
Osho
Psychology
Philosophy
Science
Mystery
Channel Name :Jeeva Speaks
Owner Name :Jeeva Again
Subscribers Count: 0
Video Titles List: 
