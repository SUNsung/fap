
        
        html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
          t0 = Process.clock_gettime(Process::CLOCK_REALTIME)
      File.write(path, 'foo')
      sleep 2
      File.write(path, 'bar')
      sleep 2
      File.read(path)
      File.chmod(0644, path)
      sleep 2
      File.read(path)
    
      it 'decodes the remaining doubles when passed the '*' modifier' do
    array = '333333\x07@ffffff\xf6?ffffff\x20@'.unpack(unpack_format('*'))
    array.should == [2.9, 1.4, 8.2]
  end
    
      it 'decodes UTF-8 BMP codepoints' do
    [ ['\xc2\x80',      [0x80]],
      ['\xdf\xbf',      [0x7ff]],
      ['\xe0\xa0\x80',  [0x800]],
      ['\xef\xbf\xbf',  [0xffff]]
    ].should be_computed_by(:unpack, 'U')
  end
    
        Thread.pass until in_ensure_clause == true
    10.times { t.send(@method); Thread.pass }
    exit_loop = true
    t.join
    ScratchPad.recorded.should == :after_stop
  end
  end
    
        time.usec.should == 0
    time.nsec.should == 999
  end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
        if arg == 'help' && !cmd
      # Command-style help: `help <cmd>` is fine, but `<cmd> help` is not.
      help_flag = true
    elsif !cmd && !help_flag_list.include?(arg)
      cmd = ARGV.delete_at(i)
    end
  end
    
          def eject(mount)
        # realpath is a failsafe against unusual filenames
        mountpath = Pathname.new(mount).realpath
        return unless mountpath.exist?