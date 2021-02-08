#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d: -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | tr "\n" " " | sed 's/ /, /g' | sed 's/, $/./' 
#delete all line begin by#		#print one in two#		#delete at: only line 1#		#reverse by alphabetic order#		#print only line between FT included#
#delete line break#		#put coma end '.' at end#