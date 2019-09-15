
        
          it 'calls the given block for each byte in the stream, passing the byte as an argument' do
    gz = Zlib::GzipReader.new @io
    
            it 'does not make eof? false' do
          @gz.ungetbyte nil
          @gz.eof?.should be_true
        end
      end
    end
  end
end

    
    Then(/^the release is created$/) do
  run_vagrant_command('ls -g #{TestApp.releases_path}')
end
    
        def cmdline_filters
      @cmdline_filters ||= []
    end
    
          include Capistrano::ProcHelpers