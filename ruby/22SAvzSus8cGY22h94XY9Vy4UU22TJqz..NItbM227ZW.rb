
        
              # Creates a _layout method to be called by _default_layout .
      #
      # If a layout is not explicitly mentioned then look for a layout with the controller's name.
      # if nothing is found then try same procedure to find super class's layout.
      def _write_layout_method # :nodoc:
        silence_redefinition_of_method(:_layout)
    
        def start(name, id, payload)
      if name == 'render_template.action_view'
        log_rendering_start(payload)
      end
    
        def find_all_with_query(query) # :nodoc:
      paths.each do |resolver|
        templates = resolver.find_all_with_query(query)
        return templates unless templates.empty?
      end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
        class [[NAME_CLASS]] < Action
      def self.run(params)
        # fastlane will take care of reading in the parameter and fetching the environment variable:
        UI.message 'Parameter API Token: #{params[:api_token]}'
    
        def self.reset_aliases
      @alias_actions = nil
    end
    
            [
          'This will automatically tag your build with the following format: `<grouping>/<lane>/<prefix><build_number>`, where:'.markdown_preserve_newlines,
          list,
          'For example, for build 1234 in the 'appstore' lane, it will tag the commit with `builds/appstore/1234`.'
        ].join('\n')
      end
    
            if params[:scale].nil? # sensible default values for scaling
          case params[:device].downcase.to_sym
          when :iphone6splus, :iphone6plus
            params[:scale] = '50'
          when :ipadair, :ipadair2
            params[:scale] = '50'
          else
            params[:scale] = '75'
          end
        end
    
          def self.description
        'This action uploads an artifact to artifactory'
      end
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
        # This will detect the proper guest OS for the machine and set up
    # the class to actually execute capabilities.
    def detect!
      guest_name = @machine.config.vm.guest
      initialize_capabilities!(guest_name, @guests, @capabilities, @machine)
    rescue Errors::CapabilityHostExplicitNotDetected => e
      raise Errors::GuestExplicitNotDetected, value: e.extra_data[:value]
    rescue Errors::CapabilityHostNotDetected
      raise Errors::GuestNotDetected
    end
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
            # Returns the internal data associated with this plugin. This
        # should NOT be called by the general public.
        #
        # @return [Hash]
        def self.data
          @data ||= {}
        end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # Defines a capability for the given provider. The block should return
        # a class/module that has a method with the capability name, ready
        # to be executed. This means that if it is an instance method,
        # the block should return an instance of the class.
        #
        # @param [String] provider The name of the provider
        # @param [String] cap The name of the capability
        def self.provider_capability(provider, cap, &block)
          components.provider_capabilities[provider.to_sym].register(cap.to_sym, &block)
          nil
        end
    
            firsts, rest = [sseq.members.first], sseq.members[1..-1]
        firsts.push rest.shift if firsts.first.is_a?(Sass::Selector::Parent)
    
          # @see Base#mtime
      def mtime(name, options)
        file, _ = Sass::Util.destructure(find_real_file(@root, name, options))
        File.mtime(file) if file
      rescue Errno::ENOENT
        nil
      end
    
          it 'registers an offense for two hash parameters with braces' do
        expect_offense(<<-RUBY.strip_indent)
          where({ x: 1 }, { y: 2 })
                          ^^^^^^^^ Redundant curly braces around a hash parameter.
        RUBY
      end
    end
    
            last_element_commented =
          processed_source.comments.any? { |c| c.loc.line == last_element_line }
    
      include_examples 'multiline literal brace layout method argument' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
              if variables.nil?
            replacement_range = replacement_range(node, node.loc.begin.end_pos)
            correction = 'for _ in #{enumerable.source} do'
          else
            replacement_range = replacement_range(node,
                                                  items.loc.expression.end_pos)
            correction = 'for #{variables.source} in #{enumerable.source} do'
          end
    
              return if node.send_node.stabby_lambda?
          return if node.braces?