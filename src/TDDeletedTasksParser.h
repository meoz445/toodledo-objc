//
//  TDDeletedTasksParser.h
//  ToodledoAPI
//
//  Created by Michael Petritsch on 17.11.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDParser.h"
#import "GtdTask.h"

@interface TDDeletedTasksParser : TDParser {
@private
	GtdTask *currentTask;
}

@end
