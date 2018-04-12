
        
        def dest_dir(*subdirs)
  test_dir('dest', *subdirs)
end
    
    puts 'Results stored in #{PROF_OUTPUT_FILE}'

    
      next if extensions.empty?
  mimes[mime] = [] if mimes[mime].nil?
  mimes[mime].concat extensions
end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          private
      def parse_expression(str)
        Liquid::Variable.new(str, Liquid::ParseContext.new)
      end
    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
            self.description = <<-DESC
          Creates a scaffold for the development of a new Pod named `NAME`
          according to the CocoaPods best practices.
          If a `TEMPLATE_URL`, pointing to a git repo containing a compatible
          template, is specified, it will be used in place of the default one.
        DESC
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end