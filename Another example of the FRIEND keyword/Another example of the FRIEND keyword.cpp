// Another example of the FRIEND keyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Duration
{
    int seconds{}, minutes{};

public: 
    Duration() = default; 
    Duration(const int seconds, const int minutes)
        :seconds(seconds), minutes(minutes)
    {

    }

    friend class Song; //gives Song access to modify seconds and minutes 
};

class Song
{
    std::string name; //ex: chromakopia
    Duration theDuration; //the is COMPOSITION! Hooray
    
public: 
    Song(const std::string& name, const Duration& theDuration)
        :name(name), theDuration(theDuration)
    {

    }

    bool operator == (const Song& rhsSong) // 5== 3
    {
        return (this->name == rhsSong.name)
            &&
            (this->theDuration.minutes == rhsSong.theDuration.minutes)
            &&
            (this->theDuration.seconds == rhsSong.theDuration.seconds);


    }
    //operator << ()

    void modifySongAttributes(const std::string& newName, const int newSeconds, const int newMinutes)
    {
        name = newName; 
        theDuration.minutes = newMinutes; 
        theDuration.seconds = newSeconds; 
    }

};

class ThisDemoClass
{
public:
    void printThis() 
    { 
        std::cout << this << "\n"; 
    }
    //this is a pointer to a class object’s address
};
int main()
{

    //Duration whiteChristmasDuration = { 3, 42 };

    Song theMostPopularSongEvah("White Christmas", { 3, 42 });

    ThisDemoClass thisDemoObject; 

    std::cout << "In main, the address of thisDemoObject is: " << &thisDemoObject << "\n";
    thisDemoObject.printThis(); 

    //doSomething(5, 4); 
    //doSomething("adsfdsa") //this is "function overloading" 

    //std::cout << theMostPopularSongEvah << "\n";

    //Song someOtherSong("When the summer dies", { 5, 30 });

    Song someOtherSong = theMostPopularSongEvah;

    if (theMostPopularSongEvah == someOtherSong)
    {
        std::cout << "The songs are the SAME\n";
    }

    else
    {
        std::cout << "NOT the same song\n";
    }

    //int a;
    //
    //float* b = &a;

}

