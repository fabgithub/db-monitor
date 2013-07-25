//
//  NSString+MysqlEscape.h
//  mysql_connector
//
//  Created by Karl Kraft on 6/12/08.
//  Copyright 2008-2013 Karl Kraft. All rights reserved.
//



@interface NSString(MysqlEscape)
- (NSString *)mysqlEscapeInConnection:(MysqlConnection *)connection;

@end
