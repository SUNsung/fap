
        
        def process_args
  until ARGV.empty?
    if ARGV.first =~ %r{^-+t(?:est)?$} && ARGV.length > 1
      ARGV.shift
      $opt_test = ARGV.shift
    elsif ARGV.first =~ %r{^-+h(?:elp)?$}
      puts usage
      exit 0
    else
      puts usage
      exit 1
    end
  end
end
    
      def brief_build_info(f)
    build_time_str = f.logs.ctime.strftime('%Y-%m-%d %H:%M:%S')
    s = <<~EOS
      Homebrew build logs for #{f.full_name} on #{OS_VERSION}
    EOS
    if ARGV.include?('--with-hostname')
      hostname = Socket.gethostname
      s << 'Host: #{hostname}\n'
    end
    s << 'Build date: #{build_time_str}\n'
    s
  end