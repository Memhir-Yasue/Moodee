import moodee
import dbmkr





# print(dir(moodee))

user = moodee.Moodee()

user.setTime()
name = user.name("YasuE")
mood = user.mood(4)
breakfast = user.breakfast(1)
sbat = user.S_bat(0)
bible = user.rd_bible(0)

msg =  """
            TEST
       """
u_note = user.note(msg)

dbmkr.connect()
dbmkr.dynamic_data_entry(name,mood,breakfast,sbat,bible,u_note)

user.out("inputs.txt")
