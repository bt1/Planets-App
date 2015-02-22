//
//  SVOuterSpaceTableViewController.h
//  Out of this World
//
//  Created by Benny Tan on 8/11/14.
//  Copyright (c) 2014 Squarevibe Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SVAddSpaceObjectViewController.h"

@interface SVOuterSpaceTableViewController : UITableViewController <SVAddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic)NSMutableArray *planets;
@property (strong, nonatomic)NSMutableArray *addedSpaceObjects;

@end
