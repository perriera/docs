## NodeJS How-to's
### [How To Install Node.js on Ubuntu 22.04](https://www.digitalocean.com/community/tutorials/how-to-install-node-js-on-ubuntu-22-04)
>This guide assumes that you are using Ubuntu 22.04. Before you begin, you should have a non-**root** user account with `sudo` privileges set up on your system. You can learn how to do this by following the [Ubuntu 22.04 initial server setup tutorial](https://www.digitalocean.com/community/tutorials/initial-server-setup-with-ubuntu-22-04).
> 
> [Option 1](https://www.digitalocean.com/community/tutorials/how-to-install-node-js-on-ubuntu-22-04#option-1-installing-node-js-with-apt-from-the-default-repositories)
```
sudo apt update
sudo apt install nodejs
node -v
sudo apt install npm
```

> [Option 2](https://www.digitalocean.com/community/tutorials/how-to-install-node-js-on-ubuntu-22-04#option-2-installing-node-js-with-apt-using-a-nodesource-ppa)
```
cd ~
curl -sL https://deb.nodesource.com/setup_18.x -o nodesource_setup.sh
```
```
nano nodesource_setup.sh
```
```
sudo bash nodesource_setup.sh
```
```
sudo apt install nodejs
```
```
sudo apt install nodejs
```
> [Option 3](https://www.digitalocean.com/community/tutorials/how-to-install-node-js-on-ubuntu-22-04#option-3-installing-node-using-the-node-version-manager)
```
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.1/install.sh | bash
source ~/.bashrc
nvm list-remote
```
```
nvm install v16.14.0
nvm list
```
Optional
```
nvm install lts/fermium
node -v
```
### Removing Node.js
```
sudo apt remove nodejs
```
```
sudo apt purge nodejs
```

```
nvm current
```
If the version you are targeting is not the current active version, you can run:
```
nvm uninstall node_version
```

If the version you would like to remove is the current active version, you’ll first need to deactivate nvm to enable your changes:
```
nvm deactivate
```
> (c) Alex GarnettAuthor
Senior DevOps Technical Writer



