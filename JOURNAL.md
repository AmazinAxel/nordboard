# 2/13/2026 - Sketched out the keyboard layout and design

_Time spent: 0.5h_

I sketched out the design of the keyboard and its layout so that I can begin making the board.

I'm planning out the most optimal and comfortable keyboard layout while keeping it as flat (diagonal) as possible. I'm not completely settled on the slope amount (I might adjust this in the future) but otherwise I'm going to design from here.

![IMG_2521](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTAzNzUzLCJwdXIiOiJibG9iX2lkIn19--d0421474c6114ca320e938732eef64b683e5d67b/IMG_2521.jpeg)

![IMG_2523](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTAzNzU0LCJwdXIiOiJibG9iX2lkIn19--fd1d7b0d14a91861dc09356b062d5e45dfb75e70/IMG_2523.jpeg)

![IMG_2519](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTAzNzY4LCJwdXIiOiJibG9iX2lkIn19--69ca871745b77150eb306c8532e1f97788f18287/IMG_2519.jpeg)

# 2/15/2026 11 AM - Began PCB & schematic

_Time spent: 1.0h_

This is my first real PCB project so I'm still new to all this. I didn't know that the schematic editor didn't actually reflect the location on the PCB :megasob:
Wasted a bunch of time getting the alignment perfect on schem instead but I did figure out how to get the proper footprints for my Choc v1 and Seeed XIAO RP2040 working.

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA0OTc3LCJwdXIiOiJibG9iX2lkIn19--a36d4d67508eaf17d415aaf28f3c51cc6729af0d/image.png)

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA0OTc4LCJwdXIiOiJibG9iX2lkIn19--d7c21708515dc30cc2634aba17e8e0d3898f0df5/image.png)

# 2/15/2026 3 PM - Finished the schematic, PCB component placement layout

_Time spent: 3.0h_

I finished up the keyboard schematic and began working on the PCB. All components on the schematic are properly routed and accounted for. I also did an ERC check to make sure that everything was wired up properly. I imported it into the PCB editor and put all components in their place.

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1MTEzLCJwdXIiOiJibG9iX2lkIn19--df0e3946ff7bd106531c89c7805f863bb46eb7b2/image.png)

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1MTE0LCJwdXIiOiJibG9iX2lkIn19--183868c6c3c9f5e702db7ccafdb6454cf049337e/image.png)

# 2/15/2026 10 PM - Finished tracing/routing the PCB!

_Time spent: 1.5h_

I've finished the PCB tracing. I'm pretty happy with it, so now I get to move on to the fun silkscreening stuff. I'm debating on adding another column for things like the shift key, and I might optimize the thumb cluster by rotating it slightly (we'll see!)

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1MjY4LCJwdXIiOiJibG9iX2lkIn19--1f89dccb6a6119bc3fbf525e4a8d15f0a032a9bc/image.png)

And look, no errors!
![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1MjY5LCJwdXIiOiJibG9iX2lkIn19--366fe0f95f40a263f77235df057398c829e7862f/image.png)

# 2/16/2026 6 PM - Added another column, schematic cleanup, restarted PCB

_Time spent: 3.0h_

Since I messed up the footprints for the original schem and didn't split the file properly, I had to restart the PCB again. This has given me a good opportunity to fix some issues and improve the schematic design layout. It's much more polished and properly made now.

Left (notice the proper references now!)
![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1Nzc0LCJwdXIiOiJibG9iX2lkIn19--a9574ef41f9ef2972ec0b2c49b49e423e9f0de8a/image.png)

Right
![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1Nzc1LCJwdXIiOiJibG9iX2lkIn19--b299046a218738cf19508df1e5ae66299caefe5e/image.png)

The split keyboard tutorial is quite confusing so I also changed up the Xiao RP2040 although now I get a weird ground error when I run ERC. I also added mousebites to the main layout:
![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1Nzc2LCJwdXIiOiJibG9iX2lkIn19--84f9c0134080024536a3f013809c2f90dfc31639/image.png)

And while I still have a long ways to go, I now have the full PCB layout (minus the positioning and tracing, for which I had to restart)
![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1Nzc3LCJwdXIiOiJibG9iX2lkIn19--49043a3cb72e5fda601dab8d944d2d7a750618c9/image.png)

# 2/16/2026 10 PM - Half of PCB completed, routed right piece

_Time spent: 2.0h_

I've finished the first half of the PCB! The second (right) part has been routed but the mounting holes or outline has not yet been placed. I think it's looking good so far!

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA1ODg3LCJwdXIiOiJibG9iX2lkIn19--aacdd65ba65ff83a35b129391d07b45aa824b35d/image.png)

# 2/17/2026 - Finished right PCB

_Time spent: 0.8h_

PCB layout & tracing complete. There's some DRC issues and I have to get it peer reviewed first before I send it off to JLC for fabrication. Removed 2 mounting holes since they weren't needed. I don't know whats wrong with the mousebites but I also have to get that sorted out. Silkscreen design coming soon too!

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA2MzQ0LCJwdXIiOiJibG9iX2lkIn19--9f7c0d9aa30eb07d030a7df3ad8e07cb4d04e173/image.png)

# 2/18/2026 - PCB Silkscreen, 3D model and more

_Time spent: 2.5h_

I finished the PCB. Everything is complete, from the FRC to DRC checks (no more errors!)
There's some cool silkscreen stuff now. I had to design them outside of KiCAD and import them as an SVG.
![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA3MDQ1LCJwdXIiOiJibG9iX2lkIn19--412415bc4306030f20b8caf162dbdeca8b028bf0/image.png)

I began using Onshape to model the case for the keyboard. I'll try to keep it as minimal as possible but I haven't gotten proper 3D exports working for the key switches so I'm not sure the depth I should have for the upper solder buffer part of the case. I also wanted to implement some sort of built-in tenting solution and magnets so this can be portable, but maybe that's over-engineering it.

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA3MDQ0LCJwdXIiOiJibG9iX2lkIn19--feec55f035702684183f5f9354419a3f508cc2c1/image.png)
![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA3MDU0LCJwdXIiOiJibG9iX2lkIn19--e46aaf7013d5d1f9f04d0bdbd36a7cb4a16e6f77/image.png)

# 6/15/2026 - Moving to Forge and planning a redo

_Time spent: 0.5h_

This project has been imported from Blueprint. I originally started working on this project back in Feburary but I haven't had the motivation to continue it since I had a convo about having to redo much of this project due to a few oversights of mine.

I will admit that I spent much too long on this CAD model for tenting. I really don't like how it came out, so I will probably invest in my own tenting solution. I won't print this tent (probably) but I'll log it here since I did spend a lot of time on it (thats where all this time from the devlog came from. I spent multiple nights on this, fine tuning it so its actually more than half an hour of work, i'm under-counting the hours on this one since its my first entry to Forge from Blueprint and i dont want to mess anything up, you can refer to my onshape history)

![a](https://cdn.hackclub.com/019ece31-1481-7826-b061-fcf4406c2e1a/20260615-190940-edited.png)

![b](https://cdn.hackclub.com/019ece34-349f-79f8-8790-357d3b0fa647/20260615-191303-edited.png)

With that out of the way, here's whats wrong with my current product:

- There is no interconnect cable, instead I relied on two usb-c cables for data. Apparently this will break cross-keyboard communication and I wont be able to use mod keys from the left on the right of the keyboard. This is a dealbreaker for me so I am adding an interconnect cable (which will be done in the next devlog)
- The current 3d model relies on a PCB that will be a different shape to support the cable. I'll have to redo it, and honestly I might just go for a borderless exposed PCB design because it will be lighter and smaller and I want this to be very portable
- There is a big issue with it being basically the same schematic duplicated twice, and since i will have to make a new schematic for the right side it'll basically be a complete PCB rewiring and everything. this is gonna be so painful :sob:
- The project is suuper poorly organized right now, there are tons of library stuff and dependencies in my literal Downloads folder. I don't really know how this happened but I cant work on the project on my other computer since the Kicad deps dont exist. I'll have to figure out how to fix that, not sure how yet

There are a bunch of issues and it's gonna be really painful to have to redo basically this whole project. That being said, I don't anticipate to work on this every day so my forge streak is basically cooked. See ya in the next devlog!

# 6/16/2026 - Redoing basically everything (part one!! yay)

Time spent: 1.2h

Spent much of the afternoon/night on this. So after installing a Nord theme I have basically started redoing everything, starting with having everything in one sheet to make it easier to wire up the interconnect. This is what it looked like before:

![1](https://cdn.hackclub.com/019ece81-5fdd-7613-b05e-b2fceb471f02/20260615-203724-edited.png)

![2](https://cdn.hackclub.com/019ece82-57c7-798c-8a26-3a8a1e39a84a/20260615-203826-edited.png)

![3](https://cdn.hackclub.com/019ece82-a158-7eb3-808c-3be59cee7d7c/20260615-203844-edited.png)

And after: (you'll notice its in one sheet now and there's an extra switch!)

![4](https://cdn.hackclub.com/019ecee4-32de-7916-bf13-ecb34044b8a4/20260615-222519-edited.png)

Also, remember how I basically hardlinked the entire thing to my Downloads folder instead of bundling it in the project? Look who gets to deal with this mess:

![5](https://cdn.hackclub.com/019ecee6-26e1-7ebf-915e-efebc7f13535/20260615-222728-edited.png)

So now it's just a matter of actually doing the interconnect cable. Seeing that the annotations have changed with the new switch placements, I still think the whole PCB will have to be retraced.

# 6/24/2026 - Redoing everything (part two!!!)

Time spent: 5h

Been working on this for a while. Very very happy to report that I have finally managed to reorganize and clean up this project enough that I can now work on it on another computer. So for context: I had hardcoded all of the paths for the libraries and symbols and everything to my _Downloads_ folder. Anyone who cloned my project would've encountered numerous errors, but now that's a thing of the past. I successfully managed to get all of the paths softcoded to the project library, so there shouldn't be any more issues.

This is what the checks look like now (no more errors!! and everything is vendored in the project!)

![1](https://cdn.hackclub.com/019efc03-e24d-7d59-9d53-cc0953a79dfe/20260624-164249-edited.png)

![2](https://cdn.hackclub.com/019efc0a-3147-7fe0-8c88-a4b123768704/20260624-164943-edited.png)

(those aren't DRC checks though, those are footprint and symbol updates, which fetch from the libraries! I also took this opportunity to clean up and massively reduced the libraries this depends on by only importing what is needed.)

So I also did some reorganizing of the PCB. I updated the edge cuts to be slimmer and fit more with the additional thumb cluster button (yes that's right - there are 3 thumb clusters now!)

![1](https://cdn.hackclub.com/019efbfe-5312-7047-92b9-eb0d1e1a1d1b/20260624-163642-edited.png)

I also completely redid the schematic now. I reordered the buttons on both sides and fixed a major issue with it being connected to the wrong rows, which would've made the button double press. I attempted to do an interconnect with just a USB-C port on the left and the Xiao on the right but I guess that's not possible, so I've started working on adding USB-C ports for interconnect on both sides.

![2](https://cdn.hackclub.com/019efc0c-9c93-7aba-9b8b-505b753cbb2c/20260624-165220-edited.png)

![3](https://cdn.hackclub.com/019efc0e-587c-7562-a4c7-6d8c63f7a714/20260624-165415-edited.png)

Anyways, as you can see, I have been quite productive even with the major setback. I plan on getting the interconnect wired up, then I'll improve some of the edge cuts and work on the plates and case. Until next time!

# 6/25/2026 - Finishing the new schematic and interconnect

Time spent: 2.5h

I've been hard at work yesterday evening and this morning getting the schematic finished up. I have had a lot of discussion about whether I can connect the left interconnect directly to the Xiao on the right, but unfortunately that does not seem to be possible and I'll just have to live with an unused USB-C port on the right sadly. I can't even use it for something like type-C charging or as an extra data port, so we're basically just wasting an entire receptacle. There are a few good things that came out of this. The first is that with a USB-C interconnect, that means that it's a removable C-to-C cable I can use for other devices in an emergency (when traveling). The other is that this will allow me to have the two boards communicate with each other for more key combos. And it also reduces the total cable clutter since I won't have another cable plugged into my computer. There is also space in the PCB for me to add the USB receptacles without causing too large of a redesign.

I pondered whether I would want to add Bluetooth and a battery to this board. After realizing that I literally just used up the very last pin on my Xiao (I maxed this thing out pin-wise, I think that's pretty cool) I realized that this would have been too much of an undertaking and I'll leave that for a v2.

![1](https://cdn.hackclub.com/019efff9-8540-7369-bdb7-a91660340769/20260625-110958-edited.png)

![2](https://cdn.hackclub.com/019f0026-8ab1-7ae0-b9e8-1faa99029846/20260625-115909-edited.png)

There are a few issues with the schematic import into the PCB. The most obvious is the wackiness with the new switches, I don't even know why they are there since the new ones should've replaced them. I'll figure that out later today and hopefully get the PCB finalized so I can work on the case and plates.

![3](https://cdn.hackclub.com/019f0027-6364-76ca-b2ae-02fc2c782c12/20260625-120004-edited.png)

# 6/25/2026 - THE PCB IS DONE

Time spent: 5.5h

oh my god this is insane. I have spent the ENTIRE evening working on this and I feel very accomplished. For starters, basically I redid the entire board in some capacity. Edge cuts, placements and basically the entire PCB routing has been redone for interconnect performance and stability. Now I have to start worrying about interference and wider trace widths for large power. I think honestly it's just easier to look at the board and see how different it is:

![wow](https://cdn.hackclub.com/019f0220-cebd-7855-84a9-9f4c26bf8281/20260625-211200-edited.png)

Starting with the schematic, I spent hours fiddling with the USB-C ports in the PCB because the 0.5mm 5v lines were too thick and there was a total mess of wires clogging up that area. So I decided to relabel the left Xiao to prioritize wires that go to the left so that there'd be no interference with wires that go down. After doing so, I went from a mess of wires with the resistor and the Xiao and USB-C receptacle to THIS:

![also wow](https://cdn.hackclub.com/019f0234-927d-7c55-9173-fa8e6a656916/20260625-213343-edited.png)

I know I don't have a comparison image for this but you can take my word for it that this thing is pretty well optimized for both space and speed. Did I mention that the USB-C port trace is as close together as possible to reduce right-side latency? Also, the big blue fill you see is me figuring out how ground fills work, since apparently these help reduce noise for things like this. I had a lot of issues with it messing with the DRC so I fixed those issues and now I have a perfect score!

![1](https://cdn.hackclub.com/019f0237-f9d8-7bfc-936f-762b27d28713/20260625-213726-edited.png)

Basically I touched up on every single trace on the board to optimize & clean it up. (I also learned that KiCAD has a few built-in tools to clean up the PCB, this would've been nice to know sooner!)

Anyways the PCB is fully completed now. Everything is in order for me to start modeling the plates and cases!! I think that I spent a little too much time on this devlog since the last journal, I might try doing a Lapse next time when I am using Onshape for modeling.

## 6/26/2026 - Modeling is almost done!

Time spent: 6.5h

It's time for me to submit this project! A lot has happened today. For starters, the case is now 100% complete. I spent literally three hours on this simple case because Onshape is annoying and slow when it's dealing with huge composite parts like this PCB. Here's what it looks like!

![1](https://cdn.hackclub.com/019f061d-a93b-74f6-a9eb-b2ab288ddd44/20260626-154708-edited.png)
![2](https://cdn.hackclub.com/019f061e-140e-74b2-a618-c20484e5b335/20260626-154737-edited.png)
![3](https://cdn.hackclub.com/019f061f-481e-7f67-bef8-47d9cb795bd0/20260626-154856-edited.png)
![4](https://cdn.hackclub.com/019f0620-249b-7dce-b437-22621c4eb3fb/20260626-154952-edited.png)

If you have a keen eye, you might have noticed that there were several board revisions since my last journal entry. After putting this case together, I realized that the screw holes have to be close to the edge of the board without any solder obstructions so that they're stable. I realized that the mounting holes near the USB-C ports would actually destabilize the structure, so I decided that I won't include those and revised both the board and the schematic to remove those. This means that yes, there is only two mounting holes but they are strategically located so lifting up on the board should not seperate it from the case. (also updated my signature a little bit, I think it looks nicer :D)

For anyone interested, this is what the final schematic and PCB looks like after all the revisions and trace routing updates:

![5](https://cdn.hackclub.com/019f0626-1abc-71b3-97cc-2e662d702b12/20260626-155622-edited.png)
![6](https://cdn.hackclub.com/019f0626-c87d-7cba-bdd6-6c85389102d0/20260626-155708-edited.png)

I also managed to get 3D models working for all components in KiCAD so I could do full renders like what you see above.

![7](https://cdn.hackclub.com/019f062e-5b49-7400-8840-18d611797bc9/20260626-160524-edited.png)
![8](https://cdn.hackclub.com/019f062e-dee9-7d6c-8b82-878c8b134c4f/20260626-160558-edited.png)

This actually took a lot of work hunting down 3D models that would work for all the footprints. I think the models look great! Also it really helps to have the actual components on the board for taking renders. Sadly Onshape's support for importing models is pretty lame and slow and took me ages to get imported for rendering and building.

I rewrote the README. It has a lot more information now. After pondering and researching whether I should include a plate with this build, I realized that I actually don't need one and my original intent for including these models was kind of unnecessary. So for right now, I won't be modeling a plate and we'll be sticking with a bare PCB for right now. From my research, as long as there are 5 pins for each switch, it is stable enough and because it is low-profile, there is little to no advantage other than sound dampening and maybe some protection. I did attempt to model a plate though, but that was kind of wasted effort since I realized with how close together these keys are there is very little room for the plate to wedge by the diodes and switches (this board is VERY compact and optimized).

I put the gerbers into JLC and it's pretty cheap. I did optimize for cost, and I was very pleased to see that choosing a white PCB does not increase cost (this is great for the overall final build design)

![9](https://cdn.hackclub.com/019f06a8-2d19-791b-a9ad-4a6b64d31f45/20260626-181826-edited.png)

(also there is like $30 shipping which is pretty bad. I accounted for that in the BOM, hopefully it'll actually cost less when I enter my address, we'll see)

The very last thing remaining is writing up the firmware. I'll have to figure out how to get the interconnect part over USB-C working with the firmware and then make some key layers. I have finished up the BOM and the README so I'm almost at the finish line!

## 6/26/2026 - The firmware is done! Project complete!!

Time spent: 0.1h

I did a LOT of research of the different firmwares I could use for this. In the end, I decided on QMK because it can be the lightest and fastest for this chip. I didn't like ZMK because it's basically just for Bluetooth/battery keyboards and would not work well with my board that lacks wireless capabilities. KMK was also another option, however I don't think it's very lightweight (it runs Python...) and I feel like C, as a lower-level language, would provide better resource management, energy usage and lower latency.

I spent a few hours tinkering with the firmware to get it to build. I followed the docs to get it all set up on NixOS (which was a little more difficult than something like Debian, but it does seem like there is good unofficial support) and I struggled with the fact that QMK does not like projects stored outside of its config directory. I was able to symlink the folder from my Github project into my home and the builds worked pretty well. I am still a little confused with all the files in the firmware folder, I don't know why it can't just entirely be a JSON file. Anyways, I used a template setup for a Corne keyboard and it compiles! Unfortunately I don't have another keyboard to test it on, so I'll have to wait until I can build the keyboard before I can iterate on this firmware. But it is finished!

![1](https://cdn.hackclub.com/019f0716-0ba9-708e-a732-e6e5454ffb3a/20260626-201827-edited.png)

(note that I set the time spent here to 0.1 hours but I actually spent 3-4 hours on this. I think Hackatime tracked this well enough so I won't include any hours in this journal. Hackatime project name: NordBoard)

Seeing as the case, PCB, and firmware are all complete, this project is DONE. I'm sending it off for design review now!

## 07/08/2026 - Saving costs

Time spent: 0.15h

So my little brother showed me a trick which both simplifies my schematic and reduces fabrication cost! Instead of using mousebites, I've instead replaced them with a few indented areas and a silkscreen to show what needs to be dremmeled. Since I will have to dremmel the board, it'll save on printing fees since it won't be paneled as according to JLCPCB (and I won't be charged as such). Other than reducing cost, I have fixed a few issues with the ground plane for the USB-C receptacles so now it'll function better. Specifically, the ground plane islands weren't connecting to the primary plane so I used my (only) vias (with larger traces) to connect them together and reduce the area for ground to travel through. Also the wiring was kind of messy for the top level ground connections so I improved those too with wider traces.

![1](https://cdn.hackclub.com/019f4418-cd87-70d0-a5a2-9dc2c6ed7118/20260708-163818-edited.png)

I also rewired a lot of this area to reduce wasted space from the USB-C port and made it match evenly with the left side.

![2](https://cdn.hackclub.com/019f441b-ff23-71bf-97ba-bfa1241945b4/20260708-161143-edited.png)

Here are the updated schematic and PCB pictures:

![3](https://cdn.hackclub.com/019f441e-7212-724a-ad94-82588fa37a3f/20260708-164425-edited.png)

![4](https://cdn.hackclub.com/019f4420-9048-788f-9010-9d2a70c978c9/20260708-164646-edited.png)

## 07/21/2026 - Taking a new approach

Time spent: 2h

I've reviewed the feedback that Cyao gave me and I still want to keep this as a T2, so I will be moving away from a XIAO RP2040 and will instead be soldering a STM32F042K6T6 to the board. I am removing the right side's MCU and instead will be using a massive nonreversible interconnect cable to connect both boards together.

Left side with the unfinished MCU and interconnect:

![1](https://cdn.hackclub.com/019f867f-e60c-7c33-a5c0-513ad2ff14b6/20260721-140549-edited.png)

Right side with the unfinished interconnect and the MCU removed:

![2](https://cdn.hackclub.com/019f8680-6cf0-71b9-8a04-2ba9e5a4c650/20260721-140628-edited.png)

The USB-C interconnects have been upgraded to support more pins, as you can see.

I spent a lot of time researching the best approach for this setup. I found out that with this approach, it's much cheaper and I'll save on component costs and energy usage since the STM32 is more efficient for this board. It is also well supported by QMK but I will have to rewrite the firmware to make it think that the board is not split. Also - I had looked around to find a new interconnect cable that would be capable of supporting all the interconnect pins. This looks the most promising (and cheapest) so I'll add this to the BOM:

![3](https://ae-pic-a1.aliexpress-media.com/kf/Sc54c7a3081e74ab1be07f6bd2b0bc798L.jpg?width=1500&height=516&hash=2016)
![4](https://ae-pic-a1.aliexpress-media.com/kf/Sdcada97e91f042c28924582e489e1af6p.jpg?width=1500&height=500&hash=2000)

## 07/21/2026 - Finding a great new MCU, wiring most of it up

Time spent: 3h

So I went with a STM32 originally, but I wasn't happy about it. Look at this mess, there's so much I needed to do for it to safely work (all these components!!):

![0](https://cdn.hackclub.com/019f878b-55f3-7d1d-857c-6e67e6ed2cc1/20260721-185758-edited.png)

The STM32 chip I chose was over a decade old, not in stock in LCSC, super expensive (like $4 for a small underpowered outdated chip? Really?) and honestly it felt like it shouldn't even be recommended for new designs. I did a LOT of digging. Trust me, hours spent on finding the right MCU and researching how to use them (yet I am not counting them, I'm only counting hours making the schematic). I compared a bunch of these together and I really want to make something I can share with others at the lowest possible price. I found a line of products called the CH32 and they have zero QMK support. Yet, they are super cheap and it would work great for a keyboard! The thing is, there is not much documentation since it is a really new MCU but I'm willing to spend the time to get it working with my own firmware not based on QMK. I found an Arduino library that I can use for using it as an HID emulator, and I would just need to implement the matrix scanning and layers to have it work as a fully functioning keyboard.

![1](https://cdn.hackclub.com/019f877b-ad79-799a-82b9-9bcd6281d580/20260721-184052-edited.png)

I wired up the interconnect USB-C ports. This was really hard since I can't get this wrong. It has to run all of the wires (meaning all the columns and rows that the right side has) through that fat cable and because of how USB-C is designed, it flip flops RX/TX and I have to account for that.

![2](https://cdn.hackclub.com/019f8791-3ffe-7be1-9990-94b66e3e6f1c/20260721-190420-edited.png)

![3](https://cdn.hackclub.com/019f8791-77a6-72a0-9c6a-9f65480b0758/20260721-190434-edited.png)

Anyways this entire project has been a rollercoaster. I'm hoping that after this, I get a good opportunity to trim down the keyboard some more since it'll be smaller and even cheaper (we are going from two Xiaos ($20) to a MCU that costs just 56 cents on LCSC). In the next journal, I should have the schematic complete!

Side note: I plan on renaming this project soon. I don't know what yet, but seeing as this is a more technically complex project than I had anticipated, it feels fitting to rename it for the new v2 design that I'm going for here with the new MCU. I dont know, I'll keep thinking about it.

# 7/21/2026 - Finishing up the new schematic

Time spent: 1.5h

The schematic is DONE!!! Now I can finally work on the PCB (which honestly is the most fun part). Had a lot of struggles with DRC/ERC errors because of all the footprints, and I was able to massively reduce the amount of waste and diodes and capacitors as compared to the STM32 design. It is now very efficient and cheap and should work great!

![0](https://cdn.hackclub.com/019f8810-02bb-7745-bfb6-300a19935261/20260721-212253-edited.png)

![0](https://cdn.hackclub.com/019f87f6-6e56-7e41-9433-a805d7bb5d81/20260721-205446-edited.png)

Next journal should be me finishing up the PCB. It's gona be quite difficult since the components are so small. I'm going to save a LOT of space without these Xiaos! (this does mean that I'll have to rework my CAD model and firmware, though)

# 7/22/2026 - PCB work, and realizing that I messed up

Time spent: 2.5h

I've been hard at work on the PCB. It's been very difficult (as compared to the last iteration) because these USB-C ports are so tiny. This is the first time that I've had to use vias to route around these small areas, and I kind of went crazy with it. Honestly this has been a huge undertaking since I basically had to redo half the board since most of the lines were around the XIAO which got moved down to the board. I'm trying out a few names like Snowdrift for the board, I'm not sure I will settle on that yet.

![1](https://cdn.hackclub.com/019f8b72-c8e8-733a-9a4f-34b72b593324/20260722-130939-edited.png)

![2](https://cdn.hackclub.com/019f8b73-0627-7039-9d1c-f31c12b80d5e/20260722-130956-edited.png)

![3](https://cdn.hackclub.com/019f8b73-bac3-7590-8240-42e426d50e32/20260722-131041-edited.png)

I realized I made a huge mistake. First thing is that the MCU is way too far away from USB-C. Like I don't even know what I was thinking making it so far away like that, it's gonna add so much latency. So I'm going to redo that. However, the right side of the board is fully complete over USB-C and I haven't yet finished the wiring for all the capacitors and pulldowns yet, so I don't think this is a major issue. I am going to have to add a lot more space on the part of the PCB where the Xiao's were so I'm not particularly happy about that (since it makes it even more asymmetrical) but hopefully it will function better that way. Anyways, not going so good... hopefully the next devlog will be better.

## 7/22/2026 - Finishing the PCB!! Yay!!

Time spent: 4h

OK spent the ENTIRE day on this. I feel really happy now.

I realized a few times that I needed to move components around. The most major of these times was realizing I had placed the USB-C port 1mm too far up so I moved it down a millimeter. This is before:

![0](https://cdn.hackclub.com/019f8c94-126a-7ff3-acff-36238d9c488a/20260722-182539-edited.png)

And this is after:

![1](https://cdn.hackclub.com/019f8ccd-4b74-7a11-9517-c678ca4f3909/20260722-192808-edited.png)

That took a lot more time than it looked. Also, I had made a few schematic changes.

![2](https://cdn.hackclub.com/019f8cce-bbb2-72d5-8508-9fa27bb9dbcf/20260722-192943-edited.png)

From the above, you can see that I've moved away from using a button and instead I'm using a switch with the footprint of two test pads. This is cheaper, slimmer (so I can fit it into the side profile of the new board, between the key and the board's edge, just under the keycaps near the USB-C port so it has easy access) and fits a lot more with the ideology of this board.

I am renaming this project to Snowlayer. I am going to update the Github URLs but I don't think I can rename this Forge project.

THe most difficult part of the routing was my tendency to redo everything after realizing I can move components closer together. I also had a lot of difficulty with the USB-C ports since they were so jam packed together! And the MCU had much less spacing than I had with the XIAO. I'm glad I made this change - it does a lot to my end goal of reducing costs, increasing efficiency and reducing waste, although it will take a lot more of my time as I figure out a firmware.

Here's the DRC for anyone interested. I managed to fix everything, but I did have to adjust some settings because of the USB-C port restrictions, so I'm not really happy about that (it shouldn't affect JLCPCB price though and I think electrically it's fine)

![3](https://cdn.hackclub.com/019f8cd5-e48c-740f-9623-b8aceac0f17e/20260722-193731-edited.png)

The reason for the unconnected parts is because they are supposed to be connected together (they are linked in the schematic) but I am running a USB-C cable between them so that's the thing thats actually transferring the signals. So it will work, but I had to silence those DRC errors.

Another big change is that I switched to a dual ground plane pour, so now the top layer has a pour connected with a few stitchings that I placed around the USB-C ports. It actually looks cooler this way. Here is the 3D views!

![4](https://cdn.hackclub.com/019f8cd9-441e-72ac-84aa-1779d69756d6/20260722-194111-edited.png)

![5](https://cdn.hackclub.com/019f8cd9-bd06-7336-ab7b-ba15dca32e09/20260722-194139-edited.png)

Unfortunately, PCB price didn't change much. Didn't expect it to, but its still pretty cheap for what it is.

![6](https://cdn.hackclub.com/019f8ce7-38af-7127-a1b2-f0e043c2f349/20260722-195627-edited.png)

Thats it for this journal entry. Hopefully it's going to be the second-to-last as I finish up the base firmware and the new 3D CAD model. Maybe I'll even get it done tonight?? We'll see..
