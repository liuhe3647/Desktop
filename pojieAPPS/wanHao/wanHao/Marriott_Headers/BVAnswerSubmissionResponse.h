//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BVSubmissionResponse.h"

@class BVSubmittedAnswer;

@interface BVAnswerSubmissionResponse : BVSubmissionResponse
{
    BVSubmittedAnswer *_answer;
}

@property(retain) BVSubmittedAnswer *answer; // @synthesize answer=_answer;
- (void).cxx_destruct;
- (id)initWithApiResponse:(id)arg1;

@end

