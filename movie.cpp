#include<iostream>
#include<vector>

using namespace std;


class Movie{

    public:
        string title;
        int year;


};

int main()
{
    Movie beatstreet;

    beatstreet.title = "Beat Street";
    beatstreet.year = 1984;

    cout<<beatstreet.title<<endl;
    cout<<beatstreet.year<<endl;


    Movie hackers;

    hackers.title= "hackers";
    hackers.year = 1995;

    cout<<hackers.year<<endl;

    Movie userMovie;

    string usertitle;
    int useryear;

    cin>>usertitle;
    cin>>userMovie.year;

    userMovie.title = usertitle;

    cout<<userMovie.title<<endl;
    cout<<userMovie.year<<endl;


    vector<Movie> myMovies;

    myMovies.push_back(beatstreet);
    myMovies.push_back(hackers);
    myMovies.push_back(userMovie);


    for(int i=0;i<myMovies.size();i++)
    {
        cout<<myMovies[i].title<<"("<<myMovies[i].year<<")"<<endl;
    }


}