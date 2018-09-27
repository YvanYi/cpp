#!/usr/bin/perl 
my $fileName = shift @ARGV;
( my $executeName = $fileName ) =~ s/exer(.*)\.cc/proExec$1/;
my $command = "g++ -std=c++11 " . "$fileName" . " -o " . " $executeName";
my $result = `$command`;
if( $EVN{$?} == 0 )
{
    print "Successfully compiled!\n";
    print "The output file name is: $executeName\n";
}
else 
{
    print "Complile failed:\n$result\n";
}

