#!/usr/bin/perl

use strict;
use warnings;


while (<STDIN>) {
	$_ =~ qr/^(\d+)\s+(\d+)\s+(\w+)/;
	if( $1 && $2) {
		unless ($1 == $2) {
			print $3 . "\n";
		}
	}
}

