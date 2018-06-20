
        
            private
      attr_reader :table
    
      def test_nil_is_not_changed_when_serialized_with_a_class
    Topic.serialize(:content, Array)
    
      test 'in memory replacement executes no queries' do
    bulb = Bulb.create!
    car = Car.create!(bulbs: [bulb])
    
          # Create a full Jekyll configuration with the options passed in as overrides
      #
      # options - the configuration overrides
      #
      # Returns a full Jekyll configuration
      def configuration_from_options(options)
        return options if options.is_a?(Jekyll::Configuration)
        Jekyll.configuration(options)
      end
    
    require 'erb'
    
            # Perform logical validation of CLI options
    
            def start(opts)
          @thread = Thread.new do
            # Use epoll if the kernel supports it
            EM.epoll
            EM.run do
              EM.error_handler { |e| log_error(e) }
    
          def initialize(config)
        Jekyll::External.require_with_graceful_fail 'kramdown' unless defined?(Kramdown)
        @config = config['kramdown'].dup || {}
        @config[:input] = :SmartyPants
      end
    
        # Read the YAML frontmatter.
    #
    # base - The String path to the dir containing the file.
    # name - The String filename of the file.
    # opts - optional parameter to File.read, default at site configs
    #
    # Returns nothing.
    # rubocop:disable Metrics/AbcSize
    def read_yaml(base, name, opts = {})
      filename = File.join(base, name)
    
      def std?
    @settings.include? :std
  end
    
        option_names.any? do |name|
      if option_defined? 'with-#{name}'
        include? 'with-#{name}'
      elsif option_defined? 'without-#{name}'
        !include? 'without-#{name}'
      else
        false
      end
    end
  end
    
      private
    
    class Formula
  include FormulaCompat
  extend FormulaCompat
    
    Given an Application (app) bundle directory on disk, find all
login items associated with that app, which you can use in a
Cask uninstall stanza, eg
    
      def eval_file(entry, files, prefix)
    return false if entry.full_name =~ /PaxHeaders/
    if !files.nil?
      if files.is_a?(Array)
        return false unless files.include?(entry.full_name.gsub(prefix, ''))
        entry.full_name.split('/').last
      elsif files.is_a?(String)
        return false unless entry.full_name =~ Regexp.new(files)
        entry.full_name.split('/').last
      end
    else
      entry.full_name.gsub(prefix, '')
    end
  end