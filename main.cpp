#include <iostream>
using namespace std; 

void invalidChoice(int& choice);
void storyPageOne(int& choice);
void displayThen1(int& choice);
void displayThen2(int& choice);
void display1Then4(int& choice);
void display1Then5(int& choice);
void display2Then6(int& choice);
void display2Then7(int& choice);
void display1Then4Then8(int& choice);
void display1Then4Then9(int& choice);
void display1Then5Then11(int& choice);
void display1Then5Then12();
void display2Then6Then14(int& choice);
void display2Then6Then15();
void display2Then7Then17();
void display2Then7Then18(int& choice);
void display2Then6Then14Then29(int& choice);
void displayEnding1();
void displayEnding2();
void displayEnding3();

int main () {

    int choice = 0, number;
    
    cout << "Hello Video Game Lovers: Hope you guys enjoy this narrative text adventure story." << endl; // Introduction to the video game.
    cout << "Enter your choice when prompted into the console."  << endl;
    cout << endl;
    cout << "Press Enter to Continue....";
    cin.ignore();
	
    system("clear");

    storyPageOne(choice);   // First story page of the story line.
    
    while ((choice <= 0) || (choice >= 3)) 
    {	
        invalidChoice(choice);
    }

    system("clear");

    if (choice == 1) 
    {
        displayThen1(choice);  // Displays choice 1 
        
        while ((choice <= 3) || (choice >= 6))
        {
            invalidChoice(choice); // Choice needs to be 1 or 2 
        }

		system("clear");   

        if (choice == 4) 
        {
            display1Then4(choice); // Displays choice 4

            while ((choice <= 7) || (choice >= 10))
            {
                invalidChoice(choice);   // Choice needs to be 8 or 9 
            }
			
			system("clear");

            if (choice == 8)
            {
                display1Then4Then8(choice);  // Displays choice 8

				while ((choice <= 19) || (choice >= 22))
				{
					invalidChoice(choice);  // Numbers to be 20 or 21
				}

				system("clear");

				if (choice == 20)
				{
					displayEnding1();  // Displays ending 1
				}

				if (choice == 21)
				{
					displayEnding1();  // Displays ending 1
				}
            }

            if (choice == 9)
            {
                display1Then4Then9(choice); // Displays choice 9
				
				while ((choice <= 22) || (choice >= 25))
				{
					invalidChoice(choice);
				}

				system("clear");

				if (choice == 23)
				{
					displayEnding1();  // Displays ending 1
				}
				if (choice == 24)
				{
					displayEnding1();  // Displays ending 1
				}
            }
        }
        
        if (choice == 5)  
        {
            display1Then5(choice);  // Displays choice 5

            while ((choice <= 10) || (choice >= 13))
            {
                invalidChoice(choice);  // Choice needs to be 11 or 12
            }

			system("clear");

            if (choice == 11)
            {
                display1Then5Then11(choice);  // Displays choice 11
            }

            if (choice == 12)
            {
                display1Then5Then12();  // Displays choice 12
            }
        }
    } 

    else // (choice == 2)
    {
        displayThen2(choice);  //  Displays choice 2

        while ((choice <= 5) || (choice >= 8))
        {
            invalidChoice(choice);   // Number need to be 6 or 7
        }

		system("clear");

        if (choice == 6)
        { 
            display2Then6(choice); //  Displays choice 6
            
            while ((choice <= 13) || (choice >= 16))
            {
                invalidChoice(choice);
            }

			system("clear");

            if (choice == 14)   
            {
                display2Then6Then14(choice);  // Displays choice 14

				while ((choice <= 28) || (choice >= 31))
				{
					invalidChoice(choice);
				}

				system("clear");

				if (choice == 29)
				{
					display2Then6Then14Then29(choice);

					while ((choice <= 31) || (choice >= 34))
					{
						invalidChoice(choice);   // Number needs to be 32 or 33
					}

					system("clear");
					
					if (choice == 32)
					{
						displayEnding1();  // Displays ending 1
					}
					if (choice == 33)
					{
						displayEnding1();  // Displays ending 1
					}
				}

				if (choice == 30)
				{
					displayEnding2();  // Displays ending 2
				}
            }
            
            if (choice == 15)
            {
                display2Then6Then15(); // Displays choice 15
            }
        }

        if (choice == 7)    //  Displays choice 7
        {
            display2Then7(choice);

            while ((choice <= 16) || (choice >= 19))
            {
                invalidChoice(choice);  // Numbers needs to be 17 or 18
            }

			system("clear");

            if (choice == 17)
            {
                display2Then7Then17();  // Displays choice 17
            }

            if (choice == 18)
            {
                display2Then7Then18(choice); //  Displays choice 18

				while ((choice <= 31) || (choice >= 34))
				{
					invalidChoice(choice); // Number needs to be 32 or 33
				}

				system("clear");

				if (choice == 32)
				{
					displayEnding1();  // Displays ending 1
				}
				
				if (choice == 33)
				{
					displayEnding1();	// Displays ending 1
				}
            }
        }
    }
}

void invalidChoice(int& choice)
{   
    cout << "Invalid Response: Please try again" << endl;
    cout << "Choose a story line option from the #'s above." << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

// Story page 1   Top One
// ******************************************************************************************************************************
void storyPageOne(int& choice)  
{   
    // Main story line page
    cout << "Bigby Wolf, the senior deputy of the business office also known as the sheriff, gets a call from one of the residents of fable town. Snow White acting as his assistant and senior deputy of investigation. Snow White takes the call for the sheriff, Toad on the other hand, on the phone with Snow White furiously and scared that is calling the business office for help. As described by Toad, the intruder looks to be very tall and carrying an axe. Bigby Wolf starts to raise concerns about Toad's disturbance call. " << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "1 - Go help out Toad and make sure he's okay along with the rest of the residents. " << endl;
    cout << "2 - Ignore Toad's phone call and stay put at the business office. " << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}
// ******************************************************************************************************************************

void displayThen1(int& choice)  
{   
    // If they choose 1
    cout << "Bigby Wolf starts heading over to fable town. He arrives there quickly with a disparity of concerns, to what the situation has escalated between Toad and the rest of the residents of fable town. He immediately sees the problem, and observes that most of the residents' apartments have been ransacked and broken into. He goes over to Toad and he starts asking him a couple of questions about what went on here. Toad is hesitant to say anything to the sheriff. But notices that Toad doesn't have a glamour on " << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "4 - Have empathy for Toad and try to talk out the situation. " << endl;
    cout << "5 - Be impatient with Toad and start asking him about why he doesn't have a glamour on." << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

void displayThen2(int& choice)  
{   
    // If they choose 2
    cout << "As Bigby Wolf ignores Toad's phone call from the business office, Snow White heads down to the lobby to pick up a package that was left in the front lobby for the business office. She immediately runs back up to get the sheriff's attention. Into what it seems like a special package for sheriff. He has never once received a package from someone other than Ichabod Crane. The owner and major deputy of the business office." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "6 - Opens up the unexpected package. " << endl;
    cout << "7 - Doesn't open the package and continues to work. " << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}  

void display1Then4(int& choice)  
{   
    // If they choose 1 then 4
    cout << "Once Bigby Wolf is able to calm down Toad and the rest of the residents of fable town. He starts talking to the sheriff about what was going on here. Toad is hesitant to even say anything to the sheriff, almost if he didn't even know what was going on here anymore. Bigby Wolf starts to investigate the scene of the events. He notices that most of the damage was caused by an axe that was left on the floor. As soon as Bigby Wolf starts heading over to pick up the axe and try to find any clues from where it came from. He's abruptly stopped by Toad and doesn't allow the sheriff to take the axe with him." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "8 - Start questioning Toad about his concerns with axe. " << endl;
    cout << "9 - Just take the axe with you and take it back to the business office for clues." << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}  

void display1Then5(int& choice)   
{   
    // If they choose 1 then 5
    cout << "After arriving at the scene of the events, Bigby Wolf completely forgets about the disturbance call and starts asking Toad on why he doesn't have a glamour on. Bigby begins to say, If the mundies catch some four feet tall toad walking around with a hat on, they're going to freak out and it's going to be a huge mess. But, if you can't get a glamour; it's back to the farm for you Toad!" << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "11 - Will you help Toad get a glamour and talk to Snow White about it." << endl;
    cout << "12 - Arrest Toad for not having a glamour put on in place. " << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}            

void display2Then6(int& choice)   
{   
    // If they choose 2 then 6
    cout << "After opening up the unexpected package that was delivered to the business office, Snow White starts to raise concerns about the unexpected package that was delivered to the sheriff's office. Snow White said , What if someone sends you a package that's been tampered with . Bigby Wolf starts to raise concerns about the unexpected package. But, he makes an effort to speak to the magic mirror that was brought into the business office for discipling magic purposes. Bigby Wolf begins to say to the mirror. Oh magic mirror, please help me unreveal this package here, so I could justify it near. Snow White looks alarmed and concerned as she also raises concerns if opening the package could be a good idea." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "14 - Use the magic mirror to tracked down who's package this was. " << endl;
    cout << "15 - Open the unexpected package to see what's inside. " << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;

}

void display2Then7(int& choice)  
{   
    // If they choose 2 then 7
    cout << "After talking to Snow White about the unexpected package that was left intentionally for Bigby Wolf to open. Bigby Wolf is abruptly stopped by Snow White to what it seems that they might have a major case to deal with at The Blank bar & grill over on 7th and Hope Street. From multiple calls coming from Fable Town residences that are reporting disturbances and vandalism going at the bar. Snow White says, Let's get a move on sheriff." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "17 - Leave the package on his desk to and open it later. " << endl;
    cout << "18 - Dispose of the package. " << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

//   Getting to the climax of the story from branch option 1 of the main story line.
//   ***********************************************************************************************************************************************

void display1Then4Then8(int& choice)  
{   
    // If they choose 1 then 4 then 8
    cout << "As Bigby Wolf begins to talk to Toad about his concerns with the axe. He states, what's your problem, Toad? Why are you so concerned about me taking the axe as evidence for the investigation case? The sheriff notices that Toad wasn't cooperating with all the questions that were presented to him. Bigby began looking around Toad's apartment and looked as if most of the furniture had been moved around. Sheriff Wolf said to Toad, were you moving anytime soon Toad. Toad just nodded his head with a pointless gesture. The Sheriff began to say, Is there something you want to tell me, Toad? We could do this all night Toad, I'm not going anywhere. Toad began to spill out the truth, OKAY FINE, IT WAS THE WOODSMAN OKAY, HE DID IT OKAY! He created this mess in the first place. He told me if I would say anything to anyone, that it would be me that would disappear next from fable town." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "20 - Believe Toad's story and start witness protection for Toad" << endl;
    cout << "21 - Ignore Toad's frustration and his fear of the Woodman's" << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

void display1Then4Then9(int& choice) 
{
    // If they choose 1 then 4 then 9 
    cout << "As the sheriff was investing the scene of the events, Toad was showing a number of signs of fear and trepidation after the events occur. He was still in shock from what had occur. But, Bigby knew that he had to get to the bottom of it. That meant if had to show a little bit of attitude and start his interrogation. He quickly took noted that most damage was caused by the axe that left on the floor of the apartment of Toad.  Without a reason, he initially took the axe and other signs of evidence with him. Toad, becoming really furious and fuming with anger that led him to charge at Bigby Wolf. Toad shouting out, you're not leaving with that axe sheriff, I'll wont let you leave this apartment with that axe." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "23 - We you restrain and arrest Toad take him down to the business office." << endl;
    cout << "24 - Will you try to calm down him." << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

void display1Then5Then11(int& choice) 
{   
    // If they choose 1 then 5 then 11
    cout << "After showing full trust with Toad and talking out with Bigby Wolf about the situation of the glamour not being in place. Toad said, You know one strange thing about the glamour's you guys sell, is that there is a complete expense from us fables to buy every so often. I just bought a car and now I don't have any money for a blooding glamour. The Sheriff responded to Toad by saying,  Yes of course me, Snow White, and Crane will do something about the glamour's prices. Once Bigby Wolf was able to negotiate terms with Toad. He gets a call from Snow White, Hello Sheriff, what's your situation over at Toad's place." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "26 - Do you talk to Snow White about Toad's glamour issues. " << endl;
    cout << "27 - Just give her an update about the situation of the case." << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

void display1Then5Then12()
{
    // Displays ending 1
	displayEnding1();
}

//   Getting to the climax of the story from branch option 2 of the main story line.
//   ***********************************************************************************************************************************************

void display2Then6Then14(int& choice)
{
    // If they choose 2 then 6 then 14 
    cout << "After using the magic mirror to fully investigate the case and track down the Woodsman, the sheriff asks a certain clue about the Woodman's. It seems to repeal the magic mirror from showing you their current location. And soon upon the request has ended from Bigby Wolf. The magic mirror is shattered into many pieces. Once leaving the mirror unsolved along with Bigby Wolf and Snow White without any answers for the rest of fable town to be heard from. But, they get an unexpected call from a fable over at the Blank Bar & Grill. So they both rush out to the call that could be related to the investigation case." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "29 - Dispose of the package and head out to the call over at the bar" << endl;
    cout << "30 - Leave the package on your desk and investigate it later " << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

void display2Then6Then15()
{
    // Display ending 3
	displayEnding1();
}

void display2Then7Then17()
{
    // Display ending 2
	displayEnding2();
}

void display2Then7Then18(int& choice) 
{   
    // If they choose 2 then 6 then 18 
    cout << "After disposing of the unexpected package, the package suddenly catches on fire with a blue dark smoke that appears a symbol of the witch that has been known to give problems to Bigby Wolf. Bigby and Snow noted that the package may be marked with some sort of magic or spell. Snow White concluded, we have to get to the bottom of this as Snow White stated to the sheriff. If fables or witches are using illegal magic and glamors we would have to find out why they started exorting these kinds of magic spells and glamors. The sheriff took note of the entire situation. Snow White asks the sheriff  So what's our next move? Any leads on the case? " << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "32 - Head out to our lead of the case over at the bar." << endl;
    cout << "33 - Or do more investigation on the case." << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

void display2Then6Then14Then29(int& choice)   
{
    cout << "After disposing of the unexpected package, the package suddenly catches on fire with a blue dark smoke that appears a symbol of the witch. Bigby and Snow noted that the package may be marked with some sort of magic or spell. We have to get to the bottom of this as Snow White stated to the sheriff. If fables or witches are using illegal magic and glamorous we would have to find out why. The sheriff took noted of the entire situation. Snow White ask the sheriff  So what's our next move sheriff any leads on the case." << endl;
    cout << endl;
    cout << "Will you: "<< endl;
    cout << endl;
    cout << "32 - Head out to our lead of the case over at the bar." << endl;
    cout << "33 - Or do more investigation on the case." << endl;
    cout << endl;
    cout << "Enter your choice here: " << endl;
    cout << "> "; cin >> choice;
    cout << endl;
}

// Endings 1, 2 and 3 
// *******************************************************************************************************************************************************

void displayEnding1()  // checked
{
    cout << "The sheriff was able to talk to Toad calmly. He was able to get his confession from Toad and other residents that were able to identify the suspect. It was the bloody Woodman's alright. He's the one you want to go after all this. The sheriff got the information needed to solve this investigation. He headed down to the Blank's Bar & Grill. And arrested the Woodman's for endangerment and vandalism. And sheriff Bigby saves the day agian. " << endl;
    cout << endl;
	cout << "----------------------------------The End--------------------------------------" << endl;
}

void displayEnding2()
{   
    cout << "Once getting multiple calls from the business office from different fables complaining about the disturbances going on at a bar. He leaves the package on his desk. And quickly heads out with Snow White to the scene of the events. Crane the owner of the business office. Is caught to his attention that a similar package that had appeared for Bigby Wolf has the same writing on the package when received from his other employee. He had his curiosity about the package. But, ultimately opened the package that was meant for sheriff Wolf in the first place. After completely opening the package he's put into a spell of hypnotism. Crane was unable to walk or speak and as he just lay on the floor and Snow White and the sheriff concluded that Crane wasn't able to break the spell and lays on the floor without a purpose." << endl; 
    cout << endl;
	cout << "---------------------------------The End-----------------------------------" << endl;
}

void displayEnding3()
{
    cout << "After the sheriff opens up the unexpected package, he clears off the packing wraps and cut's it open with a knife. Then, suddenly there's a bright white flash when the package was entirely open. The sheriff was completely taken over by a hypnotizing spell. Snow White and Crane had covered their eyes as soon as the white flash appeared in front of the package. Snow White with a disparity of emotions quickly runs over to check on Bigby Wolf. But, soon notice that sheriff Wolf was unable to speak or even move a muscle due to the hypnotizing spell." << endl;
    cout << endl;
	cout << "-----------------------------------The End---------------------------------------" << endl;
}



















