
        
        group :test do
  gem 'minitest'
  gem 'rr', require: false
  gem 'rack-test', require: false
end
    
        def user_has_docs?(slug)
      docs.include?(slug) || begin
        slug = '#{slug}~'
        docs.any? { |_slug| _slug.start_with?(slug) }
      end
    end
    
    
    def initialize
      raise NotImplementedError, '#{self.class} is an abstract class and cannot be instantiated.' if self.class.abstract
    end
    
        def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
        def inheritable_copy
      self.class.new @filters
    end
    
        class << self
      attr_accessor :dir
    
            # Remove ng-* attributes
        css('*').each do |node|
          node.attributes.each_key do |attribute|
            node.remove_attribute(attribute) if attribute.start_with? 'ng-'
          end
        end
    
            # Yields a VM for each target VM for the command.
        #
        # This is a convenience method for easily implementing methods that
        # take a target VM (in the case of multi-VM) or every VM if no
        # specific VM name is specified.
        #
        # @param [String] name The name of the VM. Nil if every VM.
        # @param [Boolean] single_target If true, then an exception will be
        #   raised if more than one target is found.
        def with_target_vms(names=nil, options=nil)
          # Using VMs requires a Vagrant environment to be properly setup
          raise Errors::NoEnvironmentError if !@env.root_path
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
              @registered.each do |plugin|
            plugin.config.each do |key, klass|
              result[key] = klass
            end
          end
    
            # This contains all the command plugins by name, and returns
        # the command class and options. The command class is wrapped
        # in a Proc so that it can be lazy loaded.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        attr_reader :commands
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a configuration key defined for
      # V2. Any configuration key plugins for V2 should inherit from this
      # class.
      class Config
        # This constant represents an unset value. This is useful so it is
        # possible to know the difference between a configuration value that
        # was never set, and a value that is nil (explicitly). Best practice
        # is to initialize all variables to this value, then the {#merge}
        # method below will 'just work' in many cases.
        UNSET_VALUE = Object.new
    
            # This returns all the registered configuration classes.
        #
        # @return [Hash]
        def config
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:top])
            end
          end
        end
    
            # Registers a callback to be called when a specific action sequence
        # is run. This allows plugin authors to hook into things like VM
        # bootup, VM provisioning, etc.
        #
        # @param [String] name Name of the action.
        # @param [Symbol] hook_name The location to hook. If this isn't
        #   set, every middleware action is hooked.
        # @return [Array] List of the hooks for the given action.
        def self.action_hook(name, hook_name=nil, &block)
          # The name is currently not used but we want it for the future.
    
          doc.css('#filecontents').css('h1, h2, h3, h4, h5, h6').each do |h|
        next if h.inner_text.empty?
        h['id'] =
          case h.inner_text
          when 'Referencing Parent Selectors: &'; 'parent-selector'
          when /^Comments:/; 'comments'
          when 'Strings'; 'sass-script-strings'
          when 'Division and /'; 'division-and-slash'
          when /^Subtraction,/; 'subtraction'
          when '& in SassScript'; 'parent-script'
          when '@-Rules and Directives'; 'directives'
          when '@extend-Only Selectors'; 'placeholders'
          when '@extend-Only Selectors'; 'placeholders'
          when '@each'; 'each-directive'
          when 'Multiple Assignment'; 'each-multi-assign'
          when 'Mixin Directives'; 'mixins'
          when /^Defining a Mixin:/; 'defining_a_mixin'
          when /^Including a Mixin:/; 'including_a_mixin'
          when 'Arguments'; 'mixin-arguments'
          when 'Passing Content Blocks to a Mixin'; 'mixin-content'
          else
            h.inner_text.downcase.gsub(/[^a-z _-]/, '').gsub(' ', '_')
          end
      end
    
          flatten_rules(rule)
    end
    
        # variable
    # Script::Value
    inherited_hash_reader :var
    
          private
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
            :files     => v.stats.files.map { |f,*rest|
              page_path = extract_renamed_path_destination(f)
              page_path = remove_page_extentions(page_path)
              { :file => f,
                :link => '#{page_path}/#{v.id}'
              }
            }
          }
        end
      end
    
          # Returns page content without title if it was extracted.
      #
      def content_without_page_header(content)
        doc = build_document(content)
          if @h1_title
            title = find_header_node(doc)
            title.remove unless title.empty?
          end
        # .inner_html will cause href escaping on UTF-8
        doc.css('div#gollum-root').children.to_xml(@@to_xml)
      end
    end
  end
end

    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
          if page = wiki.paged(name, path, exact = true)
        @page          = page
        @name          = name
        @content       = page.formatted_data
        @upload_dest   = find_upload_dest(path)
    
          def files_folders
        if has_results
          folders = {}
          page_files = {}