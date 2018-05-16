
        
          if ARGV.include? '--no-ansi'
    STDERR.puts <<-DOC
    WARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
    task default: :test