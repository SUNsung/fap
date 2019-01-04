
        
            def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      # Version of your assets, change this if you want to expire all your assets.
  config.assets.version = '1.0'