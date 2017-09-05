[Rainmeter]
Update=1000

[Metadata]
Name=Straight
Author=jooakim
Information=Straight measures

[Variables]
@include=#@#variables.inc

;---------------MEASURES----------------

[CPUTemp]
Group=CPU
Measure=Plugin
Plugin=HWINFO
HWINFOSensorId=0xf0000400
HWINFOSensorInstance=0x0
HWINFOEntryId=0x100007f
HWINFOType=CurrentValue

[CPU]
Group=CPU
Measure=Plugin
Plugin=HWINFO
HWINFOSensorId=0xf0000300
HWINFOSensorInstance=0x0
HWINFOEntryId=0x7000009
HWINFOType=CurrentValue

;------------------------

[RAM]
Group=RAM
Measure=Plugin
Plugin=HWINFO
HWINFOSensorId=0xf0000301
HWINFOSensorInstance=0x0
HWINFOEntryId=0x8000005
HWINFOType=CurrentValue

;------------------------

[GPUTemp]
Group=GPU
Measure=Plugin
Plugin=HWINFO
HWINFOSensorId=0xe0002000
HWINFOSensorInstance=0x14
HWINFOEntryId=0x1000000
HWINFOType=CurrentValue

[GPU]
Group=GPU
Measure=Plugin
Plugin=HWINFO
HWINFOSensorId=0xe0002000
HWINFOSensorInstance=0x14
HWINFOEntryId=0x7000000
HWINFOType=CurrentValue

;------------------------

[MeasureFreeC]
Group=DiskRead
Measure=FreeDiskSpace
Drive=C:

[MeasureFreeD]
Group=DiskRead
Measure=FreeDiskSpace
Drive=D:

[MeasureFreeF]
Group=DiskRead
Measure=FreeDiskSpace
Drive=F:

[MeasureFreeG]
Group=DiskRead
Measure=FreeDiskSpace
Drive=G:

[MeasureFreeSpace]
Measure=Calc
Formula=MeasureFreeC + MeasureFreeD + MeasureFreeF + MeasureFreeG

;--------------------------------------

[MeasureTotalC]
Group=DiskRead
Measure=FreeDiskSpace
Drive=C:
Total=1

[MeasureTotalD]
Group=DiskRead
Measure=FreeDiskSpace
Drive=D:
Total=1

[MeasureTotalF]
Group=DiskRead
Measure=FreeDiskSpace
Drive=F:
Total=1

[MeasureTotalG]
Group=DiskRead
Measure=FreeDiskSpace
Drive=G:
Total=1

[MeasureTotalSpace]
Measure=Calc
Formula=MeasureTotalC + MeasureTotalD + MeasureTotalF + MeasureTotalG

;------------------------

[MeasureNetIn]
Measure=NetIn
Interface=Best
Substitute=" ":""
MinValue=0
MaxValue=(49.95 * 1048576)
AverageSize=5

[MeasureNetOut]
Measure=NetOut
Interface=Best
Substitute=" ":""
MinValue=0
MaxValue=(5.80 * 1048576)
AverageSize=5

[MeasureIPWeb]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=http://checkip.dyndns.org
RegExp="(?siU)Address: (.*)</body>"
StringIndex=1
UpdateRate=-1
;------------------------

[Clock]
Group=Time
Measure=Time
Format=%H:%M

[WeekDay]
Group=Time
Measure=Time
Format=%A

;------------------------

[SpotifyLength]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Length

[SpotifyTrackPos]
Measure=Plugin
Type=Position

Plugin=SpotifyPlugin
Type=
[SpotifyArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify
PlayerType=Artist

[SpotifyTrack]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify
PlayerType=Title

;------------------------

[Audio]
Measure=Plugin
Plugin=Win7AudioPlugin
