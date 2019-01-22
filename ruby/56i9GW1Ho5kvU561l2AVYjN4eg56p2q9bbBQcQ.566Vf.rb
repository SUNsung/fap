
        
        # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
        path = File.join(folder, '_#{type}s', filename)
    File.write(path, file_content_from_hash(input_hash))
  end
end
    
      def self.theme_gem_dir; source_dir.join('tmp', 'jekyll', 'my-cool-theme'); end
    
        # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
    module Vagrant
  module Plugin
    module V1
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
                @logger.info('With machine: #{machine.name} (#{machine.provider.inspect})')
            yield machine
    
            # Initialize the provider to represent the given machine.
        #
        # @param [Vagrant::Machine] machine The machine that this provider
        #   is responsible for.
        def initialize(machine)
        end
    
      it 'returns false when the command exits with a non-zero exit status' do
    @object.system(ruby_cmd('exit 1')).should == false
    
        lambda {
      catch :blah do
        throw :blah, :return_value, 2, 3, 4, 5
      end
    }.should raise_error(ArgumentError)
  end
    
      it 'writes the default record separator and NOT $/ to $stderr after the warning message' do
    lambda {
      $VERBOSE = true
      $/ = 'rs'
      warn('')
    }.should output(nil, /\n/)
  end
    
      opts.separator ''
  opts.separator 'Commands:'
  opts.separator '  remove WORKER   Removes a worker'
  opts.separator '  kill WORKER     Kills a worker'
  opts.separator '  list            Lists known workers'
end
    
        w.uid = 'git'
    w.gid = 'git'
    
    # 1. update ChangeLog and lib/fluent/version.rb
# 2. bundle && bundle exec rake build:all
# 3. release 3 packages built on pkg/ directory
namespace :build do
  desc 'Build gems for all platforms'
  task :all do
    Bundler.with_clean_env do
      %w[ruby x86-mingw32 x64-mingw32].each do |name|
        ENV['GEM_BUILD_FAKE_PLATFORM'] = name
        Rake::Task['build'].execute
      end
    end
  end
end
    
        @@block_level = 0
    @@frozen_clock = nil
    
          @opt_parser.on('-e KEY=VALUE', 'configure formatter config params') do |v|
        key, value = v.split('=')
        usage '#{v} is invalid. valid format is like `key=value`' unless value
        @options[:config_params].merge!(key => value)
      end
    end
    
    Options:
BANNER
    @parser.on('--verbose', 'Be verbose') do
      @verbose = true
    end
    @parser.on('-c', '--compact', 'Compact output') do
      @compact = true
    end
    @parser.on('-f', '--format=FORMAT', 'Specify format. (#{AVAILABLE_FORMATS.join(',')})') do |s|
      format = s.to_sym
      usage('Unsupported format: #{s}') unless AVAILABLE_FORMATS.include?(format)
      @format = format
    end
    @parser.on('-I PATH', 'Add PATH to $LOAD_PATH') do |s|
      $LOAD_PATH.unshift(s)
    end
    @parser.on('-r NAME', 'Load library') do |s|
      @libs << s
    end
    @parser.on('-p', '--plugin=DIR', 'Add plugin directory') do |s|
      @plugin_dirs << s
    end
  end
    
          class JSONFormatter < Formatter
        def call(record, out)
          out << Yajl.dump(record) << '\n'
        end
      end
    
              @_timekey = case conf['time_slice_format']
                      when /\%S/ then 1
                      when /\%M/ then 60
                      when /\%H/ then 3600
                      when /\%d/ then 86400
                      when nil   then 86400 # default value of TimeSlicedOutput.time_slice_format is '%Y%m%d'
                      else
                        raise Fluent::ConfigError, 'time_slice_format only with %Y or %m is too long'
                      end
          buf_params['timekey'] = @_timekey