
        
          require 'inch_by_inch/rake_task'
  InchByInch::RakeTask.new
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end