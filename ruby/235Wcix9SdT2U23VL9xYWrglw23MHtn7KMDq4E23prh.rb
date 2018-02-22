
        
          def find_matching_tag(tag)
    if key?(tag)
      tag
    else
      find_altivec_tag(tag) || find_or_later_tag(tag)
    end
  end
    
      private
    
      def recipients(payload = {})
    emails = interpolated(payload)['recipients']
    if emails.present?
      if emails.is_a?(String)
        [emails]
      else
        emails
      end
    else
      [user.email]
    end
  end
    
      class Worker < LongRunnable::Worker
    # Optional
    #   Called after initialization of the Worker class, use this method as an initializer.
    def setup; end
    
            # Defines an additionally available host implementation with
        # the given key.
        #
        # @param [String] name Name of the host.
        # @param [String] parent Name of the parent host (if any)
        def self.host(name, parent=nil, &block)
          components.hosts.register(name.to_sym) do
            parent = parent.to_sym if parent
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a provider for the V2 API. A provider
      # is responsible for creating compute resources to match the needs
      # of a Vagrant-configured system.
      class Provider
        include CapabilityHost
    
            hash.each do |key, value|
          self[convert_key(key)] = value
        end
      end
    
            # Method used internally to DRY out the other renderers. This method
        # creates and sets up the renderer before calling a specified method on it.
        def render_with(method, template, data={})
          renderer = new(template, data)
          yield renderer if block_given?
          renderer.send(method.to_sym)
        end
      end
    
          path = if timestamp == :latest
        Pathname.glob(metadata_versioned_path(version: version).join('*')).sort.last
      else
        timestamp = new_timestamp if timestamp == :now
        metadata_versioned_path(version: version).join(timestamp)
      end
    
          def initialize(pairs = {})
        @pairs = pairs
        pairs.each do |key, value|
          raise 'invalid container key: '#{key.inspect}'' unless VALID_KEYS.include?(key)
          send(:'#{key}=', value)
        end
    
          files.map! do |from, to|
        to ||= from.gsub(/\.[^.]*?$/, '.css')
        sourcemap = Sass::Util.sourcemap_name(to) if @options[:sourcemap]
        [from, to, sourcemap]
      end
      dirs.map! {|from, to| [from, to || from]}
      Sass::Plugin.options[:template_location] = dirs
    
            def log_level(name, options = {})
          if options[:prepend]
            level = log_levels.values.min
            level = level.nil? ? 0 : level - 1
          else
            level = log_levels.values.max
            level = level.nil? ? 0 : level + 1
          end
          log_levels.update(name => level)
          define_logger(name)
        end
    
        # @param modifier [Array<String, Sass::Script::Tree::Node>] See \{#modifier}
    # @param type [Array<String, Sass::Script::Tree::Node>] See \{#type}
    # @param expressions [Array<Array<String, Sass::Script::Tree::Node>>] See \{#expressions}
    def initialize(modifier, type, expressions)
      @modifier = modifier
      @type = type
      @expressions = expressions
    end
    
            p environment.var(name)
      else
        p Script::Parser.parse(text, @line, 0).perform(environment)
      end
    rescue Sass::SyntaxError => e
      puts 'SyntaxError: #{e.message}'
      if @options[:trace]
        e.backtrace.each do |line|
          puts '\tfrom #{line}'
        end
      end
    end
  end
end

    
             RUBY
                         else
                           <<-RUBY
  # Uncomment the next line if you're using Swift or would like to use dynamic frameworks
  # use_frameworks!
    
              add_offense(node)
        end
    
            def autocorrect(node)
          center = multiple_compare?(node)
          new_center = '#{center.source} && #{center.source}'
    
      context 'called with three styles' do
    it 'applies second style to left and right' do
      rule = 'border-style: dashed double solid'
    
          expect('.border-width-all').to have_rule(rule)
    end
  end
    
          expect('.all-buttons-active').to have_ruleset(ruleset)
    end
  end
    
          expect('.all-text-inputs-focus').to have_ruleset(ruleset)
    end
  end