//
//  POITableViewCellIdentifier.h
//  baiduMapTest
//
//  Created by KT on 2016/3/29.
//  Copyright © 2016年 KT. All rights reserved.
//



#import <UIKit/UIKit.h>

@interface POITableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *infoLabel;
@property (nonatomic, weak) IBOutlet UIImageView *selectedImageView;

@end
