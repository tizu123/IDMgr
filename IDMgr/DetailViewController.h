//
//  DetailViewController.h
//  IDMgr
//
//  Created by パパ on 2012/10/26.
//  Copyright (c) 2012年 izu12.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
