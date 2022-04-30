#include "MyFuncs.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <list>


using namespace std;

//Global Variables
float StartMoney = 1200;
float GoldArm = 200;
float SilverGear = 725;
float GoldenEnd = 10000;
float SkellyEnd = 6300;
int choice;
int x = 5;


//Class Block
class Bounties
{
private:
	string QuestName;
	string Difficulty;
	int Reward;
	char Direction;
	list<string> Details;

public:
	Bounties(string questName, string difficulty, int reward, char direction)
	{
		QuestName = questName;
		Difficulty = difficulty;
		Reward = reward;
		Direction = direction;
	}

	void GetInfo()
	{
		cout << "Bounty: " << QuestName << endl;
		cout << "Danger Level: " << Difficulty << endl;
		cout << "Reward: " << Reward << " Drachma" << endl;
		cout << "Directions: " << Direction << endl;
		cout << "Details: " << endl;
		for (string BountyInfo : Details)
		{
			cout << BountyInfo << endl;
		}
	}
	void GetDetails(string bounty_description)
	{
		Details.push_back(bounty_description);
	}
};

class BountyCompleted:public Bounties
{
public:
	BountyCompleted(string questName, string difficulty, int reward, char direction) :Bounties(questName, difficulty, reward, direction)
	{

	}
};

//print statement for a description of the game and how to play.
void Description()
{
	cout << "This is an interactive simulation\nIt takes place in the ancient greece era\n"
		"You will be guided through a story and asked a couple of options\n"
		"From then, only fate can decide your end\n\n"
		"How to play\n"
		"Only enter numbers shown with each the question\n" << endl;
}

//prints golden hero ending and drachma total
void GoldenHero()
{
	//used to reference drachma amount
	float& golden_ending = GoldenEnd;
	float total = GoldArm+GoldenEnd;
	cout << "With all this feeling of power flowing through your body you decide to grab the legendary bounty to defeat the giant scorpian up North!\n" << endl;
	cout << "On the bounty paper is a map on where to go\nYou begin on your journey North";
	printf("...");
	Sleep(2000);
	printf("...");
	Sleep(2000);
	printf("...");
	Sleep(2000);
	printf("...");
	Sleep(2000);
	printf("...");
	Sleep(2000);
	cout << "\nAfter 30 minutes of walking you start to make out destroyed buildings in the distance...\n" << endl;
	cout <<	"You continue steadily with your sword drawn\n"
		"As you are on full alert, suddenly, an injured villager comes shuffling from under some ruble shouting for help!\n" << endl;
	printf("\n");
	Sleep(5000);
	cout << "\nSAVE ME PLEASE! A MONSTER... MONSTER ATTACKED AND KILLED MY FAMILY\n"
		"HELP ME!\nPLEASE!\n" << endl;
	printf("\n");
	Sleep(5000);
	cout << "With all their shouting you know something will be coming for them\nYou feel tremors beneath the ground\n"
		"The villager has almost made it to you... then the ground beneath him erupted!\n"
		"The dust clouds cleared up and there was a behemouth of a scorpian standing right in front of you... with the villager in one pincher\n"
		"It snaps the villager in half with its claw and its looking right in your direction\n" << endl;
	printf("\n\n\n");
	Sleep(2500);
	cout << "It hurls its stinger towards your body, but without hesitation and with swift movement you dodge and counter attack...\n" << endl;
	printf("Your sword gets stuck halfway through its stinger\n");
	Sleep(3000);
	printf("You realize it got its stinger stuck in the ground from its initial attack\n");
	Sleep(3000);
	printf("The Scorpian tries to grab you with its pinchers...\n");
	Sleep(3000);
	printf("but you narrowly avoided it getting a better positioning to pull your sword through its stinger\n");
	Sleep(3000);
	printf("With all your might it cuts clean through, severly injuring the Scorpian, but also freeing it...\n");
	Sleep(3000);
	printf("Now the Scorpian in enraged with pain and thrashes around violently hitting you square in the chest knocking you back 15 feet...\n");
	Sleep(3000);
	printf("Thanks to this shiney Armor you only felt knocked around and get back up instantly\n");
	Sleep(3000);
	printf("You Realize you have been disarmed and your sword lies next to the Scoripian\nIt seems to be dizzy and confused after its actions\nThis is your opportunity...\n");
	Sleep(3000);
	printf("It seems to have noticed you running back towards it.\nIt turns in preperations for an attack but was not fast enough...\nYou grabbed your sword and slide under it while it was turning towards you... you peirce through its underside striking its heart\n");
	Sleep(6000);
	printf("It collapsed on top of you... is this how your fate ends?\nYou hear some distant movement before it stops next to you... could it be another?!\n");
	Sleep(3000);
	printf("You feel as if the dead scorpian is getting lighter on your body\nYou are ahle to get out from beneath the beast\nPreparing to fight another you realize that it is just the rest of the surviving villagers rescuing you\n");
	Sleep(3000);
	cout << "The villagers help you recover until you all head towards the capital\nThe villagers will need to seek refugee\nand you hero, well you need your reward!\n" << endl;
	printf("\nDrachma gained: %f\n", golden_ending);
	printf("\nTotal Drachma: %f\n", total);
	Sleep(3000);
	cout << "\nCongratulations, Legendary Hero, your name will be known throughout the lands!\nNo need to worry about the villagers, go enjoy your earnings hero, the ones who lost their homes will be treated with care.\n" << endl;
	//Uses inheiritance class to display completed bounty
	BountyCompleted scorpian("Giant Scorpian Hunt", "Legendary", 10000, 'N');
	scorpian.GetDetails(":::: COMPLETED! ::::");
	scorpian.GetInfo();
	ClosingStatement();
}
//prints death statement by bandits...
void HiddenDemise()
{
	cout << "You decide to investigate the major bandit lootings happening on the major roads\n" << endl;
	printf("You grab the bounty and start asking people questions about the lootings\n");
	Sleep(3000);
	printf("You come across a shady looking man, you decide to ask him anyways.\nHe claims recently got mugged on the main road to the West\n");
	Sleep(4000);
	printf("He informs you that it was a group of 6 men all armed\nYou thank him for his information and continue to question people\n");
	Sleep(3000);
	printf("After a hour goes by it seems as if no one else has any information on these bandits\nSo you start heading West towards where the man was mugged\n");
	Sleep(4000);
	printf("Not before long you see that same man laying out in the middle of the road...\nYou approach with your sword drawn and start scanning the area... nothing in sight\n");
	Sleep(4000);
	printf("You reach his body and nudge it to see if he is alive\n...\nNo movement...\nYou decide to flip his body over, horrified, you see his body shrivled up as if his soul had been sucked out of him!!!\n");
	Sleep(7000);
	printf("You look away only to notice you are surrounded by assassin like shadows, but more demonic\nBefore you could react, your throat had been slit\n");
	Sleep(5000);
	printf("Weak, you fall to the ground\nThe entities climb ontop of you and stripping you of your Armor and drachmas\nWhile they strip you of all your belongings, one entity gets face to face with you\n");
	Sleep(4000);
	printf("It makes some sort of shrilling sound\nYour vision goes dark\nYou feel as if you left your body\nBut you feel your soul getting consumed\nYour last thoughts were despair and pain\n");
	Sleep(5000);
	printf("\nDrachma Remaining: 0");
	Sleep(2000);
	ClosingStatement();
}
void SkellyCave()
{
	//used to reference drachma amount
	float& skelly_ending = SkellyEnd;
	float total = SilverGear + SkellyEnd;
	printf("Undead Skeletons sounds cooler than any regular old bandits\n");
	Sleep(3000);
	printf("You grab the skeleton bounty and start travling on the Eastern road\n");
	Sleep(3000);
	printf("."); Sleep(1000); printf("."); Sleep(1000); printf("."); Sleep(1000); printf("."); Sleep(1000); printf(".\n"); Sleep(1000);
	printf("Not before long you realize you are about to walk past the red tree mentioned on the bounty\n");
	Sleep(3000);
	printf("You head left and see and opening in the mountain nearby...\n");
	Sleep(3000);
	printf("You see the cave, mentally preparing for the worst you draw your greatsword and inch closer\n");
	Sleep(3000);
	printf("\nYou spot one\nIt is spooky to see it move like its alive...\n");
	Sleep(3000);
	printf("In mere moments you were surrounded by spooky scary skeletons!\n");
	Sleep(3000);
	printf("\nThere are only 6 total...\nCompletely outnumbered\n");
	Sleep(3000);
	printf("Instincts kick in and you start swinging with your greatsword before the skeletons could attack\n");
	Sleep(3000);
	printf("Since they are only bone they fell apart instantly when the blade touched them\nOne problem they are reforming their shape\n");
	Sleep(3000);
	printf("You smash the skulls on the ground hoping that would stop them...\nNo success, it just made them more terrifying\n");
	Sleep(3000);
	printf("You notice a strange glow farther in the cave\n");
	Sleep(3000);
	printf("After no progress you decide to make a break for the glowing light when they are all knocked down\n");
	Sleep(3000);
	printf("You do a massive spin attack hitting every skeleton\nYou bolt for the light\n");
	Sleep(3000);
	printf("You hear the skeletons reforming but continue anyways\n");
	Sleep(3000);
	printf("."); Sleep(1000); printf("."); Sleep(1000); printf(".\n"); Sleep(1000);
	printf("You make it close to the light to realize the glowing is coming from what appears to be magic and ritual circle\n");
	Sleep(3000);
	printf("This must be the source of energy resurrecting the skeletons\nYou hear boney footsteps drawing closer...\n");
	Sleep(3000);
	printf("You scan the room to see what appears to be a cultist\nWithout hesitation you rush towards him\n");
	Sleep(3000);
	printf("Completely caught offgaurd, you behead the necromancer\nWhat sounds to be bones collapsing nearby must have been the skeletons\n");
	Sleep(3000);
	printf("\nYour job is complete, you grab the necromancer's head and a skeleton's skull for proof of work\n");
	Sleep(3000);
	printf("You journey back to claim your rewards\n");
	printf("\nDrachma gained: %f\n", skelly_ending);
	printf("\nTotal Drachma: %f\n", total);	
	Sleep(3000);
	cout << "Congratulations Hero, thank you for your service\nYour reputation grows with this deed...\nTake your reward and enjoy it well!\n" << endl;
	//Uses inheiritance class to display completed bounty
	BountyCompleted skelly("Undead Skeletons Rising", "Deadly", 6300, 'E');
	skelly.GetDetails(":::: COMPLETED! ::::");
	skelly.GetInfo();
	ClosingStatement();
}
//print statement for choice 1
void GoldStatement()
{
	//used to reference drachma amount
		float& start_money = StartMoney;
		float& gold_balance = GoldArm;
	cout << "Excellent choice, let me get that fitted to your needs\n" << endl;
	cout << "\nYou get fitted into your new armor and feel powerful like a king\n"
		"You pay the smithy 1000 Drachma and start leaving the shop\n";
	//used to point to armor rating address
	int* ptr = &x;
	cout << "\nOld Armor Rating: " << *ptr << endl;
	*ptr = 20;
	cout << "New Armor Rating: " << x << endl;
	printf("\nRemaining Drachma: %f\n", gold_balance);
	Sleep(3000);
	cout << "\nBefore you leave you realize you needed a new sword too!\nYou forgot how your sword shattered in your last fight with a cyclops\n"
		"Luckily since you bought the gold Armor the smithy offered to repair your damaged sword for free\n" << endl;
	cout << "\nAfter a couple of hours go by the smithy returns with your sword\n" << endl;
	cout << "A dead costumer is no good to me\n"
		"I repaired and even strengthened your sword\nNo need to thank me, just come back and buy more after your journey\n" << endl;
	cout << "\nYou leave the shop, attracting eyes from all directions\n"
		"You head towards a request board and wonder what will be your next journey?\n" << endl;
	cout << "What journey will you venture?\n"
		"\n(1) Bounty 1" << endl;
	Bounties scorpian("Giant Scorpian Hunt", "Legendary", 10000, 'N');
	scorpian.GetDetails("Giant Scorpian Terrorizing a nearby village\nLooking for any capible heros that can fight\nIts size is estimated to be as big as a city villa\nHead North and defeat this beast...\nGood Luck!\n");
	scorpian.GetInfo();
	cout << "\n(2) Bounty 2" << endl;
	Bounties bandits("Thieving Bandits", "Intermediate", 2500, 'W');
	bandits.GetDetails("Local vendors and travelers have been reporting of missing shipments and supplies\nOnly people who get their supplies delivered from any Western cities are suffering\nWe believe the culprits are located around the Western road near the forest\nNo other information or sitings have been reported...\n");
	bandits.GetInfo();
	cout <<	"\n\nPlease enter '1' or '2'\n" << endl;
	cin >> choice;
	cout << "\nYou chose path: " << choice << "\n\n" << endl;
	// if player chooses 1 do this
	if (choice == 1)
	{
		GoldenHero();
	}
	// if player chooses 2 do this
	else if (choice == 2)
	{
		HiddenDemise();
	}
	// catchall if user tries to choose anything other than 1 or 2
	else
	{
		cout << "You entered incorreectly please try again\n\n" << endl;
		GoldStatement();
	}
}

//print statement for choice 2
void SilverStatement()
{
	//used to reference drachma amount
	float& start_money = StartMoney;
	float& silver_balance = SilverGear;
	cout << "Ah I see, nothing fancy but definetly reliable\nLet us get you fitted for that set\n" << endl;
	cout << "\nYou get fitted into your new aromour set and realize you need a new weapon too...\n";
	cout << "Instead of repairing your sword you decide to buy a sturdy greatsword that goes with your Armor\n"
		"You get an odd look from the smithy but he still goes aand grabs your new weapon\nIt cost 125 drachma just so you sre aware\nTotal for today is 475\n";
	//used to point to armor rating address
	int* ptr = &x;
	cout << "\nOld Armor Rating: " << *ptr << endl;
	*ptr = 8;
	cout << "New Armor Rating: " << x << endl;
	printf("\nRemaining Drachma: %f\n", silver_balance);
	Sleep(3000);
	cout << "You grab your new weapon after paying the smithy\nNext, you head outside and walk towards a bounty request board...\n" << endl;
	cout << "What journey will you venture?\n"
		"\n(1) Bounty 1" << endl;
	Bounties bandits("Thieving Bandits", "Intermediate", 2500, 'W');
	bandits.GetDetails("Local vendors and travelers have been reporting of missing shipments and supplies\nOnly people who get their supplies delivered from any Western cities are suffering\nWe believe the culprits are located around the Western road near the forest\nNo other information or sitings have been reported...\n");
	bandits.GetInfo();
	cout << "\n(2) Bounty 2" << endl;
	Bounties skelly("Undead Skeletons Rising", "Deadly", 6300, 'E');
	skelly.GetDetails("Travelers coming from the East have reported a cave with undead skeletons walking around as if they are alive\nUnknown number of skeletons\nStick to the road until you see a tree with red flowers\nGo past it then to the left\nThats the cave reported with the undead\nGoodLuck!\n");
	skelly.GetInfo();
	cout << "\n\nPlease enter '1' or '2'\n" << endl;
	cin >> choice;
	cout << "\nYou chose path: " << choice << "\n\n" << endl;
	// if player chooses 1 do this
	if (choice == 1)
	{
		HiddenDemise();
	}
	// if player chooses 2 do this
	else if (choice == 2)
	{
		SkellyCave();
	}
	// catchall if user tries to choose anything other than 1 or 2
	else
	{
		cout << "You entered incorreectly please try again\n\n" << endl;
		SilverStatement();
	}
}

//print statement for the end of the game
void ClosingStatement()
{
	cout << "\n\nThank you for playing!\n\nI truly hope you enjoyed this playthrough!\n\nGoodbye!\n" << endl;
}

//prints the intro scene
void IntroCont()
{
	cout << "You continue around the market until you find a smithy\n"
		"You enter the shop to be greated with two sets of finished Armor\n"
		"From the corner of your ear you hear a rough and deep voice\n"
		"\nYou buyin? or just waisting my time...\n" << endl;
	cout << "You know you need new Armor after your long journey here\n"
		"So you let the smithy know you are interested in a new set of Armor but ask for a price\n" << endl;
	cout << "The gold one is 1000 Drachma while the silver is only 350 Drachma\n" << endl;
}

//prints starting money for player to see
int Money()
{
	cout << "Drachma: " << StartMoney << "\n" << endl;
	return StartMoney;
}
