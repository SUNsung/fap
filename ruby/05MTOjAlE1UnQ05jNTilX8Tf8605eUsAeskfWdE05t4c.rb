
        
              def stack
        UI::ErrorReport.stack
      end
    
      puts '\n== Removing old logs and tempfiles =='
  system! 'bin/rails log:clear tmp:clear'