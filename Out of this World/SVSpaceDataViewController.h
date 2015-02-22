//
//  SVSpaceDataViewController.h
//  Out of this World
//
//  Created by Benny Tan on 8/16/14.
//  Copyright (c) 2014 Squarevibe Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SVSpaceObject.h"

@interface SVSpaceDataViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) SVSpaceObject *spaceObject;

@end
