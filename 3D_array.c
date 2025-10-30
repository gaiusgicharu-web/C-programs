/*
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
DESCRIPTION: 2D array
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int chain[3][5][10];
    
    srand(time(NULL));
    
    int branch,floor,room;
    int total_occupied=0;
    for(branch=0;branch<3;branch++){
        for(floor=0;floor<5;floor++){
            for(room=0;room<10;room++){
                chain[branch][floor][room]=rand()%2;
            }
        }
    }
    for(branch=0;branch<3;branch++){
        for(floor=0;floor<5;floor++){
            for(room=0;room<10;room++){
                if(chain[branch][floor][room]==1){
                    total_occupied++;
            }
            }
        }
    }
    printf(" Total number of occupied rooms across all branches:%d rooms\n",total_occupied);
    
    return 0;
}
    

    