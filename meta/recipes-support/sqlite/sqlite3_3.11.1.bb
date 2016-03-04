require sqlite3.inc

LICENSE = "PD"
LIC_FILES_CHKSUM = "file://sqlite3.h;endline=11;md5=65f0a57ca6928710b418c094b3570bb0"

SRC_URI = "http://www.sqlite.org/2016/sqlite-autoconf-${SQLITE_PV}.tar.gz \
           file://fix-disable-static-shell.patch \
"

SRC_URI[md5sum] = "c66b4e9d5ca6cfd15471b5b03fc44537"
SRC_URI[sha256sum] = "533ff1d0271c2e666f01591271cef01a31648563affa0c95e80ef735077d4377"
