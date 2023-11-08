#!/usr/bin/gnuplot -persist
#set terminal pngcairo transparent enhanced font "arial,10" fontscale 1.0 size 600, 400
set title "G"
set xlabel "time"
set ylabel "b"

set grid ytics mytics mxtics  
set mytics 5           
set mxtics 5
set grid       
plot[-21:12] sin(x) lt rgb "red"

