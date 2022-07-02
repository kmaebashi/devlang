#include <string.h>
#include "dvm_pri.h"

DVM_ErrorDefinition dvm_error_message_format[] = {
    {"dummy"},
    {"不正なマルチバイト文字です。"},
    {"関数$(name)が見付かりません。"},
    {"関数$(package)#$(name)が重複定義されています。"},
    {"配列の範囲エラー。サイズ$(size)の配列の$(index)をアクセスしています。"},
    {"整数値をゼロで除算しています。"},
    {"nullを参照しています。"},
    {"ロードするファイルが見付かりません$(file)"},
    {"ファイルのロードでエラーが発生しました($(status))。"},
    {"クラス$(package)#$(name)が重複定義されています。"},
    {"クラス$(name)が見付かりません。"},
    {"このオブジェクトのクラスは$(org)です。"
     "$(target)にダウンキャストはできません。"},
    {"関数$(name)にはパッケージ指定がないのでダイナミックロードできません。"},
    {"dummy"}
};

DVM_ErrorDefinition dvm_native_error_message_format[] = {
    {"配列の範囲エラー。サイズ$(size)の配列の$(pos)に"
     "insertしようとしています。"},
    {"配列の範囲エラー。サイズ$(size)の配列の$(pos)を"
     "removeしようとしています。"},
    {"文字列中の位置指定が範囲外です。"
     "長さ$(len)の文字列に対し$(pos)を指定しています。"},
    {"文字列のsubstr()の第2引数(切り出す文字列長)が範囲外($(len))です。"},
};
