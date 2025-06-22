---
title: "Kali: Setting Up SSH"
---

{{% callout type=warning %}}

If you are opening up the `ssh` port, then it is recommended that you change the
password of the `kali` user to somthing other than the default!

```sh {filename=Bash}
# To change the current users password run:
$ passwd
```

{{% /callout %}}

## Part 1 - Kali VM Setup

{{% steps %}}

### Add the kali user to the `kali-trusted` group to enable passwordless `sudo`.

```{filename=Bash}
sudo usermod -aG kali-trusted $(whoami)
```

### Log out and log back in for the group changes to take effect.

### Install `openssh-server` and enable the service so it always starts when the VM boots up.

```{filename=Bash}
sudo apt update && sudo apt install -y openssh-server
sudo systemctl enable ssh
sudo systemctl start ssh
```

{{% /steps %}}

## Part 2 - SSH Setup

{{% steps %}}

### Get the IP address of your kali linux vm.

```{filename=Bash}
$ ip -c a
```

### Log in to `ams.aces.umd.edu` to get your AMS ssh information.

### On your local machine, add the following to your `ssh config`:

```yaml {filename="$HOME/.ssh/config/"}
# This is the connection info for your AMS aces vm:
Host aces-vm
  HostName vm.aces.umd.edu
  User <username>
  Port <port>
  ForwardX11 yes

# Fill in the ip address you got earlier here:
Host kali-aces-vm
  HostName <kali-ip-address>
  User kali
  ProxyJump aces-vm
  ForwardX11 yes
```

### Try connecting to your kali vm:

```{filename=Bash}
ssh kali-aces-vm
```

{{% /steps %}}

### Viewing GUI Programs over SSH

You will need an X11 server running on your host machine to view gui programs
over ssh.

|      OS | Program                                                                                                                     |
| ------: | :-------------------------------------------------------------------------------------------------------------------------- |
| Windows | Free Option: [MobaXTerm](https://mobaxterm.mobatek.net/)                                                                    |
|   MacOS | Free Option: [XQuartz](https://www.xquartz.org/)                                                                            |
|   Linux | If you set up your `ssh` config as above, you should be good to go! Otherwise make sure to add `-X` when you ssh to the VM. |
