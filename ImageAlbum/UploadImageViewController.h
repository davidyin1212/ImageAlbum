//
//  UploadImageViewController.h
//  ImageAlbum
//
//  Created by David Yin on 2013-07-24.
//  Copyright (c) 2013 David Yin. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "Constants.h"



@interface UploadImageViewController : UIViewController <UIPickerViewDelegate, UITextFieldDelegate>


@property (nonatomic, strong) IBOutlet UIImageView *imgToUpload;
@property (nonatomic, strong) IBOutlet UITextField *commentTextField;
@property (nonatomic, strong) NSString *username;
@property (weak, nonatomic) IBOutlet UIProgressView *progressBar;

-(IBAction)selectPicturePressed:(id)sender;

@end
