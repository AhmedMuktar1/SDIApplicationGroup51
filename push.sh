#! /bin/bash
repo_name="Application" 
cd docs
doxygen Doxyfile
cd latex
make
cd ../..
echo "# Directory Structure" > directorySctructure.md
echo "\'\'\'" >> directorySctructure.md
tree ../$(repo_name)/host >> directorySctructure.md
tree ../$(repo_name)/device >> directorySctructure.md
tree ../$(repo_name)/snn/src >> directorySctructure.md
tree ../$(repo_name)/snn/include >> directorySctructure.md
echo "\'\'\'" >> directorySctructure.md
git add *
git commit -m "automatic generation of documentation"
git push
