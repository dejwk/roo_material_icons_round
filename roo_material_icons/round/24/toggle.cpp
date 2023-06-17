#include "toggle.h"

using namespace roo_display;

// Image file ic_round_24_toggle_check_box_outline_blank 24x24, 4-bit Alpha,  RLE, 38 bytes.
static const uint8_t ic_round_24_toggle_check_box_outline_blank_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0x81, 0xD4, 0xDF, 0xFA, 0x0D, 0xA7, 0x7C, 0x77, 0xC7, 0x7C, 0x77, 0xC7, 0x7C,
  0x77, 0xC7, 0x7C, 0x77, 0xC7, 0x7C, 0x77, 0xC7, 0x7C, 0x77, 0xC7, 0x7C, 0x77, 0xA0, 0xDF, 0xFA,
  0x81, 0xD4, 0xDF, 0xF0, 0xD0, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_check_box_outline_blank() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_round_24_toggle_check_box_outline_blank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_check_box 24x24, 4-bit Alpha,  RLE, 65 bytes.
static const uint8_t ic_round_24_toggle_check_box_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0x81, 0xD4, 0xDF, 0xFA, 0x0D, 0xFF, 0xFF, 0xC0, 0xCF, 0xFA, 0x81, 0xA0, 0x7F,
  0xF0, 0xA2, 0x07, 0xFE, 0x0A, 0x20, 0x7E, 0x0C, 0xE0, 0xA2, 0x07, 0xE8, 0x17, 0x0A, 0xC0, 0xA2,
  0x07, 0xF0, 0x72, 0x0A, 0xA0, 0xA2, 0x07, 0xFA, 0x07, 0x20, 0x0A, 0x20, 0x7F, 0xC0, 0x74, 0x07,
  0xFE, 0x07, 0x20, 0x7F, 0xF9, 0x00, 0x78, 0x0D, 0x2F, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0x0D,
  0x04,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_check_box() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_round_24_toggle_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_indeterminate_check_box 24x24, 4-bit Alpha,  RLE, 25 bytes.
static const uint8_t ic_round_24_toggle_indeterminate_check_box_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0x81, 0xD4, 0xDF, 0xFA, 0x0D, 0x80, 0x9D, 0x4F, 0x73, 0xF9, 0x73, 0x80, 0x9D,
  0x4F, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0x0D, 0x04,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_indeterminate_check_box() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_round_24_toggle_indeterminate_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_radio_button_checked 24x24, 4-bit Alpha,  RLE, 149 bytes.
static const uint8_t ic_round_24_toggle_radio_button_checked_data[] PROGMEM = {
  0x68, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x30, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x08, 0xA8, 0x1C, 0x62,
  0x28, 0x12, 0x6C, 0xA0, 0x85, 0x08, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x30, 0x4A, 0x04, 0x73, 0x04,
  0xA0, 0x42, 0x81, 0xDF, 0x63, 0x84, 0x4B, 0xEE, 0xB4, 0x38, 0x56, 0xFD, 0x05, 0xFC, 0x30, 0x8E,
  0x08, 0x38, 0x4C, 0xF5, 0x9F, 0x62, 0x04, 0xF9, 0x04, 0x28, 0x46, 0xF9, 0xDF, 0x22, 0x0B, 0xF9,
  0x0B, 0x28, 0x22, 0xFD, 0xE9, 0x30, 0xEF, 0x90, 0xE3, 0x90, 0x0E, 0x93, 0x0E, 0xF9, 0x0E, 0x39,
  0x82, 0xED, 0xF2, 0x20, 0xBF, 0x90, 0xB2, 0x84, 0x2F, 0xD9, 0xF6, 0x20, 0x4F, 0x90, 0x42, 0x84,
  0x6F, 0x95, 0xFC, 0x30, 0x8E, 0x08, 0x38, 0x5C, 0xF5, 0x0D, 0xF6, 0x38, 0x44, 0xBE, 0xEB, 0x43,
  0x81, 0x6F, 0xD2, 0x04, 0xA0, 0x47, 0x30, 0x4A, 0x04, 0x30, 0x8A, 0x06, 0x71, 0x06, 0xA0, 0x85,
  0x08, 0xA8, 0x1C, 0x62, 0x28, 0x12, 0x6C, 0xA0, 0x87, 0x04, 0x0D, 0xF9, 0x0D, 0x04, 0x73, 0x86,
  0x59, 0xDE, 0xED, 0x95, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_radio_button_checked() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_round_24_toggle_radio_button_checked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_radio_button_unchecked 24x24, 4-bit Alpha,  RLE, 119 bytes.
static const uint8_t ic_round_24_toggle_radio_button_unchecked_data[] PROGMEM = {
  0x68, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x30, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x08, 0xA8, 0x1C, 0x62,
  0x28, 0x12, 0x6C, 0xA0, 0x85, 0x08, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x30, 0x4A, 0x04, 0x73, 0x04,
  0xA0, 0x42, 0x81, 0xDF, 0x67, 0x58, 0x56, 0xFD, 0x05, 0xFC, 0x77, 0x84, 0xCF, 0x59, 0xF6, 0x77,
  0x84, 0x6F, 0x9D, 0xF2, 0x77, 0x82, 0x2F, 0xDE, 0x97, 0x72, 0x90, 0x0E, 0x97, 0x72, 0x98, 0x2E,
  0xDF, 0x27, 0x78, 0x42, 0xFD, 0x9F, 0x67, 0x78, 0x46, 0xF9, 0x5F, 0xC7, 0x78, 0x5C, 0xF5, 0x0D,
  0xF6, 0x75, 0x81, 0x6F, 0xD2, 0x04, 0xA0, 0x47, 0x30, 0x4A, 0x04, 0x30, 0x8A, 0x06, 0x71, 0x06,
  0xA0, 0x85, 0x08, 0xA8, 0x1C, 0x62, 0x28, 0x12, 0x6C, 0xA0, 0x87, 0x04, 0x0D, 0xF9, 0x0D, 0x04,
  0x73, 0x86, 0x59, 0xDE, 0xED, 0x95, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_radio_button_unchecked() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_round_24_toggle_radio_button_unchecked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_star_border 24x24, 4-bit Alpha,  RLE, 123 bytes.
static const uint8_t ic_round_24_toggle_star_border_data[] PROGMEM = {
  0x72, 0x00, 0x37, 0x74, 0x00, 0x97, 0x73, 0x01, 0xA0, 0x17, 0x72, 0x07, 0xA0, 0x77, 0x72, 0x82,
  0xDC, 0xCD, 0x77, 0x18, 0x45, 0xF6, 0x6F, 0x57, 0x48, 0x31, 0x34, 0xCE, 0x28, 0x3E, 0xC5, 0x32,
  0x40, 0x70, 0xDE, 0x08, 0x20, 0x8E, 0x82, 0xD7, 0x08, 0xA8, 0x28, 0x54, 0x34, 0x82, 0x34, 0x58,
  0xA0, 0x83, 0x82, 0x6F, 0xD2, 0x71, 0x82, 0x2D, 0xF6, 0x58, 0x24, 0xEE, 0x46, 0x82, 0x3E, 0xE4,
  0x78, 0x22, 0xDF, 0x14, 0x82, 0x1F, 0xD3, 0x72, 0x0A, 0x0E, 0x60, 0xE0, 0xA7, 0x30, 0xD0, 0xB2,
  0x00, 0x42, 0x0B, 0x0D, 0x72, 0x83, 0x2F, 0x71, 0xAA, 0x83, 0xA1, 0x7F, 0x27, 0x18, 0x92, 0x5F,
  0xBE, 0xF8, 0x8F, 0xEB, 0xF5, 0x71, 0x09, 0xA0, 0xB0, 0x22, 0x02, 0x0B, 0xA0, 0x97, 0x18, 0x1C,
  0xE5, 0x68, 0x15, 0xEC, 0x71, 0x09, 0x01, 0x71, 0x01, 0x09, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_star_border() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 20), Box(0, 0, 23, 23),
      ic_round_24_toggle_star_border_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_star_border_purple500 24x24, 4-bit Alpha,  RLE, 111 bytes.
static const uint8_t ic_round_24_toggle_star_border_purple500_data[] PROGMEM = {
  0x72, 0x00, 0x27, 0x74, 0x00, 0x77, 0x74, 0x00, 0xB7, 0x73, 0x01, 0xA0, 0x17, 0x72, 0x05, 0xA0,
  0x57, 0x72, 0x0A, 0xA0, 0xA7, 0x72, 0x0E, 0xA0, 0xE7, 0x71, 0x84, 0x4F, 0xCC, 0xF4, 0x70, 0x50,
  0xEF, 0x00, 0x7F, 0x83, 0xE5, 0x01, 0xBE, 0x00, 0x3E, 0x0B, 0x01, 0x40, 0x7A, 0x0C, 0x02, 0x40,
  0x20, 0xCA, 0x07, 0x78, 0x33, 0xDF, 0xE4, 0x28, 0x34, 0xEF, 0xD3, 0x73, 0x81, 0xEF, 0x32, 0x81,
  0x3F, 0xE7, 0x48, 0x90, 0x2F, 0xE2, 0xCC, 0x2E, 0xF2, 0x73, 0x82, 0x7F, 0xDE, 0xA8, 0x2E, 0xDF,
  0x77, 0x30, 0xCB, 0x00, 0xAB, 0x0C, 0x72, 0x01, 0xB0, 0x72, 0x06, 0xB0, 0x17, 0x18, 0x26, 0xFD,
  0x34, 0x82, 0x3D, 0xF6, 0x71, 0x81, 0xAB, 0x16, 0x81, 0x1B, 0xB7, 0x10, 0x77, 0x30, 0x74,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_star_border_purple500() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_round_24_toggle_star_border_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_star_half 24x24, 4-bit Alpha,  RLE, 111 bytes.
static const uint8_t ic_round_24_toggle_star_half_data[] PROGMEM = {
  0x72, 0x00, 0x37, 0x74, 0x00, 0x97, 0x73, 0x01, 0xA0, 0x17, 0x72, 0x07, 0xA0, 0x77, 0x72, 0x82,
  0xDF, 0xCD, 0x77, 0x10, 0x5A, 0x81, 0x6F, 0x57, 0x48, 0x21, 0x34, 0xCA, 0x18, 0x3E, 0xC5, 0x32,
  0x40, 0x70, 0xDF, 0x91, 0x08, 0xE8, 0x2D, 0x70, 0x8F, 0x92, 0x82, 0x34, 0x58, 0xA0, 0x83, 0x06,
  0xF4, 0x82, 0x2D, 0xF6, 0x50, 0x40, 0xED, 0x38, 0x23, 0xEE, 0x47, 0x02, 0x0D, 0xC2, 0x82, 0x1F,
  0xD3, 0x72, 0x0A, 0xC3, 0x0E, 0x0A, 0x73, 0x0D, 0xC0, 0x42, 0x0B, 0x0D, 0x72, 0x02, 0xE8, 0x3A,
  0x17, 0xF2, 0x71, 0x05, 0xC8, 0x58, 0x8F, 0xEB, 0xF5, 0x71, 0x09, 0xA0, 0xB0, 0x22, 0x02, 0x0B,
  0xA0, 0x97, 0x18, 0x1C, 0xE5, 0x68, 0x15, 0xEC, 0x71, 0x09, 0x01, 0x71, 0x01, 0x09, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_star_half() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 20), Box(0, 0, 23, 23),
      ic_round_24_toggle_star_half_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_star_outline 24x24, 4-bit Alpha,  RLE, 123 bytes.
static const uint8_t ic_round_24_toggle_star_outline_data[] PROGMEM = {
  0x72, 0x00, 0x37, 0x74, 0x00, 0x97, 0x73, 0x01, 0xA0, 0x17, 0x72, 0x07, 0xA0, 0x77, 0x72, 0x82,
  0xDC, 0xCD, 0x77, 0x18, 0x45, 0xF6, 0x6F, 0x57, 0x48, 0x31, 0x34, 0xCE, 0x28, 0x3E, 0xC5, 0x32,
  0x40, 0x70, 0xDE, 0x08, 0x20, 0x8E, 0x82, 0xD7, 0x08, 0xA8, 0x28, 0x54, 0x34, 0x82, 0x34, 0x58,
  0xA0, 0x83, 0x82, 0x6F, 0xD2, 0x71, 0x82, 0x2D, 0xF6, 0x58, 0x24, 0xEE, 0x46, 0x82, 0x3E, 0xE4,
  0x78, 0x22, 0xDF, 0x14, 0x82, 0x1F, 0xD3, 0x72, 0x0A, 0x0E, 0x60, 0xE0, 0xA7, 0x30, 0xD0, 0xB2,
  0x00, 0x42, 0x0B, 0x0D, 0x72, 0x83, 0x2F, 0x71, 0xAA, 0x83, 0xA1, 0x7F, 0x27, 0x18, 0x92, 0x5F,
  0xBE, 0xF8, 0x8F, 0xEB, 0xF5, 0x71, 0x09, 0xA0, 0xB0, 0x22, 0x02, 0x0B, 0xA0, 0x97, 0x18, 0x1C,
  0xE5, 0x68, 0x15, 0xEC, 0x71, 0x09, 0x01, 0x71, 0x01, 0x09, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_star_outline() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 20), Box(0, 0, 23, 23),
      ic_round_24_toggle_star_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_star 24x24, 4-bit Alpha,  RLE, 92 bytes.
static const uint8_t ic_round_24_toggle_star_data[] PROGMEM = {
  0x72, 0x00, 0x37, 0x74, 0x00, 0x97, 0x73, 0x01, 0xA0, 0x17, 0x72, 0x07, 0xA0, 0x77, 0x72, 0x0D,
  0xA0, 0xD7, 0x71, 0x05, 0xC0, 0x57, 0x48, 0x21, 0x34, 0xCC, 0x82, 0xC4, 0x31, 0x40, 0x70, 0xDF,
  0xFA, 0x82, 0xD7, 0x08, 0xFF, 0xA0, 0x83, 0x06, 0xFF, 0x06, 0x50, 0x40, 0xEF, 0xB0, 0xE0, 0x47,
  0x02, 0x0D, 0xF9, 0x0D, 0x02, 0x72, 0x0A, 0xF9, 0x0A, 0x73, 0x0D, 0xF9, 0x0D, 0x72, 0x02, 0xFB,
  0x02, 0x71, 0x05, 0xC0, 0x08, 0xC0, 0x57, 0x10, 0x9A, 0x0B, 0x02, 0x20, 0x20, 0xBA, 0x09, 0x71,
  0x81, 0xCE, 0x56, 0x81, 0x5E, 0xC7, 0x10, 0x90, 0x17, 0x10, 0x10, 0x94,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_star() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 20), Box(0, 0, 23, 23),
      ic_round_24_toggle_star_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_star_purple500 24x24, 4-bit Alpha,  RLE, 111 bytes.
static const uint8_t ic_round_24_toggle_star_purple500_data[] PROGMEM = {
  0x72, 0x00, 0x27, 0x74, 0x00, 0x77, 0x74, 0x00, 0xB7, 0x73, 0x01, 0xA0, 0x17, 0x72, 0x05, 0xA0,
  0x57, 0x72, 0x0A, 0xA0, 0xA7, 0x72, 0x0E, 0xA0, 0xE7, 0x71, 0x84, 0x4F, 0xCC, 0xF4, 0x70, 0x50,
  0xEF, 0x00, 0x7F, 0x83, 0xE5, 0x01, 0xBE, 0x00, 0x3E, 0x0B, 0x01, 0x40, 0x7A, 0x0C, 0x02, 0x40,
  0x20, 0xCA, 0x07, 0x78, 0x33, 0xDF, 0xE4, 0x28, 0x34, 0xEF, 0xD3, 0x73, 0x81, 0xEF, 0x32, 0x81,
  0x3F, 0xE7, 0x48, 0x90, 0x2F, 0xE2, 0xCC, 0x2E, 0xF2, 0x73, 0x82, 0x7F, 0xDE, 0xA8, 0x2E, 0xDF,
  0x77, 0x30, 0xCB, 0x00, 0xAB, 0x0C, 0x72, 0x01, 0xB0, 0x72, 0x06, 0xB0, 0x17, 0x18, 0x26, 0xFD,
  0x34, 0x82, 0x3D, 0xF6, 0x71, 0x81, 0xAB, 0x16, 0x81, 0x1B, 0xB7, 0x10, 0x77, 0x30, 0x74,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_star_purple500() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_round_24_toggle_star_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_toggle_off 24x24, 4-bit Alpha,  RLE, 57 bytes.
static const uint8_t ic_round_24_toggle_toggle_off_data[] PROGMEM = {
  0x28, 0x14, 0xBE, 0xFB, 0x81, 0xEB, 0x43, 0x08, 0xFF, 0xA8, 0x18, 0x04, 0xA8, 0x27, 0x11, 0x7F,
  0xD8, 0x24, 0xBF, 0x74, 0x07, 0xFC, 0x82, 0xBE, 0xF1, 0x40, 0x1F, 0xC8, 0x2E, 0xEF, 0x14, 0x01,
  0xFC, 0x82, 0xEB, 0xF7, 0x40, 0x7F, 0xC0, 0xB0, 0x4A, 0x82, 0x71, 0x17, 0xFD, 0x81, 0x40, 0x8F,
  0xFA, 0x08, 0x38, 0x14, 0xBE, 0xFB, 0x81, 0xEB, 0x42,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_toggle_off() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 7, 21, 16), Box(0, 0, 23, 23),
      ic_round_24_toggle_toggle_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_toggle_toggle_on 24x24, 4-bit Alpha,  RLE, 57 bytes.
static const uint8_t ic_round_24_toggle_toggle_on_data[] PROGMEM = {
  0x28, 0x14, 0xBE, 0xFB, 0x81, 0xEB, 0x43, 0x08, 0xFF, 0xA8, 0x18, 0x04, 0xFD, 0x82, 0x71, 0x17,
  0xA0, 0x40, 0xBF, 0xC0, 0x74, 0x82, 0x7F, 0xBE, 0xFC, 0x01, 0x48, 0x21, 0xFE, 0xEF, 0xC0, 0x14,
  0x82, 0x1F, 0xEB, 0xFC, 0x07, 0x48, 0x27, 0xFB, 0x4F, 0xD8, 0x27, 0x11, 0x7A, 0x81, 0x40, 0x8F,
  0xFA, 0x08, 0x38, 0x14, 0xBE, 0xFB, 0x81, 0xEB, 0x42,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_toggle_toggle_on() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 7, 21, 16), Box(0, 0, 23, 23),
      ic_round_24_toggle_toggle_on_data, Alpha4(color::Black));
  return value;
}
