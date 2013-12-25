//
//  DetailViewController.h
//  MasterDetailProject
//
//  Created by Dan English on 12/24/2013.
//  Copyright (c) 2013 Dan English. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
