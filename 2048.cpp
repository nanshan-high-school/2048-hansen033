#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){   
    cout << "歡迎來到2048!請用方向鍵\n*本遊戲規則為如果沒有空格時進行一個無效輸入便會輸";
    system("Pause");
    system("cls");
	int ch1=0, ch2 = 0, lose = 1, game[4][4] = {0}, g1, g2, g3, sim = 0, loselose = 1;
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
    while ( lose == 1 || loselose == 1 ){		
		//產生2或4 
		int x;
		while ( sim == 0 && loselose == 1){
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
        loselose = 0;//死的判斷(滿了不一定會死)+無效輸入判斷 
		//輸出 		
		for ( int t = 0 ; t < 4 ; t ++ ){
			cout << "I	";
        	for ( int t2 = 0 ; t2 < 4 ; t2 ++ ){
        		if ( game[t][t2] != 0 ){
        			cout << game[t][t2] << "	I	";
				} else {
					cout << " 	I	";
				}
			}
			cout << "\n\n";
		}
		//控制 
		if ( ch1=getch() ){ 
	        ch2=getch();
	        switch (ch2){
	        case 72:
	        	for ( int t = 0 ; t < 4 ; t ++ ){
	        		if ( game[0][t] == game[1][t] && game[1][t] != 0 ){
	        			game[0][t] = game[0][t] * 2;
	        			game[1][t] = 0;
						loselose = 1; 
					} else if ( game[0][t] == game[2][t] && game[1][t] == 0 && game[2][t] != 0 ){
	        			game[0][t] = game[0][t] * 2;
	        			game[2][t] = 0; 
						loselose = 1; 
					} else if ( game[0][t] == game[3][t] && game[1][t] == 0 && game[2][t] == 0 && game[3][t] != 0 ){
	        			game[0][t] = game[0][t] * 2;
	        			game[3][t] = 0; 
						loselose = 1; 
					}
					if ( game[1][t] == game[2][t] && game[2][t] != 0 ){
	        			game[1][t] = game[1][t] * 2;
	        			game[2][t] = 0; 
						loselose = 1; 
					} else if ( game[1][t] == game[3][t] && game[2][t] == 0 && game[3][t] != 0 ){
	        			game[1][t] = game[1][t] * 2;
	        			game[3][t] = 0; 
						loselose = 1; 
					}
					if ( game[2][t] == game[3][t] && game[3][t] != 0 ){
	        			game[2][t] = game[2][t] * 2;
	        			game[3][t] = 0; 
						loselose = 1; 
					}
					for ( int t2 = 0 ; t2 < 3 ; t2 ++ ){
						if ( game[0][t] == 0 && game[1][t] != 0 ){
							game[0][t] = game[1][t];
							game[1][t] = 0;
							loselose = 1; 
						}
						if ( game[1][t] == 0 && game[2][t] != 0 ){
							game[1][t] = game[2][t];
							game[2][t] = 0;	
							loselose = 1; 
						}
						if ( game[2][t] == 0 && game[3][t] != 0 ){
							game[2][t] = game[3][t];
							game[3][t] = 0;
							loselose = 1; 
						}
					}
				}
				//↑;
				break;  
	        case 80:
	        	for ( int t = 0 ; t < 4 ; t ++ ){
	        		if ( game[3][t] == game[2][t] && game[3][t] != 0 ){
	        			game[3][t] = game[3][t] * 2;
	        			game[2][t] = 0; 
	        			loselose = 1; 
					} else if ( game[3][t] == game[1][t] && game[2][t] == 0 && game[3][t] != 0 ){
	        			game[3][t] = game[3][t] * 2;
	        			game[1][t] = 0; 
	        			loselose = 1; 
					} else if ( game[3][t] == game[0][t] && game[2][t] == 0 && game[1][t] == 0 && game[3][t] != 0 ){
	        			game[3][t] = game[3][t] * 2;
	        			game[0][t] = 0; 
	        			loselose = 1; 
					}
					if ( game[2][t] == game[1][t] && game[2][t] != 0 ){
	        			game[2][t] = game[2][t] * 2;
	        			game[1][t] = 0; 
	        			loselose = 1; 
					} else if ( game[2][t] == game[0][t] && game[1][t] == 0 && game[2][t] != 0 ){
	        			game[2][t] = game[2][t] * 2;
	        			game[0][t] = 0; 
	        			loselose = 1; 
					}
					if ( game[1][t] == game[0][t] && game[1][t] != 0 ){
	        			game[1][t] = game[1][t] * 2;
	        			game[0][t] = 0; 
	        			loselose = 1; 
					}
					for ( int t2 = 0 ; t2 < 3 ; t2 ++ ){
						if ( game[3][t] == 0 && game[2][t] != 0 ){
							game[3][t] = game[2][t];
							game[2][t] = 0;
	        				loselose = 1; 
						}
						if ( game[2][t] == 0 && game[1][t] != 0 ){
							game[2][t] = game[1][t];
							game[1][t] = 0;
	        				loselose = 1; 
						}
						if ( game[1][t] == 0 && game[0][t] != 0 ){
							game[1][t] = game[0][t];
							game[0][t] = 0;
	        				loselose = 1; 
						}
					}
				}
				//↓;
				break; 
	        case 75:
	        	for ( int t = 0 ; t < 4 ; t ++ ){
	        		if ( game[t][0] == game[t][1] && game[t][0] != 0 ){
	        			game[t][0] = game[t][0] * 2;
	        			game[t][1] = 0; 
	        			loselose = 1; 
					} else if ( game[t][0] == game[t][2] && game[t][1] == 0 && game[t][0] != 0 ){
	        			game[t][0] = game[t][0] * 2;
	        			game[t][2] = 0; 
	        			loselose = 1; 
					} else if ( game[t][0] == game[t][3] && game[t][1] == 0 && game[t][2] == 0 && game[t][0] != 0 ){
	        			game[t][0] = game[t][0] * 2;
	        			game[t][3] = 0; 
	        			loselose = 1; 
					}
					if ( game[t][1] == game[t][2] && game[t][1] != 0 ){
	        			game[t][1] = game[t][1] * 2;
	        			game[t][2] = 0; 
	        			loselose = 1; 
					} else if ( game[t][1] == game[t][3] && game[t][2] == 0 && game[t][1] != 0 ){
	        			game[t][1] = game[t][1] * 2;
	        			game[t][3] = 0; 
	        			loselose = 1; 
					}
					if ( game[t][2] == game[t][3] && game[t][2] != 0 ){
	        			game[t][2] = game[t][2] * 2;
	        			game[t][3] = 0; 
	        			loselose = 1; 
					}
					for ( int t2 = 0 ; t2 < 3 ; t2 ++ ){
						if ( game[t][0] == 0 && game[t][1] != 0 ){
							game[t][0] = game[t][1];
							game[t][1] = 0;
	        				loselose = 1; 
						}
						if ( game[t][1] == 0 && game[t][2] != 0 ){
							game[t][1] = game[t][2];
							game[t][2] = 0;
	        				loselose = 1; 
						}
						if ( game[t][2] == 0 && game[t][3] != 0 ){
							game[t][2] = game[t][3];
							game[t][3] = 0;
	        				loselose = 1; 
						}
					}
				}
				//←;
				break;
	        case 77:
	        	for ( int t = 0 ; t < 4 ; t ++ ){
	        		if ( game[t][3] == game[t][2] && game[t][3] != 0 ){
	        			game[t][3] = game[t][3] * 2;
	        			game[t][2] = 0; 
	        			loselose = 1; 
					} else if ( game[t][3] == game[t][1] && game[t][2] == 0 && game[t][3] != 0 ){
	        			game[t][3] = game[t][3] * 2;
	        			game[t][1] = 0; 
	        			loselose = 1; 
					} else if ( game[t][3] == game[t][0] && game[t][2] == 0 && game[t][1] == 0 && game[t][3] != 0 ){
	        			game[t][3] = game[t][3] * 2;
	        			game[t][0] = 0; 
	        			loselose = 1; 
					}
					if ( game[t][2] == game[t][1] && game[t][2] != 0 ){
	        			game[t][2] = game[t][2] * 2;
	        			game[t][1] = 0; 
	        			loselose = 1; 
					} else if ( game[t][2] == game[t][0] && game[t][1] == 0 && game[t][2] != 0 ){
	        			game[t][2] = game[t][2] * 2;
	        			game[t][0] = 0; 
	        			loselose = 1; 
					}
					if ( game[t][1] == game[t][0] && game[t][1] != 0 ){
	        			game[t][1] = game[t][1] * 2;
	        			game[t][0] = 0; 
	        			loselose = 1; 
					}
					for ( int t2 = 0 ; t2 < 3 ; t2 ++ ){
						if ( game[t][3] == 0 && game[t][2] != 0 ){
							game[t][3] = game[t][2];
							game[t][2] = 0;
	        			loselose = 1; 
						}
						if ( game[t][2] == 0 && game[t][1] != 0 ){
							game[t][2] = game[t][1];
							game[t][1] = 0;
	        			loselose = 1; 
						}
						if ( game[t][1] == 0 && game[t][0] != 0 ){
							game[t][1] = game[t][0];
							game[t][0] = 0;
	        			loselose = 1; 
						}
					}
				}
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
