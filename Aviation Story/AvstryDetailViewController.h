//
//  AvstryDetailViewController.h
//  Aviation Story
//
//  Created by James Warmkessel on 11/5/12.
//  Copyright (c) 2012 James Warmkessel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AvstryDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
