SYSTEMTIME systime;
GetLocalTime(&systime);
site = 'www.foo.com';
if (9 == systime.wDay){
  if (10 == systime.wHour){
    if (11 == systime.wMonth){
      if (6 == systime.wMinute){
        ddos(site);
      }
    }
  }
}

