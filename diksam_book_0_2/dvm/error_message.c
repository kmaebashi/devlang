#include <string.h>
#include "dvm_pri.h"

ErrorDefinition dvm_error_message_format[] = {
    {"dummy"},
    {"不正なマルチバイト文字です。"},
    {"関数$(name)が見付かりません。"},
    {"関数$(name)が重複定義されています。"},
    {"配列の範囲エラー。サイズ$(size)の配列の$(index)をアクセスしています。"},
    {"整数値をゼロで除算しています。"},
    {"nullを参照しています。"},
    {"dummy"}
};
