//
//  ChildTableViewController.h
//  NavController Core Data Version
//
//  Created by Aditya Narayan on 9/23/14.
//  Copyright (c) 2014 NM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Company.h"

@interface ChildTableViewController : UITableViewController <UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UILabel *childVCTitleLabel;

@property (nonatomic) Company *selectedCompany;

@end