
        
        require 'benchmark/ips'
require 'pathutil'
    
          #
    
    # Helper method for Windows
def dst_active?
  config = Jekyll.configuration('quiet' => true)
  ENV['TZ'] = config['timezone']
  dst = Time.now.isdst
    
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
    
      def describe_java
    java_xml = Utils.popen_read('/usr/libexec/java_home', '--xml', '--failfast')
    return 'N/A' unless $?.success?
    javas = []
    REXML::XPath.each(REXML::Document.new(java_xml), '//key[text()='JVMVersion']/following-sibling::string') do |item|
      javas << item.text
    end
    javas.uniq.join(', ')
  end
    
        checks.inject_dump_stats! if ARGV.switch? 'D'
    
    require 'vagrant/util/safe_puts'
    
              # Otherwise add the block to the list of hooks for this action.
          hooks << block
        end