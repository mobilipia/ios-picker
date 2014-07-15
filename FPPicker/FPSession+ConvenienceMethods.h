//
//  FPSession+ConvenienceMethods.h
//  FPPicker
//
//  Created by Ruben Nine on 15/07/14.
//  Copyright (c) 2014 Filepicker.io (Couldtop Inc.). All rights reserved.
//

#import "FPSession.h"

@interface FPSession (ConvenienceMethods)

/**
   Returns a session object suited for file uploads
   with API key and security options already initialized.
 */
+ (instancetype)sessionForFileUploads;

@end