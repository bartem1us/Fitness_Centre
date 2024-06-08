Docker with open docker desktop
docker-compose build - билд докера
docker-compose up -d - запуск контейнера
docker-compose down - остановка и удаление контейнера
docker-compose logs api - логи контейнера

conan install conanfile.txt --build=missing --profile=debug - нужно ещё менять conanprofile
conan install conanfile.txt --build=missing --output-folder=out/build/x64-Debug
default in realese

conan install conanfile.txt --build=missing --output-folder=out/build/x64-Debug --profile=debug
conanprofile find 