//
//  SVAddSpaceObjectViewController.h
//  Out of this World
//
//  Created by Benny Tan on 8/17/14.
//  Copyright (c) 2014 Squarevibe Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SVSpaceObject.h"

@protocol SVAddSpaceObjectViewControllerDelegate <NSObject>

@required

- (void)addSpaceObject:(SVSpaceObject *)spaceObject;
- (void)didCancel;

@end

@interface SVAddSpaceObjectViewController : UIViewController

@property (weak, nonatomic) id <SVAddSpaceObjectViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingFactTextField;
- (IBAction)cancelButtonPressed:(id)sender;
- (IBAction)addButtonPressed:(id)sender;

@end
