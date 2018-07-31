#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){   
    cout << "歡迎來到2048!請將0視為空格";
    system("Pause");
    system("cls");
	int ch1=0, ch2 = 0, lose = 1, game[4][4] = {0}, g1, g2, g3, sim = 0, temp;
    srand ( time(NULL) );
    //第一次產生 
    srand ( time(NULL) );
    g1 = ( rand() % 4 );
    g2 = ( rand() % 87 % 4 );
    g3 = ( rand() % 662 % 2 );
    if ( g3 == 1 ){
		game[g1][g2] = 4;
	} else {
		game[g1][g2] = 2;
	}
    while (lose == 1)
    {
		//產生
		int x;
		while ( sim == 0 ){
			srand ( time(NULL) + x );
        	g1 = ( rand() % 4 );
        	g2 = ( rand() % 87 % 4 );
        	g3 = ( rand() % 662 % 2 );
        	if ( g3 == 1 ){
        	if ( game[g1][g2] == 0 ){
        		game[g1][g2] = 4;
        		sim = 1;
				}
			} else {
				if ( game[g1][g2] == 0){
					game[g1][g2] = 2;
					sim = 1;
				}				
			}
			x ++;
		} 
        sim = 0;
		//輸出 
		
		for ( int t = 0 ; t < 4 ; t ++ ){
        	for ( int t2 = 0 ; t2 < 4 ; t2 ++ ){
        		cout << game[t][t2] << "	";
			}
			cout << "\n";
		}
		//控制 
		if ( ch1=getch() ){ 
	        ch2=getch();
	        switch (ch2){
	        case 72:
	        	for ( int t = 0 ; t < 4 ; t ++ ){
	        		int in = 0, s = 0;
	        		if ( game[s][t] != 0){
	        			for ( int s2 = 1 + s ; s2 < 4 ; s2 ++){
	        				if ( game[s][t] == game[s2][t] ){
	        					temp = game[s][t] * 2;								
	        					game[s][t] = 0;
	        					game[s2][t] = 0;
	        					game[in][t] = temp;
	        					s = s2 + 1;
	        					s2 += 2;
							}
						}
					}
					s ++;
				}
				//↑;
				break;  
	        case 80:
				//↓;
				break; 
	        case 75:
				//←;
				break;
	        case 77:
				//→;
				break;                                   
	        default:
	        	system("cls");
				cout << "ERROR!";
				system("Pause");				
				continue;	                
        	}
        }
        //輸的判斷
		lose = 0;
		for ( int t = 0 ; t < 4 ; t ++ ){
        	for ( int t2 = 0 ; t2 < 4 ; t2 ++ ){
        		if ( game[t][t2] == 0 ){
        			lose = 1;
				}
			} 
    	}
    	system("cls");
	}
	cout << "你輸了!";
	system("Pause");
	return 0;
}