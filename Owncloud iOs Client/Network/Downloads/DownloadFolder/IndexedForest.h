//
//  IndexedForest.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 02/10/15.
//
//

/*
 Copyright (C) 2014, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import "CWLOrderedDictionary.h"
@class FileDto;

@interface IndexedForest : NSObject

@property (nonatomic, strong) CWLOrderedDictionary *treeDictionary;

- (void) addFileToTheForest:(FileDto*) file;
- (void) removeFileFromTheForest:(FileDto *) file;
- (CWLOrderedDictionary *) getDictionaryOfTreebyKey:(NSString *) key;
- (BOOL) isFolderPendingToBeDownload:(FileDto *) folder;


@end