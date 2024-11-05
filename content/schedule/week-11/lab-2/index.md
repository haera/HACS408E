---
title: "Lab 2: Todo"
type: docs
weight: 2
---

TODO Provide Context

- Do normal triage of the applicaton
  - Open in jadx, check out the `AndroidManifest.xml` file
  - What are the entrypoints (activities and services)? Find all the names.
    - In this case we care about which ones are
      [`exported`](https://developer.android.com/privacy-and-security/risks/android-exported)
      so indicate which one(s) are.
    - If an entrypoint defines an `intent-filter`, with an `action` then this
      class is also automatically defined as exported. Indicate any classes that
      define `intent-filter`'s as well.
      - NOTE:
        [What are intents](https://developer.android.com/guide/components/intents-filters)?

- The goal is to find out if there is a way to get this app to execute arbitrary
  linux commands on a phone.
  - What ways does an app have to execute commands?
  - `Runtime.exec()` and `ProcessBuilder()`

- Search for runtime.exec
  - is the command executed using dynamic data that could be attacker
    controlled?

- Search for ProcessBuilder
  - NOTE: you may need to set
    `File > Preferences > Decompilation > Show Inconsistent Code` to on in the
    preferences menu.
  - Don't forget to check
    [the documentation for ProcessBuilder](https://developer.android.com/reference/java/lang/ProcessBuilder#ProcessBuilder(java.util.List%3Cjava.lang.String%3E))
  - Pick the first occurrence of ProcessBuilder
    - Trace the arguments back until you get to a `parcel.readString()` method.
      - What class and method is this in?
      - Consider this done for now and we'll go over it a little in the
        walkthrough
  - Pick the next occurenc of ProcessBuilder
    - trace the arguments back
      - what intent action triggers the code path to get to the ProcessBuilder
        call?
      - Where does the string list come from?
    - Congratulations! You've found the vulnerability!

## Overview

{{< callout emoji="💡" >}}

explaination

**Goals:**

- goal
- goal
- goal

**Estimated Time:** `45 Minutes`

{{< /callout >}}

## Instructions

{{% steps %}}

### Step1

### Step2

### Step3

{{% /steps %}}

## Tips

- tip
- tip
- tip

## Submission

{{< callout emoji="📝" >}}

Submit a markdown file with any code you wrote and the answers to questions to
[ELMS](https://umd.instructure.com/courses/1374508/assignments).

{{< /callout >}}
