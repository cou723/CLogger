# CLogger
c言語用のloggerを練習がてらつくってみました

# 内容物
- logger.a (静的ライブラリ本体)
- include/log.h (log出力用のヘッダー)
- include/value_log.h (log出力用のヘッダー)

## log.h
### マクロ
- DEBUG 0
- LOG 1
- WARNING 2
- ERROR 3
があります
後述のvalue_logを使うのに必要なマクロです

### typedef
{INT,SHORT,FLOAT,DOUBLE,CHAR,STR,LONG,LONG_LONG,UNSIGNED_INT,UNSIGNED_SHORT}の値をとるenumのTYPE型を追加します
後述のvalue_logを使うのに必要な型です

### グローバル変数
- log_mode
{DEBUG,LOG,WARN,ERROR}の値をとります
以下のような効果を持ちます

|値|効果|
|:--|:--|
|DEBUG|DEBUG,LOG,WARN,ERRORを出力します|
|LOG|LOG,WARN,ERRORを出力します|
|WARN|WARN,ERRORを出力します|
|ERROR|ERRORを出力します|

### 関数
```
void debug_log(char *output_str);
void normal_log(char *output_str);
void warning_log(char *output_str);
void error_log(char *output_str);
```
それぞれ`output_str`に渡された文字列を出力します
出力するフォーマットは(DEBUGの場合は)
`[DEBUG: 日時] output_str\n`
のようになります

例
```
[DEBUG: 18:07:09] i_max (int) : 2147483647
[DEBUG: 18:07:09] i_min (int) : -2147483648
```

## value_log.h
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
void value_log(void *value, char *value_name, int log_mode, TYPE format);
```
一応ユーザーがこれを直接使うことはないと思います
