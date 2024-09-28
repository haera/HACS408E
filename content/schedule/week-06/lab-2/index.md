---
title: "Lab 2: Malware Traffic Analysis"
type: docs
weight: 2
---

## Overview

{{< callout emoji="💡" >}}

In this lab you will change the configuration of wireshark to better prepare for
analyzing malware traffic. Often malware uses web traffic to reach back to a
control machine or download a second stage payload to execute once the victim
machine has been exploited.

**Goals:**

- Change the wireshark interface
- Develop a report analyzing known malware traffic

**Estimated Time:** `60 Minutes`

{{< /callout >}}

## Part 1 - Changing Wireshark Columns

{{% steps %}}

### Follow the `workshop-part-02.pdf` slides from Palo Alto's Wireshark Workshop.

The slides can be downloaded from
[the workshop github repo](https://github.com/pan-unit42/wireshark-workshop/tree/master).

{{< callout type=info >}}

**Note:** The password to unzip the file is `unit42`

{{< /callout >}}

- Video walk throughs from the work shop are available at
  [Unit 42's Website](https://unit42.paloaltonetworks.com/wireshark-workshop-videos/)

### Don't hide any of the columns after you've set them up, just skip to the `Search Filter Expressions` section.

Save the search filters:

- `basic`
- `basic+`
- `basic+dns`

{{% /steps %}}

## Part 2 - Pcap Analysis

{{% steps %}}

### Download the first two pcaps from part 05 of the workshop using the link below.

{{< downloadbutton file="pcaps.zip" text="pcaps.zip" >}}

{{< callout type=error >}}

**NOTE:** The password to unlock the zip file is `pcaps-contain-malware`

{{< /callout >}}

{{% /steps %}}

## Tips

- tip
- tip
- tip

## Submission

{{< callout emoji="📝" >}}

Submit a markdown file with any code you wrote and the answers to questions to
[ELMS](https://umd.instructure.com/courses/1374508/assignments)?

{{< /callout >}}
