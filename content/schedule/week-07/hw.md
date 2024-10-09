---
title: "HW: Real-World Malware"
type: docs
weight: 4
---

## Description

This week you will form groups to reverse engineer real-world malware samples. Your group will be expected to submit both a writeup about the malware functionality, and prepare a short (~10 minute) presentation to be given next class. The presentation will function as your midterm.

To be assigned your sample, first form a group of 3-5 students. Feel free to use the Discord to find group members. Then send a Discord message or email to the instructors with the names of your group members. We will respond with a sample for your group to analyze.

## Tips

- Use Ghidra to inspect your sample in depth
- Use x64dbg to assist with static analysis
- Use the [Sysinternals Suite](https://learn.microsoft.com/en-us/sysinternals/) to triage your sample

## Submission

{{% steps %}}

### Presentation

{{< callout emoji="🗨️" type="info" >}}

Prepare a 10-minute presentation with your group about your sample. It should summarize the contents of your report, with any background information necessary to help the class understand your analysis.

{{< /callout >}}

### Report

{{< callout emoji="📝" >}}

Submit a markdown or pdf report describing how you solved the challenge to
[ELMS](https://umd.instructure.com/courses/1374508/assignments)? Your report
should include the following:

- Triage your sample, looking for interesting metadata, suspicious imported/exported functions, signs of obfuscation, and interesting strings
- Analyze the behavior of your sample, looking for features like file modifications, additional payloads, process injection, registry modifications, or persistence mechanisms
- What is the overall purpose of this sample?
- What indicators of compromise (IOCs) are there for this sample?

{{< /callout >}}

{{% /steps %}}
