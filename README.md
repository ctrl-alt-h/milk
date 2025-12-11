# Building From Source

<details>
<summary>Arch Linux</summary>

```
git clone --recurse-submodules https://github.com/ctrl-alt-h/milk.git
mkdir -p milk/build
cd milk/build

sudo pacman -S base-devel cmake
cmake ..
cmake --build .
```
</details>
