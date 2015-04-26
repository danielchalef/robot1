#!/bin/bash

#roscore &
roslaunch neato_2dnav move_base.launch &

rosrun gmapping slam_gmapping scan:=base_scan _srr:=0.001 _srt:=0.001 _str:=0.000001 _stt:=0.000001 _linearUpdate:=0.5 _angularUpdate:=0.4 &

