# compile asn1 files
rm -rf src
mkdir src
asn1c rrc.asn1 -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps

# compile C programs
rm -rf build
mkdir build
gcc -I. -Isrc -o build/server sctp_server.c src/*.c -lsctp -DPDU=ConnectionMessage -DASN_DISABLE_OER_SUPPORT
gcc -I. -Isrc -o build/client sctp_client.c src/*.c -lsctp -DPDU=ConnectionMessage -DASN_DISABLE_OER_SUPPORT
