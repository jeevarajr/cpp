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

};
int main() {
    YoutubeChannel YTC("Jeeva Talks","Jeeva");
    YTC.ChannelName = "Jeeva Talks";
    YTC.OwnerName = "Jeeva";
    YTC.SubscribersCount = 7138;
    YTC.VideoTitles = {"Osho","Psychology","Mystery","Science", "Space","Philosophy"};
    cout<<"Channel Name :" << YTC.ChannelName <<endl;
    cout<<"Owner Name :" <<YTC.OwnerName<<endl;
    cout<<"Subscribers Count: "<<YTC.SubscribersCount<<endl;
    cout<<"Video Titles List: "<<endl;
    for(string Title:YTC.VideoTitles) //for each loop
    {
        cout<<Title<<endl;
    }
    return 0;

}

OUTPUT:

Channel Name :Jeeva Talks
Owner Name :Jeeva
Subscribers Count: 7138
Video Titles List: 
Osho
Psychology
Mystery
Science
Space
Philosophy
