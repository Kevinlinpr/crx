echo "Generating... .so file and .h file."
go build -o crx.so -buildmode=c-shared .
echo "Copy .so file and .h file into utils/crx/api folder."
cp ./crx.so ./api/crx.so
cp ./crx.h ./api/crx.h
echo "Copy .so file and .h file into build folder."
cp ./crx.so ../../build/crx.so
cp ./crx.h ../../build/crx.h
echo "Successful! You can find .so and .h files in utils/crx/api folder."