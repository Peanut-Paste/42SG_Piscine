#! /bin/sh

ifconfig | grep -ioE '([a-z0-9]{2}:){5}..'
