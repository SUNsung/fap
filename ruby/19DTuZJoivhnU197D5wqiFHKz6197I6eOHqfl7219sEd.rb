def process_args
  if ARGV.first =~ %r{^-+h(?:elp)?$}
    puts usage
    exit 0
  elsif ARGV.length == 1
    $app_path = ARGV.first
  else
    puts usage
    exit 1
  end
end
    
    def usage
  $stderr.puts '#{$0} [site list] [output-dir]'
  exit(0)
end
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(\*\s+OK[^\n\r]*)/i,
      :login		=> /^CAPABILITY\s+LOGIN\s+([^\s]+)\s+([^\n\r]+)/i,
      :login_pass => /^CAPABILITY\s+OK\s+(Login[^\n\r]*)/i,
      :login_bad	=> /^CAPABILITY\s+BAD\s+(Login[^\n\r]*)/i,
      :login_fail => /^CAPABILITY\s+NO\s+(Login[^\n\r]*)/i
    }
  end
    
    unless STDIN.tty?
	p = ::Parser.new('')
	p.parse
	p.dump_all
else
	print 'Tested with:\n'
	print '\tGNU objdump 2.9-aix51-020209\n'
	print '\tGNU objdump 2.15.92.0.2 20040927\n'
	print 'Usage: objdump -dM suffix <file(s)> | ruby objdumptoc.rb\n'
end

    
            attr_writer :log_levels
    
      def developer_prefix
    `xcode-select --print-path`.strip
  end
    
            private
    
            def self.options
          [
            ['--template-url=URL', 'The URL of the git repo containing a ' \
                                  'compatible template'],
          ].concat(super)
        end
    
              private