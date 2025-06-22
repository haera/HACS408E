---
title: "Lab Infrastructure Setup"
sidebar:
  exclude: true
---

## Update:

IT got back to us and VM's have been set up for you. Please delete any
infrastructure you created already. This includes:

- SDI
- VM template
- Disk Images

We'll go over this at the start of lecture on Wednesday, September 4th.

{{% callout type=error %}}

**UPDATE:** The following information is out of date. You should have a vm
already set up for you now. Thank you everyone who followed the steps early!

{{% /callout %}}

---

---

## ~~Copying VM Disk Images~~

{{% steps %}}

### Log in to: [`https://lab.aces.umd.edu`](https://lab.aces.umd.edu)

### Go to the `Storage` tab and select `VM Templates`

![](dashboard.png)

![](vm_temp.png)

### Select `discs` instead of templates.

![](disks.png)

![](disks_2.png)

### On the left side, under `Shared Tenancies`, choose `ACES`.

![](aces_left.png)

### Look for the name `Luke Mains` (thats me), and click it to see disk images I've shared with you.

{{< callout type="info" >}}

If you don't see `Luke Mains` in the names tab, reach out on discord or email
one of the course instructors.

{{< /callout >}}

### Copy Disk Images

If you do see some shared disks, select both the `Windows 10` and
`kali-linux-<...>` options and copy them (the copy button is on the right side)
to your personal storage.

- You can name the copies whatever you want. Just make sure you know which one
  is `windows` vs. `linux`

NOTE: These are big images, so it will take a while for them to copy.

{{% /steps %}}

---

---

## Creating VM Templates

{{% steps %}}

### Go back to the templates tab and choose `Create VM Template`

![](vm_temp2.png)

### Set the `name` to whatever you want

![](name_temp.png)

### Set the ram to `4096` and cores to `8`

![](set_ram.png) ![](set_cores.png)

### Add a network interface and a drive interface on the right side

![](interfaces.png) ![](add_interfaces.png)

### Set the drive to your `kali-linux-<...>` disk image you from your storage.

![](set_drive.png)

### Save the template

![](save.png)

{{% /steps %}}

---

---

## ~~Setting up an SDI~~

{{% steps %}}

### Now go to the sdi tab at the top of the page

![](sdi_tab.png)

### Click `New SDI` on the right side, give it a name (this example uses `Test SDI`) and save it.

![](create_sdi.png) ![](name_sdi.png)

### Click on your newly created SDI and click `view` on the right side.

![](blank_sdi.png) ![](blank_sdi_clicked.png) ![](sdi_view.png)

### This should bring you to a blank page with a grid. On the left there's a small tool icon, click it to open the `toolbox` menu.

![](tool_icon.png)

### Under the `Shared Resources` section double click or drag to add a `shared external network` object.

![](shared_network.png) ![](shared_network2.png)

### Next go to the `workstations` section and double click or drag to add your `kali-linux-<...>` vm template.

![](workstation.png)

### After all this, your setup should look like the following:

![](devices_added.png)

### Click on your kali linux workstation, and then click on the little square icon with a pencil on the right to open the settings for your workstation.

![](kali_click.png) ![](right_panel.png) ![](right_panel_open.png)

### Open the `interfaces` tab of the workstation settings.

![](interfaces_tab.png)

### Select a `NIC` interface and change the `network` from `None (unplugged)` to the `Shared External Network`. Then click save at the bottom.

![](nic_settings.png) ![](save_nic.png)

### You should see the grid section update with a line between your two devices, showing they are connected.

![](connected.png)

### Finally click the blue play button to start your SDI and the `kali` workstation should turn green. Once it does, double click the green computer to open a connection to it.

![](play_button.png) ![](green_vm.png)

{{% /steps %}}
