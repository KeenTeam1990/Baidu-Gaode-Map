//
//  AppDelegate.h
//  GaodeMaptest
//
//  Created by  KT on 16/3/31.
//  Copyright © 2016年 KT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI_Map/BMKMapView.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    BMKMapManager* _mapManager;
}
@property (strong, nonatomic) UIWindow *window;


@end

