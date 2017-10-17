//
//  POITableViewCellIdentifier.m
//  baiduMapTest
//
//  Created by KT on 2016/3/29.
//  Copyright © 2016年 KT. All rights reserved.
//

#import "POITableViewCell.h"

@interface POITableViewCell ()


@end

@implementation POITableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    self.selectedImageView.hidden = YES;
   
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
