          theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
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
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} should not be required'
        end
        alias negative_failure_message failure_message_when_negated
    
            def override_method object, method, &replacement
          (class << object; self; end).class_eval do
            define_method(method, &replacement)
          end
        end
    
          def validate_whitelist(record, attribute, value)
        if allowed_types.present? && allowed_types.none? { |type| type === value }
          mark_invalid record, attribute, allowed_types
        end
      end