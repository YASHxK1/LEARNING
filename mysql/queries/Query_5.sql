create table EMPDEM
(
    EMPID      NUMBER,
    FIRST_NAME VARCHAR2(50),
    LAST_NAME  VARCHAR2(50),
    AGE        NUMBER,
    GENDER     VARCHAR2(50)
)
/

create table YKDB
(
    ID              NUMBER not null
        primary key,
    FULL_NAME       VARCHAR2(100),
    EMAIL           VARCHAR2(150),
    PHONE           VARCHAR2(20),
    AGE             VARCHAR2(10),
    GENDER          VARCHAR2(20),
    CITY            VARCHAR2(50),
    COUNTRY         VARCHAR2(50),
    SIGNUP_DATE     VARCHAR2(30),
    LAST_LOGIN      VARCHAR2(30),
    IS_ACTIVE       VARCHAR2(10),
    TOTAL_PURCHASES VARCHAR2(20),
    TOTAL_SPENT     VARCHAR2(20),
    RATING          VARCHAR2(10),
    NOTES           CLOB
)
/

