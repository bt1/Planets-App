//
//  SVAddSpaceObjectViewController.m
//  Out of this World
//
//  Created by Benny Tan on 8/17/14.
//  Copyright (c) 2014 Squarevibe Inc. All rights reserved.
//

#import "SVAddSpaceObjectViewController.h"

@interface SVAddSpaceObjectViewController ()

@end

@implementation SVAddSpaceObjectViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    UIImage *orionImage = [UIImage imageNamed:@"Orion.jpg"];
    self.view.backgroundColor = [UIColor colorWithPatternImage:orionImage];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)cancelButtonPressed:(id)sender
{
    [self.delegate didCancel];
}

- (IBAction)addButtonPressed:(id)sender
{
    SVSpaceObject *newSpaceObject = [self returnNewSpaceObject];
    [self.delegate addSpaceObject:newSpaceObject];
}

- (SVSpaceObject *)returnNewSpaceObject
{
    SVSpaceObject *addedSpaceObject = [[SVSpaceObject alloc]init];
    addedSpaceObject.name = self.nameTextField.text;
    addedSpaceObject.nickname = self.nicknameTextField.text;
    addedSpaceObject.diameter = [self.diameterTextField.text floatValue];
    addedSpaceObject.temperature = [self.temperatureTextField.text floatValue];
    addedSpaceObject.numberOfMoons = [self.numberOfMoonTextField.text intValue];
    addedSpaceObject.interestFact = self.interestingFactTextField.text;
    addedSpaceObject.spaceImage = [UIImage imageNamed:@"EinsteinRing.jpg"];
    
    return addedSpaceObject;
}









@end
