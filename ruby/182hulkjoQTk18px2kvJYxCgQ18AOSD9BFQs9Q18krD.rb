
        
              if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
            include Vagrant::Util
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)
    
        # Return the number of elements in this registry.
    #
    # @return [Integer]
    def length
      @items.keys.length
    end
    alias_method :size, :length
    
        describe 'X' do
      it 'converts argument as a hexadecimal number with uppercase letters' do
        format('%X', 196).should == 'C4'
      end
    
    describe 'Kernel.system' do
  it_behaves_like :kernel_system, :system, Kernel
end

    
        # Flattens a single rule.
    #
    # @param rule [Tree::RuleNode] The candidate for flattening
    # @see #flatten_rules
    def flatten_rule(rule)
      while rule.children.size == 1 && rule.children.first.is_a?(Tree::RuleNode)
        child = rule.children.first
    
        # Set an option for specifying `Encoding.default_external`.
    #
    # @param opts [OptionParser]
    def encoding_option(opts)
      encoding_desc = 'Specify the default encoding for input files.'
      opts.on('-E', '--default-encoding ENCODING', encoding_desc) do |encoding|
        Encoding.default_external = encoding
      end
    end
    
          @options[:for_engine][:syntax] ||= :scss if input.is_a?(File) && input.path =~ /\.scss$/
      @options[:for_engine][:syntax] ||= @default_syntax
      engine =
        if input.is_a?(File) && !@options[:check_syntax]
          Sass::Engine.for_file(input.path, @options[:for_engine])
        else
          # We don't need to do any special handling of @options[:check_syntax] here,
          # because the Sass syntax checking happens alongside evaluation
          # and evaluation doesn't actually evaluate any code anyway.
          Sass::Engine.new(input.read, @options[:for_engine])
        end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
          # @see Base#find_relative
      def find_relative(name, base, options)
        _find(File.dirname(base), name, options)
      end
    
        def set_if_empty(key, value=nil, &block)
      set(key, value, &block) unless keys.include?(key)
    end