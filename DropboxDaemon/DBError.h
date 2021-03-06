//
//  DBError.h
//  DropboxSDK
//
//  Created by Brian Smith on 7/21/10.
//  Copyright 2010 Dropbox, Inc. All rights reserved.
//

/* This file contains error codes and the dropbox error domain */

#import <Foundation/Foundation.h>

extern NSString* DBErrorDomain;

// Error codes in the dropbox.com domain represent the HTTP status code if less than 1000
typedef enum {
    DBErrorNone = 0,
    DBErrorGenericError = 1000,
    DBErrorFileNotFound,
    DBErrorInsufficientDiskSpace,
} DBErrorCode;
