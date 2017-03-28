mkdir ~/.mcm
sudo mkdir /opt/mcm
cp UNINSTALL.sh ~/.mcm /UNINSTALL_mcm.sh
sudo cp mcm.png /usr/share/pixmaps/
sudo cp * /opt/mcm/

gcc /opt/mcm/mcm.c -o ~/.mcm/mcm -ansi -pedantic -Wall
chmod +x ~/.mcm/mcm
sudo ln -s ~/.mcm/mcm /usr/bin/
cp mcm.png ~/.mcm/
sudo rm -R /opt/mcm

echo "
#!/usr/bin/env xdg-open
[Desktop Entry]
Version=1.0
Type=Application
Terminal=true
Icon[es_ES]=mcm.png
Exec=mcm %u
Name[es_ES]=mcm
Name=mcm
Icon=mate-panel-launcher
Categories=Application;Education;" >> ~/.mcm/mcm.desktop

sudo cp ~/.mcm/mcm.desktop /usr/share/applications/
chmod +x ~/.mcm/UNINSTALL_mcm.sh
sudo ln -s ~/.mcm/UNINSTALL_mcm.sh /usr/bin/

echo "
#!/usr/bin/env xdg-open
[Desktop Entry]
Version=1.0
Type=Application
Terminal=true
Icon[es_ES]=mcm.png
Exec=UNINSTALL_mcm.sh %U
Name[es_ES]=mcm_Uninstall
Name=mcm_Uninstall
Icon=mate-panel-launcher
Categories=Application;Education;" >> ~/.mcm/mcm_Uninstall.desktop 

sudo cp ~/.mcm/mcm_Uninstall.desktop /usr/share/applications/
cd ..

rm -R mcm

rm mcm_Source.tar.gz

clear

exit

