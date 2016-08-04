//
//  ViewController.h
//  ATTicTacToe
//
//  Created by Felix ITs 01 on 02/08/16.
//  Copyright © 2016 Aashish Tamsya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int numberOfTurns,currentPlayer;
    BOOL isGameFinished;
    
    NSArray *winningCombinations;
    NSMutableArray *currentState;

}

- (IBAction)buttonTapped:(id)sender;



@end

