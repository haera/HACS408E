---
title: "Lab 1: Todo"
type: docs
weight: 1
---

- can you read the andoid manifest file? no, but try `xxd` or `strings -b`
- ## What are the most common file extensions in the assets folder?

2. Apktool
   - Apktools main use case is for reassembly but you can also use it to reverse
     android applications.
   - `apktool d -m --output apktool-out <apk-file>`
   - can you read the android manifest?
     - What are the entry points?
       - List the activity/service names
     - find the smali code for `com.cp.camera.MyApplication`
     - Give a breif (3 bullet points) description of what you see
       - What file would you want to look at next?

3. The swiss army kife: `jadx`
   - How do you send a text message in android
   - `Navigation > Text Search`
     - Search for SMS, what classes do you see?
     - Search for the android function `sendTextMessage`. Make this your
       starting point and work backwards.
     - Look up in the
       [android documentation for `sendTextMessage`](https://developer.android.com/reference/android/telephony/SmsManager#sendTextMessage(java.lang.String,%20java.lang.String,%20java.lang.String,%20android.app.PendingIntent,%20android.app.PendingIntent))
       - what are each of the parameters?
       - what parameter corresponds to the text destination
     - Find the method(s) that call the `SendMessage` function by right clicking
       on it and then clicking `Find Usage`.
       - What functions call the `SendMessage` function?
     - Use the `Find Usage` and `Go To Decleration` cross reference abilities to
       trace backward and figure out what the destination text number is.
       - What method is responsible for dynamically generating the the text
         destination?
       - Give a breif description of how this works:
         - Does it reach out to a remote computer? How?
         - How does it parse the data it gets back?
     - Now to figure out how/when the app sends the message.
       - Back to when `SendMessage()` gets called. The
         `onRequestPermissionsResult` seems a little weird to me. This function
         gets called immediately after `requestPermissions` method finishes.
         This type of knowledge comes with android experience which you probably
         don't have yet. So for now you'll just have to trust the lab guide.
       - Do a string search and find places in the `Loading` class that calls
         `requestPermissions`
         - What are the 3 functions where it is called?
         - Which function requests a permission that is related to the SMS fraud
           we think the app is doing?

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

### Install Dependencies

Install `apktool` and `jadx`.

```sh {filename=Bash}
sudo apt install jadx apktool
```

### Naieve Analysis

Android packages are also zip files so you can just run `unzip` to extract the
contents. Extract the contents to answer the following questions:

1. **What type of file is the Manifest.xml file?**

At this stage you won't be able to read the file but you can still get
information from the file. Try using `xxd` or `strings -b`.

Looking at the resources folder, use the following script to print the count of
each file extension.

````bash {filename=Bash}
for file in $(find -type f); do tmp=$(basename -- "$file"); extension="${tmp##*.}"; echo $extension; done | sort | uniq -c | sort -n -r
```

2. **

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
````
