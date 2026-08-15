# My StoryBook — GPCE063 / FreeRTOS Embedded Demo

Historical embedded-software project for a storybook / interactive-audio device built around the Sunplus GPCE063 platform and FreeRTOS.

The repository preserves application code, board-support code, a FreeRTOS port, audio resources, file-system support, sensor access, and diagnostic experiments from the original project.

> **Project status:** Historical / reference project. The code targets an older Sunplus development environment and should be treated as an archived embedded-system implementation rather than a current turnkey build.

## Overview

The project combines several embedded-system functions around the GPCE063 platform:

- FreeRTOS task scheduling and context switching
- audio decoding and playback
- motion / G-sensor access over I2C
- Petit FAT file-system experiments
- interrupt handling and diagnostics
- board-support and low-level peripheral code
- application-level audio / interaction behavior

The repository history also documents work on the FreeRTOS port itself, including context-switch handling, interrupt integration, and later migration to FreeRTOS V7.4.2.

## Repository Layout

```text
My_StoryBook/
├── APP/
│   ├── gpce063_diagnostic/   GPCE063 diagnostics, audio and platform experiments
│   ├── pff/                  Petit FAT file-system support / samples
│   ├── ParTest/              Peripheral / application test code
│   ├── debug_led/            Debug LED support
│   └── include/              Application configuration headers
├── BSP/                      Board-support and low-level driver code
├── FreeRTOS/                 FreeRTOS kernel / port source
├── readme.txt                Historical note
└── README.md                 Project overview
```

## FreeRTOS Configuration

The current `APP/include/FreeRTOSConfig.h` identifies the tree as using **FreeRTOS V7.4.2**.

Key configuration values include:

```text
CPU clock        : 49.152 MHz
Tick rate        : 64 Hz
Preemption       : enabled
Max priorities   : 8
Minimal stack    : 128
Heap size        : 1024 bytes
16-bit ticks     : enabled
Idle hook        : enabled
Tick hook        : enabled
```

The older root-level `readme.txt` still says `FreeRTOS V7.0.1`; that file predates the later upgrade recorded in the repository history.

## Historical Development Work

The commit history shows several major areas of development:

### FreeRTOS Porting

Earlier commits document work on the scheduler / context-switch path, including:

- moving context-switch code between C and assembly
- implementing `_portSAVE_CONTEXT`
- implementing `_portRESTORE_CONTEXT`
- fixing context-switch behavior
- modifying interrupt state handling
- integrating `vPortYieldFromTick()` and critical-section support

This indicates that the project included low-level RTOS porting work for the target platform rather than only application-level use of an existing FreeRTOS port.

### FreeRTOS Upgrade

The project was later upgraded to **FreeRTOS V7.4.2**.

### Audio

The history documents:

- integration of the A1600 audio decode path
- background audio playback
- story / demo audio resources
- spoken-number resources

The diagnostic application includes GPCE063-specific assembly, resource, and audio-support files associated with this path.

### Sensor and I2C Work

The project also records:

- I2C testing
- BMA180 chip-ID access
- software-I2C work
- motion / G-sensor-triggered audio behavior

### File-System Experiments

Petit FAT File System (`pff`) code and sample integration are included for lightweight storage access.

## Architecture

At a high level, the software can be viewed as:

```text
                 +-------------------------+
                 |     Application Logic   |
                 | Story / Audio Behavior  |
                 +------------+------------+
                              |
              +---------------+---------------+
              |                               |
     +--------v---------+            +--------v---------+
     |    FreeRTOS      |            |  Audio / Sensor  |
     | tasks / timing   |            |  application     |
     +--------+---------+            +--------+---------+
              |                               |
              +---------------+---------------+
                              |
                    +---------v---------+
                    |       BSP         |
                    | IRQ / I2C / GPIO  |
                    | device support    |
                    +---------+---------+
                              |
                    +---------v---------+
                    | Sunplus GPCE063   |
                    +-------------------+
```

## Toolchain Notes

This is **not** a conventional GCC/CMake project.

The source tree contains GPCE063-specific files such as:

```text
*.asm
*.inc
Device.env
*.bdy
```

and was developed for the historical Sunplus toolchain / IDE environment used with the GPCE063 platform.

A modern rebuild may require reconstructing the original vendor toolchain, project configuration, and device-support environment.

## Relationship to `tom_wheel_demo`

This repository and [`tom_wheel_demo`](https://github.com/cctsao1008/tom_wheel_demo) share a significant portion of their historical code lineage, including FreeRTOS porting, GPCE063 diagnostics, audio work, Petit FAT integration, and sensor / I2C experiments.

`My_StoryBook` is retained as its own historical project snapshot because it represents the storybook-oriented branch / usage context of that work.

## Historical Notes

The current default branch is `FREERTOS`, reflecting the branch on which the FreeRTOS-based implementation is preserved.

The repository spans work from the early 2010s and contains legacy third-party code, vendor-specific platform files, and historical FreeRTOS sources. Some build assumptions and external dependencies are therefore no longer current.

## License and Provenance

This repository contains a mixture of project-specific code and historical third-party components, including FreeRTOS and vendor/platform support code.

No single repository-level license file currently defines the licensing terms for the complete tree. Before redistributing or reusing individual components, review the copyright and license notices in the corresponding source files and upstream projects.
