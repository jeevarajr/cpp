#include <iostream>
#include<list>
using namespace std;
class YoutubeChannel
{
    public:
    string ChannelName;
    string OwnerName;
    int SubscribersCount;
    list<string> VideoTitles;

    //Constructor method
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

};
int main() {
    YoutubeChannel YTC("Jeeva Talks","Jeeva"); // constructor
    //first object YTC
    YTC.VideoTitles.push_back("Osho");
    YTC.VideoTitles.push_back("Psychology");
    YTC.VideoTitles.push_back("Philosophy");
    YTC.VideoTitles.push_back("Science");
    YTC.VideoTitles.push_back("Mystery");
    YTC.getChannelInfo(); //calling the method to print
    //second object YTC2
    YoutubeChannel YTC2("Jeeva Speaks","Jeeva Again");
    YTC2.getChannelInfo();//calling the method to print

    return 0;

}

OUTPUT:
Channel Name :Jeeva Talks
Owner Name :Jeeva
Subscribers Count: 0
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
