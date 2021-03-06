//
//  Photo.h
//  iFlickr
//
//  Created by VitaliyP on 08.10.14.
//  Copyright (c) 2014 VitaliyP. All rights reserved.
//

#import <Foundation/Foundation.h>
@import MapKit;

@interface Photo : NSObject <MKAnnotation>

@property (nonatomic, strong) NSString *owner;
@property (nonatomic, strong) NSString *dateTaken;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) NSString *urlImageSquare;
@property (nonatomic, strong) NSString *urlImageOriginal;
@property (nonatomic, strong) NSString *urlImageLarge;
@property (nonatomic) CLLocationCoordinate2D coordinate;

+(instancetype)photoWithData:(NSDictionary *)data;

@end
