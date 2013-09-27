//
//  WallPicturesViewController.h
//  ImageAlbum
//
//  Created by David Yin on 2013-07-24.
//  Copyright (c) 2013 David Yin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WallPicturesViewController : UIViewController


@property (nonatomic, strong) IBOutlet UIScrollView *wallScroll;

-(IBAction)logoutPressed:(id)sender;

@end
