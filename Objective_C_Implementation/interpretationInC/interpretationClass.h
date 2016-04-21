//
//  interpretationClass.h
//  interpretationInC
//
//  Created by Maroof Mohammed Farooq on 4/15/16.
//  Copyright © 2016 Maroof Mohammed Farooq. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface interpretationClass : NSObject



@property NSMutableArray *symName;
@property NSMutableArray *breakList;
@property NSMutableArray *skipList;
@property NSMutableDictionary *rawData;
@property NSNumber *processedDataRunKey;
@property NSNumber *numberOfElements;
    
-(id)initWithRawData:(NSMutableDictionary *)inputData;
-(NSMutableDictionary*)processedData;
-(NSNumber*)evaluate;
-(NSString*)subExpressionRouting:(NSString*)keys inputKeyRange:(NSMutableArray*)keyRange inputData:(NSMutableDictionary*)data;
-(NSMutableDictionary*)classificationEngine:(NSMutableDictionary*)tempDict;
-(NSString*)stringGenerator:(NSMutableArray*)keyRange inputData:(NSMutableDictionary*)data;


@end
