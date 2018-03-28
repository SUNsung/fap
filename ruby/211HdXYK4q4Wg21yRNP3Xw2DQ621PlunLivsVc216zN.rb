
        
            # Determine the available cores in host system.
    # This mostly helps on linux, but it couldn't hurt on MacOSX.
    if RUBY_PLATFORM =~ /linux/
      cpu_count = `nproc`.to_i
    elsif RUBY_PLATFORM =~ /darwin/
      cpu_count = `sysctl -n hw.ncpu`.to_i
    end
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
          # Prints a title in blue with surrounding newlines.
      def title(text)
        # Use $stdout directly to bypass the indentation that our `puts` does.
        $stdout.puts(color.colorize('\n#{text}\n', :blue))
      end
    
          def assert_valid_stage_names(names)
        invalid = names.find { |n| RESERVED_NAMES.include?(n) }
        return if invalid.nil?
    
        # Provide a wrapper for the SCM that loads a strategy for the user.
    #
    # @param [Rake] context     The context in which the strategy should run
    # @param [Module] strategy  A module to include into the SCM instance. The
    #    module should provide the abstract methods of Capistrano::SCM
    #
    def initialize(context, strategy)
      @context = context
      singleton = class << self; self; end
      singleton.send(:include, strategy)
    end
    
          instance.run_paperclip_callbacks(:post_process) do
        instance.run_paperclip_callbacks(:'#{name}_post_process') do
          if !@options[:check_validity_before_processing] || !instance.errors.any?
            post_process_styles(*style_args)
          end
        end
      end
    end
    
        def initialize(filepath)
      @filepath = filepath
    end
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end
    
            def failure_message
          'Attachment #{@attachment_name} should be required'
        end
    
      context 'called with four styles' do
    it 'applies different styles to all sides' do
      rule = 'border-style: dotted groove ridge none'
    
          expect('.border-width-false-third').to have_ruleset(ruleset)
      expect('.border-width-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
      context 'called with arguments (2, $value: 4em 6em)' do
    it 'outputs sextuple the second value from the default scale' do
      expect('.two-double-value').to have_rule('font-size: 3.125em')
    end
  end
end

    
          expect('.size-auto').to have_ruleset(rule)
    end
  end
end
