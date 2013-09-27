//
//  LoginViewController.h
//  ImageAlbum
//
//  Created by David Yin on 2013-07-23.
//  Copyright (c) 2013 David Yin. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface LoginViewController : UIViewController


@property (nonatomic, strong) IBOutlet UITextField *userTextField;
@property (nonatomic, strong) IBOutlet UITextField *passwordTextField;


-(IBAction)logInPressed:(id)sender;

@end
