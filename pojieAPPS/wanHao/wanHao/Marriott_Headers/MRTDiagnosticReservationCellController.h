//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTDiagnosticCellController.h"

@class MRTReservation;

@interface MRTDiagnosticReservationCellController : MRTDiagnosticCellController
{
    MRTReservation *_reservation;
}

+ (void)registerCellForTableView:(id)arg1;
@property(readonly, nonatomic) MRTReservation *reservation; // @synthesize reservation=_reservation;
- (void).cxx_destruct;
- (id)exportedText;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithDiagnosticViewController:(id)arg1 reservation:(id)arg2;

@end

