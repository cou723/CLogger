# CLogger
c言語用のloggerを練習がてらつくってみました

# 導入方法
1. `c_logger_value.h`と`c_logger.h`をincludesディレクトリに配置
2. `logger.a`を一緒にコンパイル

そうすると、loggerを使いたいファイルで適宜ヘッダファイルをインクルードしてもらえれば各種log用関数と数値出力用のlog関数が使えるようになります

# 内容物
- logger.a (静的ライブラリ本体)
- include/c_logger.h (log出力用のヘッダー)
- include/c_logger_value.h (log出力用のヘッダー)

## c_logger.h
### マクロ
- C_LOGGER_DEBUG 0
- C_LOGGER_LOG 1
- C_LOGGER_WARNING 2
- C_LOGGER_ERROR 3
- 
があります

後述のc_logger_value_logを使うのに必要なマクロです

### typedef
{C_LOGGER_INT,C_LOGGER_SHORT,C_LOGGER_FLOAT,C_LOGGER_DOUBLE,C_LOGGER_CHAR,C_LOGGER_STR,C_LOGGER_LONG,C_LOGGER_LONG_LONG,C_LOGGER_UNSIGNED_INT,C_LOGGER_UNSIGNED_SHORT}の値をとるenumのC_LOGGER_TYPE型を追加します

後述のc_logger_value_logを使うのに必要な型です

### グローバル変数
- c_logger_log_mode

{C_LOGGER_DEBUG,C_LOGGER_LOG,WARN,C_LOGGER_ERROR}の値をとります

以下のような効果を持ちます

|値|効果|
|:--|:--|
|C_LOGGER_DEBUG|C_LOGGER_DEBUG,C_LOGGER_LOG,WARN,ERRORを出力します|
|C_LOGGER_LOG|C_LOGGER_LOG,WARN,ERRORを出力します|
|WARN|WARN,ERRORを出力します|
|C_LOGGER_ERROR|ERRORを出力します|

### 関数
```
void c_logger_debug_log(char *output_str);
void c_logger_log(char *output_str);
void c_logger_warning_log(char *output_str);
void c_logger_error_log(char *output_str);
```
それぞれ`output_str`に渡された文字列を出力します

出力するフォーマットは(DEBUGの場合は)
`[C_LOGGER_DEBUG: 日時] output_str\n`
のようになります

例
```
[C_LOGGER_DEBUG: 18:07:09] i_max (int) : 2147483647
[C_LOGGER_DEBUG: 18:07:09] i_min (int) : -2147483648
```

## c_logger_value.h

変数のデバッグに使えればなという機能があります

関数型マクロがほぼすべてを占めています
### マクロ
```
#define LOG_INT(x);
#define LOG_SHORT(x);
#define LOG_FLOAT(x);
#define LOG_DOUBLE(x);
#define LOG_CHAR(x);
#define LOG_STR(x);
#define LOG_LONG(x);
#define LOG_LONG_LONG(x);
#define LOG_UNSIGNED_INT(x);
#define LOG_UNSIGNED_SHORT(x);
```
それぞれの型の変数を変数名付きで出力する関数(関数型マクロ)です

全てdebugとして出力します

### 関数
```
void c_logger_value_log(void *value, char *value_name, int c_logger_log_mode, C_LOGGER_TYPE format);
```
一応ユーザーがこれを直接使うことはないと思います
