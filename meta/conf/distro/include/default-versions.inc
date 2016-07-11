#
# Default preferred versions
#

# Force the older version of liberation-fonts until we fix the fontforge issue
PREFERRED_VERSION_liberation-fonts ?= "1.04"

# Force db-native's version to keep sync with db while
# 'AGPL-3.0' in ${INCOMPATIBLE_LICENSE} blacklist
PREFERRED_VERSION_db-native = "${@incompatible_license_contains('AGPL-3.0', '5.%', '6.%', d)}"

# libxml2 2.9.4 apparently causes problems for some native packages?
PREFERRED_VERSION_libxml2-native = "2.9.3"
PREFERRED_VERSION_nativesdk-libxml2 = "2.9.3"
