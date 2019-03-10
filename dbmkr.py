import sqlite3
import time



def startdb():
    global conn, cur
    conn = sqlite3.connect('mood.db')
    cur = conn.cursor()

def closedb():
    conn.commit() # save changes
    conn.close()

"""
Creating table in SQL connect()
SQL commands are in CAPS (sqlite3 is case sensitive)
moodData is the name of the table
"""
def connect():
    startdb()
    cur.execute('CREATE TABLE IF NOT EXISTS moodData( unixTime REAL, name TEXT, mood REAL, breakfast TEXT, SBAT TEXT, Bible TEXT, note TEXT )')
    closedb()

# def data_entry():
#     startdb()
#     cur.execute("INSERT INTO moodData VALUES('March 9 2019', 'YasuE', 3, 'true', 'false', 'false')")
#     conn.commit() # save changes
#     cur.close()
#     conn.close()

def dynamic_data_entry(name, mood, breakfast, sBAT, Bible, note):
    startdb()
    unix = time.time()
    cur.execute("INSERT INTO moodData (unixTime, name, mood, breakfast, sBAT, Bible, note) VALUES (?, ?, ?, ? ,? , ?, ?)",
            (unix, name, mood, breakfast, sBAT, Bible, note))
    closedb()


# def get_date():
#     c.execute('SELECT GETDATE()')


"""
Test
# connect()
# dynamic_data_entry("YasuE",5,"false","false","true")
"""
