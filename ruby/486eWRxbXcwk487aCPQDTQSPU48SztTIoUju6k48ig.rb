
        
          def userpaths?
    @settings.include? :userpaths
  end
end
    
      def bash_completion_caveats
    if keg && keg.completion_installed?(:bash) then <<-EOS.undent
      Bash completion has been installed to:
        #{HOMEBREW_PREFIX}/etc/bash_completion.d
      EOS
    end
  end
    
      # Clean the keg of formula @f
  def clean
    ObserverPathnameExtension.reset_counts!
    
        outpath = file.gsub('.gz', '')
    tgz = Zlib::GzipReader.new(File.open(file))
    begin
      File.open(outpath, 'w') do |out|
        IO::copy_stream(tgz, out)
      end
      File.unlink(file)
    rescue
      File.unlink(outpath) if File.file?(outpath)
     raise
    end
    tgz.close
  end