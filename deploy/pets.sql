-- Deploy sandbox.cppcms:pets to sqlite

BEGIN;

CREATE TABLE pets (
        id         INTEGER   PRIMARY KEY,
        gategory   INTEGER   NOT NULL   ,
        name       TEXT      NOT NULL   ,
        photoUrls  TEXT      NOT NULL   ,
        tags       TEXT      NOT NULL   ,
        status     INTEGER   NOT NULL
);

COMMIT;
