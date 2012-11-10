//
//  AvstryDetailViewController.h
//  Aviation Story
//
//  Created by James Warmkessel on 11/5/12.
//  Copyright (c) 2012 James Warmkessel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AvstryEpisode.h"

@interface AvstryDetailViewController : UIViewController <UISplitViewControllerDelegate>


@property (strong, nonatomic) AvstryEpisode *detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (weak, nonatomic) IBOutlet UILabel *titleItem;
@property (weak, nonatomic) IBOutlet UITextView *descItem;
@property (weak, nonatomic) IBOutlet UILabel *urlItem;
@property (weak, nonatomic) IBOutlet UIImageView *imageItem;

@end
