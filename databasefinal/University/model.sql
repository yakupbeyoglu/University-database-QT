CREATE TABLE [dbo].[admin] (
    [username] VARCHAR (15) NOT NULL,
    [password] VARCHAR (15) NOT NULL,
    PRIMARY KEY CLUSTERED ([username] ASC)
);

GO
CREATE TABLE [dbo].[advisor] (
    [s_id] NVARCHAR (50) NOT NULL,
    [i_id] NVARCHAR (50) NULL
);

GO
CREATE TABLE [dbo].[classroom] (
    [building] NVARCHAR (50) NOT NULL,
    [room_no]  NVARCHAR (50) NOT NULL,
    [capacity] NVARCHAR (50) NULL
);

GO
CREATE TABLE [dbo].[course] (
    [course_id] NVARCHAR (50) NOT NULL,
    [title]     NVARCHAR (50) NULL,
    [dept_name] NVARCHAR (50) NULL,
    [credits]   NVARCHAR (50) NULL
);

GO
CREATE TABLE [dbo].[department] (
    [dept_name] NVARCHAR (50) NOT NULL,
    [building]  NVARCHAR (50) NULL,
    [budget]    NVARCHAR (50) NULL
);

GO
CREATE TABLE [dbo].[instructor] (
    [ID]        INT           NOT NULL,
    [name]      NVARCHAR (50) NULL,
    [dept_name] NVARCHAR (50) NULL,
    [salary]    NVARCHAR (50) NULL,
    [password]  VARCHAR (15)  NULL
);

GO
CREATE TABLE [dbo].[login] (
    [username] VARCHAR (20) NOT NULL,
    [password] VARCHAR (20) NULL,
    [type]     INT          NULL,
    PRIMARY KEY CLUSTERED ([username] ASC)
);

GO
CREATE TABLE [dbo].[prereq] (
    [course_id] NVARCHAR (50) NOT NULL,
    [prereq_id] NVARCHAR (50) NOT NULL
);

GO
CREATE TABLE [dbo].[section] (
    [course_id]    NVARCHAR (50) NULL,
    [sec_id]       NVARCHAR (50) NOT NULL,
    [semester]     NVARCHAR (50) NULL,
    [year]         NVARCHAR (50) NULL,
    [building]     NVARCHAR (50) NULL,
    [room_no]      NVARCHAR (50) NULL,
    [time_slot_id] NVARCHAR (50) NULL
);

GO
CREATE TABLE [dbo].[student] (
    [ID]        INT           NOT NULL,
    [name]      NVARCHAR (50) NULL,
    [dept_name] NVARCHAR (50) NULL,
    [tot_cred]  NVARCHAR (50) NULL,
    [password]  VARCHAR (15)  NULL
);

GO
CREATE TABLE [dbo].[Takes] (
    [ID]        INT          NOT NULL,
    [course_id] VARCHAR (50) NOT NULL,
    [sec_id]    VARCHAR (50) NOT NULL,
    [semester]  VARCHAR (50) NOT NULL,
    [year]      VARCHAR (50) NOT NULL,
    [grade]     VARCHAR (50) NULL,
    PRIMARY KEY CLUSTERED ([ID] ASC, [course_id] ASC, [sec_id] ASC, [semester] ASC, [year] ASC)
);

GO
CREATE TABLE [dbo].[teaches] (
    [ID]        INT           NOT NULL,
    [course_id] NVARCHAR (50) NOT NULL,
    [sec_id]    NVARCHAR (50) NOT NULL,
    [semester]  NVARCHAR (50) NOT NULL,
    [year]      NVARCHAR (50) NOT NULL
);

GO
CREATE TABLE [dbo].[test] (
    [id]      VARCHAR (10) NOT NULL,
    [surname] VARCHAR (10) NOT NULL,
    PRIMARY KEY CLUSTERED ([id] ASC, [surname] ASC)
);

GO
CREATE TABLE [dbo].[time_slot] (
    [time_slot_id] NVARCHAR (50) NOT NULL,
    [day]          NVARCHAR (50) NULL,
    [start_time]   NVARCHAR (50) NULL,
    [end_time]     NVARCHAR (50) NULL
);

GO
CREATE TABLE [dbo].[yakup] (
    [salary] FLOAT (53)  NULL,
    [ssn]    VARCHAR (5) NOT NULL,
    PRIMARY KEY CLUSTERED ([ssn] ASC)
);

GO
ALTER TABLE [dbo].[advisor]
    ADD CONSTRAINT [PK_advisor] PRIMARY KEY CLUSTERED ([s_id] ASC);

GO
ALTER TABLE [dbo].[classroom]
    ADD CONSTRAINT [PK_classroom] PRIMARY KEY CLUSTERED ([building] ASC, [room_no] ASC);

GO
ALTER TABLE [dbo].[course]
    ADD CONSTRAINT [PK_course] PRIMARY KEY CLUSTERED ([course_id] ASC);

GO
ALTER TABLE [dbo].[department]
    ADD CONSTRAINT [PK_department] PRIMARY KEY CLUSTERED ([dept_name] ASC);

GO
ALTER TABLE [dbo].[instructor]
    ADD CONSTRAINT [PK_instructor] PRIMARY KEY CLUSTERED ([ID] ASC);

GO
ALTER TABLE [dbo].[prereq]
    ADD CONSTRAINT [PK_prereq] PRIMARY KEY CLUSTERED ([course_id] ASC, [prereq_id] ASC);

GO
ALTER TABLE [dbo].[section]
    ADD CONSTRAINT [PK_section] PRIMARY KEY CLUSTERED ([sec_id] ASC);

GO
ALTER TABLE [dbo].[student]
    ADD CONSTRAINT [PK_student] PRIMARY KEY CLUSTERED ([ID] ASC);

GO
ALTER TABLE [dbo].[teaches]
    ADD CONSTRAINT [PK_teaches] PRIMARY KEY CLUSTERED ([ID] ASC, [course_id] ASC, [sec_id] ASC, [semester] ASC, [year] ASC);

GO
ALTER TABLE [dbo].[time_slot]
    ADD CONSTRAINT [PK_time_slot] PRIMARY KEY CLUSTERED ([time_slot_id] ASC);

GO
GRANT VIEW ANY COLUMN ENCRYPTION KEY DEFINITION TO PUBLIC;

GO
GRANT VIEW ANY COLUMN MASTER KEY DEFINITION TO PUBLIC;

GO
