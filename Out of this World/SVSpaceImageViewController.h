//
//  SVSpaceImageViewController.h
//  Out of this World
//
//  Created by Benny Tan on 8/12/14.
//  Copyright (c) 2014 Squarevibe Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SVSpaceObject.h"

@interface SVSpaceImageViewController : UIViewController <UIScrollViewDelegate>


@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) SVSpaceObject *spaceObject;

@end
