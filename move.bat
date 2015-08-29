@echo off
set /a x = 0
set /a y = 0
echo Type WASD to move, Type Q to quit
:a_2
echo Current Place : [ %x% , %y% ]
choice -C wasdq
goto m_%ERRORLEVEL%
:m_1
set /a y = %y% + 1
goto a_2
:m_2
set /a x = %x% - 1
goto a_2
:m_3
set /a y = %y% - 1
goto a_2
:m_4
set /a x = %x% + 1
goto a_2
:m_5
echo Are You Sure to Quit?
choice -C yn
goto a_%ERRORLEVEL%
:a_1
echo Quitting..
pause
