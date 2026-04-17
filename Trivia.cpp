#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){
	string question[3][15] = {
		{
			"What is the square root of 169?",
			"When is Quaid-e-Azam's birthday?",
			"Who is the current prime minister of Pakistan?",
			"I ___ good at climbing trees.",
			"In which direction does the sun rise?",
			"What does RAM stand for?",
			"What is the national sport of Pakistan?",
			"What is the largest city of Punjab by population?",
			"Who invented the telephone?",
			"What is 'main()' in C++?",
			"Ten years is called a ",
			"A singleton set is a set that contains _ elements",
			"What is the latest iphone model?",
			"FSc stands for",
			"Which of these is the most downloaded app on Play Store?"
		},
		{
			"Which is the largest planet in the solar system?",
			"What is the other name used for computer programs and information?",
			"When did Pakistan first win the Cricket World Cup title?",
			"What is the partial  derivative of  2x + y with respect of z",
			"What is the highest grossing movie of all time?",
			"Who painted the Mona Lisa?",
			"Convert 21 from Decimal to Octal",
			"Who invented C++?",
			"HITEC University was launched in ",
			"What was the world's first web browser?",
			"Which of these is NOT a C++ keyword?",
			"Which of these is a noble gas?",
			"Who discovered calculus?",
			"Which of these is the strongest currency?",
			"What is the world's first blockchain currency?"
		},
		{
			"What does EEPROM stand for?",
			"Which planet comes after Pluto",
			"Who is the founder of Apple?",
			"Who is the current Prime Minister of North Korea",
			"What is the strongest phone in the world",
			"How many Makki surahs are there?",
			"The country Panama is in which continent?",
			"What type of language is C++?",
			"Who was the 11th Prime Minister of Pakistan?",
			"The word 'sofa' is derived from which language?",
			"Who is the father of Urdu poetry?",
			"Who is considered the founding father of quantum physics?",
			"When was the first constitution of Pakistan enforced?",
			"Complete the phrase: \"Out of the frying pan, into the _______\"",
			"What insect shorted out an early supercomputer and inspired the \n\t\t\tterm 'computer bug'?"
		}
	};
	
	string options[3][15][4] = {
		{
			{"12","13","14","15"},
			{"20th Dec","24th Dec","25th Dec","23rd March"},
			{"Shahbaz Sharif (Unfortunately)","Bilawal (Baji) Bhutto","Waseem Akram","Imran Khan (Inshallah)"},
			{"is","am","be","None of these"},
			{"North","South","East","West"},
			{"Ramzan Access Market","Random Account Memory","Random Access Memory","Random Access Memoire"},
			{"Hockey","Kabaddi","Football","Cricket"},
			{"Lahore","Faisalabad","Rawalpindi","Gujranwala"},
			{"Thomas Alva Edison","Bilawal (Baji) Bhutto","Nikola Tesla","Alexander Graham Bell"},
			{"Variable","Header","Library","Function"},
			{"Olympiad","Century","Decade","Millenia"},
			{"Zero","One","Two","More than two"},
			{"16","15","14","13"},
			{"Fundamental Science","Federal Schools and Colleges","Faculty of Science","Federal Science"},
			{"Youtube","Whatsapp","Facebook","Instagram"}
		},
		{
			{"Saturn","Jupiter","Neptune","Uranus"},
			{"Output","Process","Software","Memory"},
			{"1992","1994","1996","1998"},
			{"x","y","2","None of these"},
			{"Titanic","Avatar","Star Wars: The Force Awakens","Avengers: Endgame"},
			{"Pablo Picasso","Leonardo da Vinci","Michaelangelo","Raphael"},
			{"15","19","23","25"},
			{"Bjarne Stroustrup","Bill Gates","Dennis Ritchie","Mark Zuckerburg"},
			{"2005","2006","2007","2008"},
			{"WorldWideWeb","HTML","Internet Explorer","Local Area Network"},
			{"catch","public","friend","extract"},
			{"Radon","Silicon","Boron","Iron"},
			{"Gauss","Einstein","Pascal","Newton"},
			{"Iranian Riyal","Pakistani Rupee","South Korean Won","Uzbekistani Som"},
			{"Bitcoin","Cryptocurrency","Octa FX","Forex"},
		},
		{
			{"Electronic Erasable Programmable ROM","Erasable Electronic Programmable ROM","Essential Erasable Program ROM","None"},
			{"Neptune","Earth","Jupiter","None of these"},
			{"Bill Gates","Mark Zukerburg","Steve Jobs","Elon Musk"},
			{"Kim Nam Jun","Kim Jong Un","Kim Jong Il","Kim Ill Sung"},
			{"Nokia 3310","Nokia 3312","Nokia 3311","Nokia 3313"},
			{"77","28","86","49"},
			{"Europe","North America","South America","Asia"},
			{"Object Oriented Programming Language","Procedural Programming Language","Both A and B","None of these"},
			{"Muhammad Khan Junejo","Benazir Bhutto","Nawaz Sharif","Mir Zafarullah Khan Jamali"},
			{"English","Urdu","Arabic","French"},
			{"Wali Dakkani","Mir Taqi Mir","Faiz Ahmed Faiz","Mirza Rafi Sauda"},
			{"Neils Bohr","Albert Einstein","Max Planck","All of these"},
			{"8th June 1956","23rd March 1956","14th August 1956","25th December 1956"},
			{"Oven","Kitchen","Chimney","Fire"},
			{"Moth","Cockroach","Fly","Beetle"}
		}
	};
	
	string answer[3][15] = {
		{
			"13","25th Dec","Shahbaz Sharif (Unfortunately)","am","East","Random Access Memory","Hockey","Lahore","Alexander Graham Bell",
			"Function","Decade","One","14","Faculty of Science","Youtube"
		},
		{
			"Jupiter","Software","1992","None of these","Avatar","Leonardo da Vinci","25","Bjarne Stroustrup","2007","WorldWideWeb",
			"extract","Radon","Newton","Pakistani Rupee","Bitcoin"
		},
		{
			"Electronic Erasable Programmable ROM","None of these","Steve Jobs","Kim Jong Un","Nokia 3310","86","North America",
			"Both A and B","Benazir Bhutto","Arabic","Wali Dakkani","All of these","23rd March 1956","Fire","Moth"
		}
	};
	
	string congrats[3] = {"Correct", "Congrats. You guessed the correct answer", "Correct Answer. Good job!"};
	
	int start, difficulty, response, end, lives = 2, current_score = 0, score[10];
	string name[10];
	
	for(int i=0; i<10; i++) {
		score[i] = 0;
		name[i] = '-';
	}
	
	while(true) {
		system("cls");
		cout<<"\n\t\t\t-------------------------------------------------------\n";
		cout<<"\t\t\t|\t\t   The Trivia Game\t\t      |\n";
		cout<<"\t\t\t-------------------------------------------------------\n";
		cout<<"\n\n\t\t1. Play";
		cout<<"\n\t\t2. Quit\n";
		cout<<"\n\t\tEnter the number: ";
		while(true) {
			cin>>start;
			if(start == 1) {
				break;
			} else if(start == 2) {
				system("cls");
				cout<<"\n\n\n\t\t\t\tThank you for playing\n\n\n\n";
				return 0;
			} else {
				cout<<"\n\t\tInvalid choice. Enter an available option: ";
			}
		}
	
		system("cls");
		cout<<"\n\n\t\t\t\tSolve 15 questions to win \n\t\t\t\tYou have 2 lives";
		cout<<"\n\n\t\t\t\tChoose your difficulty level:";
		cout<<"\n\n\n\t\t\tDifficulty\t\tPoints per question";
		cout<<"\n\n\t\t\t1. Easy\t\t\t1 point";
		cout<<"\n\t\t\t2. Medium\t\t2 points";
		cout<<"\n\t\t\t3. Hard\t\t\t3 points";
		cout<<"\n\t\t\t4. Back";
		while(true) {
			cout<<"\n\n\t\t\t>";
			cin>>difficulty;
			if(difficulty < 1 || difficulty > 4) {
				cout<<"\n\t\t\t\tInvalid choice";
			} else {
				break;
			}
		}
		if(difficulty == 4) {
			continue;
		}
		
		system("cls");
		cout<<"\n\n\n\t\t\t\t\t\t";
		if(difficulty == 1) {
			cout<<"Good luck...";
		} else if(difficulty == 2) {
			cout<<"Tum se na ho paye ga...";
		} else {
			cout<<"Jeo!";
		}
		getch();
		
		system("cls");
		
		for(int i=0; i<15; i++) {
			cout<<"Press 0 to Exit\t\t\t\tLives = "<<lives<<"\t\t\tScore = "<<current_score;
			cout<<"\n\n\n\t\t\tQuestion "<<i+1<<": "<<question[difficulty - 1][i]<<"\n\n\t\t";
			for(int j=0; j<4; j++) {
				cout<<j+1<<". "<<options[difficulty - 1][i][j]<<"\n\t\t";
			}
			cout<<"\n\t\t>";
			cin>>response;
			
			if(response < 0 || response > 4) {
				cout<<"\n\t\tInvalid Choice";
				getch();
				system("cls");
				i--;
				continue;
			}
			if(response == 0) {
				break;
			} else if(options[difficulty - 1][i][response - 1] == answer[difficulty - 1][i]) {
				cout<<"\a\n\t\t"<<congrats[difficulty - 1];
				current_score += difficulty;
			} else {
				cout<<"\n\t\tIncorrect Answer\n\n\t\t";
				lives--;
				if(lives > 0) {
					cout<<"You have "<<lives<<" lives remaining";
				} else {
					cout<<"You don't have any more lives left";
					getch();
					break;
				}
			}
			getch();
			system("cls");
			
			if(i == 14) {
				if(difficulty == 3) {
					if(current_score > 75) {
						cout<<"\a\n\t\t\t\tCongratulations!";
						getch();
						system("cls");
						cout<<"\n\t\t\t\tYou have completed the game!";
						getch();
						system("cls");
						cout<<"\n\t\tWritten by:\t\tM. Saad Farooqui";
						cout<<"\n\t\tQuestions povided by:\t\tShahzaib Aiwan\n\t\t\t\t\tMuhammad Hammad";
					} else {
						cout<<"\n\n\t\t\tCongratulations! \n\t\tYou have completed this level";
					}
					getch();
					break;
				} else {
					cout<<"\n\n\t\t\tCongratulations! \n\t\tYou have completed this level";
					cout<<"\n\n\t\tGo to next level?";
					cout<<"\n\t\t1. Yes \n\t\t2. No";
					while(true) {
						cout<<"\n\n\t\t>";
						cin>>end;
						if(end == 1) {
							lives++;
							difficulty++;
							i = -1;
							system("cls");
							cout<<"\n\n\n\t\t\t\tYou have gained an extra life!";
							getch();
							system("cls");
							break;
						} else if(end == 2) {
							break;
						}
						 else if(end > 2 || end < 1) {
							cout<<"Invalid choice";
						}
					}
				}
				if(end == 2) {
					break;
				}
			}
		}
		
		if(response == 0) {
			continue;
		}
		
		
		system("cls");
		for(int i=0; i<10; i++) {
			if(score[i] < current_score) {
				score[i] = current_score;
				cout<<"\n\t\tEnter your name: ";
				cin>>name[i];
				system("cls");
				break;
			}
		}
		
		cout<<"\n\t\tLeaderboard";
		cout<<"\n\n\t\tName\t\tScore";
		for(int i=0; i<10; i++) {
			cout<<"\n\t\t"<<name[i]<<"\t\t"<<score[i];
		}
		getch();
		
		lives = 2;
		current_score = 0;
		end = 0;
	}
	return 0;
}
