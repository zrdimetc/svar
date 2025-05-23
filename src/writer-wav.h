/*
 * SVAR - writer-wav.h
 * SPDX-FileCopyrightText: 2010-2025 Arkadiusz Bokowy and contributors
 * SPDX-License-Identifier: MIT
 */

#pragma once
#ifndef SVAR_WRITER_WAV_H_
#define SVAR_WRITER_WAV_H_

#include "pcm.h"
#include "writer.h"

struct writer * writer_wav_new(
		enum pcm_format format, unsigned int channels, unsigned int sampling);

#endif
