echo "Installing dipendencies.."
echo ""
echo ""

sudo ls >> /dev/null

if test ! -d src ; then
	mkdir src
fi

cd src

wget http://download.enlightenment.org/releases/eina-1.2.0.tar.gz 
wget http://download.enlightenment.org/releases/edje-1.2.0.tar.gz 
wget http://download.enlightenment.org/releases/eet-1.6.0.tar.gz 
wget http://download.enlightenment.org/releases/evas-1.2.0.tar.gz 
wget http://download.enlightenment.org/releases/embryo-1.2.0.tar.gz 
wget http://download.enlightenment.org/releases/ecore-1.2.0.tar.gz 

if test ! -d eina-1.2.0 ; then
	tar -xvf eina-1.2.0.tar.gz
	cd eina-1.2.0
	./configure
	make
	sudo make install
	cd ..
fi

if test ! -d eet-1.6.0 ; then
	tar -xvf eet-1.6.0.tar.gz
	cd eet-1.6.0
	./configure
	make
	sudo make install
	cd ..
fi

if test ! -d evas-1.2.0 ; then
	tar -xvf evas-1.2.0.tar.gz
	cd evas-1.2.0
	./configure
	make
	sudo make install
	cd ..
fi

if test ! -d ecore-1.2.0 ; then
	tar -xvf ecore-1.2.0.tar.gz
	cd ecore-1.2.0
	./configure
	make
	sudo make install
	cd ..
fi

if test ! -d embryo-1.2.0 ; then
	tar -xvf embryo-1.2.0.tar.gz
	cd embryo-1.2.0
	./configure
	make
	sudo make install
	cd ..
fi

if test ! -d edje-1.2.0 ; then
	tar -xvf edje-1.2.0.tar.gz
	cd edje-1.2.0
	./configure
	make
	sudo make install
	cd ..
fi
sudo ldconfig
cd ..

rm -rf src
clear
echo "Done.. now run download_ps3efl.sh"

