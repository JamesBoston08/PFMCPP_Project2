#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
int
double
bool
char 
unsigned int 
float 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int totalWinners = 3;
    int lapsRan = -12;
    int totalRunners = 8;
    
    double totalDistanceInMiles = 3.514;
    double splitTimeInMins = 15.45;
    double fastestLapTimeInMins = 1.25;
    
    bool isTrackDry = true;
    bool crossedFinishLine = false;
    bool wonRace = true;
    
    char firstPlace = 'g';
    char secondPlace = 's';
    char thirdPlace = 'b';

    unsigned prizeMoney = 50000;
    unsigned maxCrowdSize = 40000;
    unsigned numberOfEmployees = 46;

    float dayTemp = 93.3f;
    float trackLengthInFeet = 1312.1f;
    float nightTemp = 84.6f;

    
    ignoreUnused(number, totalWinners, lapsRan, totalRunners, totalDistanceInMiles, splitTimeInMins, fastestLapTimeInMins, isTrackDry, crossedFinishLine, wonRace, firstPlace, secondPlace, thirdPlace, prizeMoney, maxCrowdSize, numberOfEmployees, dayTemp, trackLengthInFeet, nightTemp); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
double calculateTotalCost(double chips, double twoLiterSoda = 2.75)
{
    ignoreUnused(chips, twoLiterSoda);
    return{};
}
/*
 2)
 */
bool makeHamburger(bool onePatty = true, bool twoPatties = false, int slicesOfCheese = 2, int numberOfPickles = 2)
{
    ignoreUnused(onePatty, twoPatties, slicesOfCheese, numberOfPickles);
    return{};
}
/*
 3)
 */
int getTotalNumberOfPlayers(int numberOfBoys, int numberOfGirls = 6)
{
    ignoreUnused(numberOfBoys, numberOfGirls);
    return{};
}
/*
 4)
 */
float getCircumference(float radius = 6.385f, float pi = 3.1415f, int two = 2)
{
    
    ignoreUnused(radius, pi, two);
    return{};
}
/*
 5)
 */
double getThreeDayTemperatureAvg(double dayOne, double dayTwo, double dayThree = 88.9)
{
    ignoreUnused(dayOne, dayTwo, dayThree);
    return{};
}
/*
 6)
 */
void buildComputer(char graphicsCard = 'g', char cpu = 'c', char motherBoard = 'm', int numOfFans = 2, int numOfRamSticks = 4, char hardDrive = 'h')
{
    ignoreUnused(graphicsCard, cpu, motherBoard, numOfFans, numOfRamSticks, hardDrive);
}
/*
 7)
 */
int buildSnowManFace(int carrot, int numOfButtons = 10, char topHat = 'h')
{
    ignoreUnused(carrot, numOfButtons, topHat);
    return{};
}
/*
 8)
 */
void calculateRetirementAnnuity(int salary = 50000, double percentageOfSalary = 1.12, int yearsOfService = 25)
{
    ignoreUnused(salary, percentageOfSalary, yearsOfService);
}
/*
 9)
 */
int getTotalZooAnimals(int giraffes, int tigers, int penguins, int snakes, int bears = 4)
{
    ignoreUnused(giraffes, tigers, penguins, snakes, bears);
    return{};
}
/*
 10)
 */
void createMixDrink(int ouncesOfVodka = 3, int ouncesOfOrangeJuice = 4, int numOfIceCubes = 2)
{
    ignoreUnused(ouncesOfVodka, ouncesOfOrangeJuice, numOfIceCubes);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto totalCost = calculateTotalCost(1.25);
    //2)
    auto hamburgerMade = makeHamburger(true, false, 1, 3); 
    //3)
    auto totalNumOfPlayers = getTotalNumberOfPlayers(5);
    //4)
    auto circumferenceAmountIs = getCircumference();
    //5)
    auto threeDayAverageIs = getThreeDayTemperatureAvg(83.4, 92.1, 90.5);
    //6)
    buildComputer();
    //7)
    auto snowManFaceIs = buildSnowManFace(1, 8);
    //8)
    calculateRetirementAnnuity();
    //9)
    auto totalNumZooAnimals = getTotalZooAnimals(6, 4, 13, 10, 3);
    //10)
    createMixDrink ();
    
    ignoreUnused(carRented, totalCost, hamburgerMade, totalNumOfPlayers, circumferenceAmountIs, threeDayAverageIs, snowManFaceIs, totalNumZooAnimals);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
