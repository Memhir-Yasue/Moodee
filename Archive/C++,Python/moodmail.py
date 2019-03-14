import yagmail
import getpass


def mail(sender, receiver):
    FROM = sender
    mail_password = getpass.getpass(prompt='Password: ')
    yag = yagmail.SMTP(FROM, mail_password)
    TO = receiver
    content = [ "LIFTOFF!!!!" ]
    subject = "IGNITION!"
    yag.send(TO, subject, content)
