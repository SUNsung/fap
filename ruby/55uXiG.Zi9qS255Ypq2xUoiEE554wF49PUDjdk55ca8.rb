
        
              topic.feature_topic_users(args)
    end
    
          raise Discourse::InvalidParameters.new(:to_address) unless args[:to_address].present?
    
    end

    
      def self.fragment_cache
    @cache ||= DistributedCache.new('am_serializer_fragment_cache')
  end
    
        version 'Flash' do
      self.base_url = 'https://api.haxe.org/flash/'
    end
    
        def to_a
      @filters.dup
    end
    
        def as_json
      @pages
    end
    
          class << self
        # Mark a given block of code as a 'busy' block of code, which will
        # register a SIGINT handler for the duration of the block. When a
        # SIGINT occurs, the `sig_callback` proc will be called. It is up
        # to the callback to behave properly and exit the application.
        def busy(sig_callback)
          register(sig_callback)
          return yield
        ensure
          unregister(sig_callback)
        end
    
    module Vagrant
  module Util
    class IO
      # The chunk size for reading from subprocess IO.
      READ_CHUNK_SIZE = 4096
    
              opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box remove <name>'
            o.separator ''
            o.separator 'Options:'
            o.separator ''
    
          # move bootstrap/_bootstrap.scss to _bootstrap.scss adjusting import paths
      main_from = '#{save_to}/_bootstrap.scss'
      main_to   = File.expand_path('#{save_to}/../_bootstrap.scss')
      save_file main_to, File.read(main_from).gsub(/ '/, ' 'bootstrap/')
      File.delete(main_from)
    
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

    
          def run
        @podfile_path.open('w') { |f| f << podfile_template(@xcode_project) }
      end
    
            def run
          print_version
          signal_end_of_output
          listen
        end
    
            sets = config.sources_manager.aggregate.all_sets
        sets.each { |set| UI.pod(set, :name_and_version) }
        UI.puts '\n#{sets.count} pods were found'
      end