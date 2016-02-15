//
//  ViewController.h
//  CameraApp
//
//  Created by dev on 12/11/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)onTakePhoto:(id)sender;
- (IBAction)OnSelectPhoto:(id)sender;


@end

