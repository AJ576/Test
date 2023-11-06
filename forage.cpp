#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> squirrelLocations = {"UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN"};

    vector<string> squirrelColor = {"gray","gray","GRAY","Gray","Gray","gray","gray","Black",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","gray","Gray","Gray","Gray","gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","cinnamon","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","gray","Gray","Gray","Gray","Gray","Gray",
    "gray","Gray","Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Cinnamon","Gray","cinnamon","Gray","Gray","Gray","Gray","gray","Gray","Gray",
    "cinnamon","Gray","cinnamon","Gray","Gray","Cinnamon","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Black","Black","Black","Gray","Gray",
    "Black","Gray","Gray","Gray","Gray","Black","Black","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Black","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","black","Black","Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","gray","Gray","gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","cinnamon","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","","Gray","cinnamon","Cinnamon",
    "Gray","gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","cinnamon",
    "Gray","Cinnamon","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","cinnamon","Gray","Gray","Gray","Cinnamon",
    "Cinnamon","Cinnamon","Cinnamon","Gray","Gray","Gray","Gray","Gray","Cinnamon","Gray",
    "CINNAMON","Gray","Cinnamon","Cinnamon","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","cinnamon","Gray","Gray","Cinnamon","Cinnamon","Cinnamon","Gray",
    "Gray","Gray","Cinnamon","cinnamon","Gray","Gray","gray"};

    vector<vector<string>> squirrelActivity = {{"Foraging"},{"Foraging"},
    {"Eating", "Digging something"},{"Running"},{"Running", "Eating"},{"Climbing"},
    {"Foraging"},{"Climbing"},{"Foraging"},{"Eating", "Digging"},{"Eating", "Digging"},{"Running"},
    {"Running"},{"Foraging"},{"Foraging"},{"Running"},{"Running"},{"Foraging"},{""},
    {"Foraging", "Nesting/gathering leaves"},{"Chasing"},{"Running"},{"Eating"},{"Climbing"},
    {"Sleeping"},{"Running"},{"Running"},{"Eating"},{"Running"},{"Foraging"},{"Climbing"},
    {"Foraging"},{"Foraging"},{"Foraging"},{"Eating"},{"Sitting"},{"Chasing", "Climbing"},
    {"Chasing", "Climbing", "Eating"},{"Running"},{"Climbing"},{"Running"},{"Running"},{"Running"},
    {"Running", "Chasing", "Climbing"},{""},{"Climbing", "Foraging"},{"Vocalization at us"},
    {"Running", "Foraging"},{"Running"},{"Running", "Eating"},{"Jumped to building"},
    {"Eating", "Foraging"},{"Climbing"},{"Foraging"},{"Eating"},{"Foraging"},{"Climbing", "Eating"},
    {"Chasing", "Climbing"},{"Chasing", "Climbing"},{"Running"},{"Foraging"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Running"},{"Foraging"},{"Foraging"},{"Running", "up tree"},
    {"Running", "up tree"},{"Running", "up tree"},{"Chasing"},{"Chasing"},{"Sitting on branch"},
    {"Running", "up tree"},{"Eating"},{"Eating"},{"Eating"},{"Eating"},{"Eating"},{"Eating"},
    {"Eating"},{"Chasing"},{"Chasing"},{"Eating"},{"Running"},{"Running"},{"Running"},{""},
    {"Chasing"},{"Chasing"},{"Sitting at attention"},{"Eating"},{"Eating"},{"Foraging"},
    {"Foraging"},{"Climbing"},{"Climbing"},{"Climbing"},{"Climbing"},{"Climbing"},{"Climbing"},
    {"Climbing"},{"Climbing"},{"Chasing", "Climbing", "Eating"},{"Chasing", "Climbing", "Eating"},
    {"Chasing", "Climbing", "Eating"},{"Chasing", "Climbing", "Eating"},{"Climbing"},
    {"Climbing", "Eating"},{"Climbing", "Eating"},{"Running"},{"Running"},{"Sitting", "shouting"},
    {"Sitting", "shouting"},{"Sitting", "shouting"},{"Sitting", "shouting"},
    {"Defending tree", "shouting"},{"Defending tree", "shouting"},{"Defending tree", "shouting"},
    {"Defending tree", "shouting"},{"Defending tree", "shouting"},{"Defending tree", "shouting"},
    {"Eating"},{"Chasing", "Climbing"},{"Chasing", "Climbing"},{"Climbing"},{"Climbing"},
    {"Cleaning"},{"Climbing"},{"Foraging"},{"Sitting"},{"Foraging"},{"Resting in tree"},
    {"Running"},{"Sitting"},{"Sitting"},{"Foraging"},{"Foraging"},{"Climbing", "Foraging"},
    {"Running", "Climbing", "Foraging"},{"Climbing"},{"Running", "Eating", "Foraging"},
    {"Foraging"},{"Foraging"},{"Digging"},{"Climbing"},{"Climbing", "Eating"},{"Climbing"},
    {"Running", "Digging"},{"Eating", "Foraging"},{"Foraging"},{"Eating", "Foraging"},
    {"Foraging"},{"Eating", "Foraging"},{"Eating", "Foraging"},{"Eating", "Foraging"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Climbing"},{"Climbing"},{"Climbing", "Eating"},{"Foraging"},
    {"Chasing"},{"Chasing"},{"Foraging"},{"Climbing"},{"Chasing"},{"Eating"},{"Eating"},
    {"Eating"},{""},{"Eating"},{"Foraging"},{"Grooming"},{"Foraging"},{""},{""},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{""},{""},{""},
    {""},{"Foraging"},{""},{"Nesting"},{"Climbing"},{"Chasing"},{"Eating"},{"Chasing"},{"Chasing"},
    {"Chasing"},{"Chasing"},{"Chasing"},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},
    {""},{""},{""},{""},{""},{""},{""},{""},{""},{"Foraging"},{""},{""},{""},{""},{""},{""},{""},
    {""},{""},{""},{""},{"Climbing"},{"Foraging"},{"Foraging"},{"Foraging"},{"Running"},
    {"Foraging"},{"Foraging"},{"Climbing"},{"Foraging"},{"Chasing"},{"Chasing"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Climbing (down tree)"},{"Climbing (down tree)"},{"Climbing"},
    {"Climbing"},{"Foraging"},{"Foraging"},{"Climbing"},{"Sitting"},{"Sitting (in tree hole)"},
    {"Lounging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},
    {"Running"},{"Foraging"},{"Sitting"},{"Climbing"},{"Foraging"},{"Climbing (down)"},
    {"Climbing (down)"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},
    {"Chasing"},{"Chasing"},{"Foraging"},{"Foraging"},{"Climbing"},{"Climbing"},{"Climbing"},
    {"Climbing"},{"Foraging"},{"Foraging"},{"Running", "Eating"},{"Running", "Eating (peanuts)"},
    {"Climbing", "Watching #2"},{"Running", "Chasing", "Eating"},{"Eating", "Foraging"},
    {"Eating", "Foraging"},{"Climbing", "Foraging"},{"Climbing", "Foraging"},{"Climbing"},{"Eating"},
    {"Climbing", "Eating", "Foraging"},{"Eating", "Foraging"},{"Eating"},{"Eating"},{"Foraging"},
    {"Climbing"},{"Climbing", "Foraging"},{"Running", "Chasing"},{"Running", "Chasing"},
    {"Running", "Climbing", "Eating"},{"Eating", "Foraging"},{""},{""},{""},{"Ear scratching"},
    {""},{"Frolicking"},{"Running", "Climbing", "Scratching"},{"Running", "Climbing"},{"Posing"},
    {"Guarding"},{"Running", "Chasing", "Climbing"},{"Running", "Chasing", "Climbing"},
    {"Running", "Chasing", "Climbing"},{"Foraging"},{"Climbing", "Eating", "Foraging"},
    {"Running", "Foraging"},{""},{"Climbing"},{"Running", "Eating (or pretending to eat)"},
    {"Foraging"},{"Climbing"},{"Climbing"},{"Eating", "Burying"},{"Eating", "Burying"},
    {"Eating"},{"Eating"},{"Eating"},{"Climbing", "Foraging"},{"Running"},{"Eating", "Foraging"},
    {"Very carefully watching a cat"},{"Chattering"},{"Eating (nuts)", "Foraging"},{"Running"},
    {"Climbing", "Foraging"},{"Eating", "Foraging"},{"Eating", "Foraging"},{""},
    {"Climbing", "Balancing on fencing"},{""},{""},{""},{"Chillin'", "Rubbing butt on ground"},
    {"Running"},{"Foraging"},{"Foraging"},{"Running"},{"Foraging"},{"Foraging"},
    {"Eating"},{"Sticking out of a tree"},{"Chasing"},{"Chasing"},{"Hangin' with #13 & #14"},
    {""},{"Climbing (tree)"},{""},{"Snacking in a tree"},{""},{"Prancing about"},
    {"Climbing fence"},{""},{"Climbing fence"},{"battery"},{"Climbing", "Foraging", "Self-cleaning"},
    {"Chasing"},{"Climbing"},{"Eating"},{"Eating"},{"Climbing"},{"Climbing (down)"},
    {"Climbing (down)"},{"Climbing (down)"},{"Climbing (down)"},{"Sitting"},{"Running"},
    {"Running"},{"Eating"},{"Eating"},{"Running"},{"Climbing"},{"Running"},{"Climbing"},
    {"Chasing"},{"Running"},{"Eating", "Foraging"},{"Climbing"},{"Running"},{"Eating", "Foraging"},
    {"Climbing"},{"Climbing", "Sitting in short tree"},{"Eating"},{"Foraging", "Jumping"},
    {"Chilling"},{"Hanging"},{"Running", "Climbing"},{"Climbing"},{"Chasing", "Climbing"},
    {"Climbing"},{"Climbing"},{"Eating", "Foraging"},{"Foraging"},{"Running", "Foraging"},
    {"Eating (bread crumbs)", "Foraging"},{"Running"},{"Hanging out"},{"Foraging"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Sleeping (Dead?)"},{"Sleeping (Dead?)"},{"Eating (tortilla/chip)"},
    {"Running"},{"Eating"},{"Eating"},{"Foraging"},{"Running", "Foraging"},{"Climbing"},
    {"Running", "Chasing", "Climbing"},{"Foraging"}};
    
    
   /* your code here! */
   
   
   int total = squirrelLocations.size(); // because this will basically give us all the squirrels observed
   int tots=0;
   //defining and initalizing all kinds of info we need to print
   int manhattanSquirrels = 0;
   int cinnamonSquirrels = 0;
   int graySquirrels = 0;
   int graySquirrelsInManhattan = 0;
   int foragingSquirrels = 0;
   
   //for-loop for basically finding manhattan squirrels and gray squirrels in manhattan
   
   
   for(int i=0;i<total;i++)
   {
      for(int j = 0;j<squirrelLocations.at(i).size();j++)
      {
         //because in this particular problem only words containg manhattan has M we can just check for the word M
         if(squirrelLocations.at(i).at(j) == 'M')
         {
            manhattanSquirrels++;
            //and since we are already this deep in the loop might as well check if the squirrels are gray.
            //this will save some runtime (although it can be a bit unreadable)
            //I hardcoded the colors because I went over the data and there were only minor diffeences so 
            //making everything lowercse was not required 
            if(squirrelColor.at(i) == "gray" || squirrelColor.at(i) == "Gray" || squirrelColor.at(i) == "GRAY" )
            {
               graySquirrelsInManhattan++;
            }
            continue;
         }
      }
   }
   
   //check for  the gray squirrels and cinamon squirrels(in a seperate loop to retain readability)
   for(int i=0;i<total;i++)
   {
      if(squirrelColor.at(i) == "gray" || squirrelColor.at(i) == "Gray" || squirrelColor.at(i) == "GRAY")
            {
               graySquirrels++;
            }
      else if(squirrelColor.at(i) == "cinnamon" || squirrelColor.at(i) == "Cinnamon" || squirrelColor.at(i) == "CINNAMON")
            {
               cinnamonSquirrels++;
            }
   }
   
   //check for foragers
   for(int i=0;i<total;i++)
   {
      for(int j=0;j<squirrelActivity.at(i).size();j++)
      {
         if(squirrelActivity.at(i).at(j) == "Foraging")
            {
               
               foragingSquirrels++;
               

            }
      }
    
   }
   
   //print it all out
  

   cout<<"Total number of squirrels observed: "<<total<<endl;
   cout<<"Manhattan squirrels: "<<manhattanSquirrels<<endl;
   cout<<"Cinnamon squirrels: "<<cinnamonSquirrels<<endl;
   cout<<"Gray squirrels: "<<graySquirrels<<" "<<endl;
   cout<<"Gray squirrels in Manhattan: "<<graySquirrelsInManhattan<<endl;
   cout<<"Total number of squirrels observed foraging: "<<foragingSquirrels<<endl;
   
return 0;

   
}