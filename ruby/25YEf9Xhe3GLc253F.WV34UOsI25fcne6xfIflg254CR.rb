
        
            it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        context '#run' do
      before do
        mock(@agent_runner).run_workers
      end
    
        it 'should convert the 'escape' method correctly' do
      expect(LiquidMigrator.convert_string('Escaped: <escape $.content.name>\nNot escaped: <$.content.name>')).to eq(
                                    'Escaped: {{content.name | uri_escape}}\nNot escaped: {{content.name}}'
      )
    end
    
      describe '#jsonify' do
    it 'escapes </script> tags in the output JSON' do
      cleaned_json = Utils.jsonify(:foo => 'bar', :xss => '</script><script>alert('oh no!')</script>')
      expect(cleaned_json).not_to include('</script>')
      expect(cleaned_json).to include('\\u003c/script\\u003e')
    end
    
        stub(services(:generic)).refresh_token!
  end
    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          attr_reader :scope_name, :resource
    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
            def set_reset_password_token
          raw, enc = Devise.token_generator.generate(self.class, :reset_password_token)
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
          # The receiver of the method definition, if any.
      #
      # @return [Node, nil] the receiver of the method definition, or `nil`.
      def receiver
        node_parts[3]
      end
    
          dir = if File.directory?(file_or_dir)
              file_or_dir
            else
              File.dirname(file_or_dir)
            end
      @path_cache[dir] ||= ConfigLoader.configuration_file_for(dir)
      path = @path_cache[dir]
      @object_cache[path] ||= begin
                                print 'For #{dir}: ' if ConfigLoader.debug?
                                ConfigLoader.configuration_from_file(path)
                              end
    end
  end
end

    
          def part_of_ignored_node?(node)
        ignored_nodes.map(&:loc).any? do |ignored_loc|
          if ignored_loc.expression.begin_pos > node.source_range.begin_pos
            next false
          end
    
              if all_arguments.none?(&:referenced?)
            proc_message = 'Also consider using a proc without arguments ' \
                           'instead of a lambda if you want it ' \
                           'to accept any arguments but don't care about them.'
          end
    
            include Spree::Core::ControllerHelpers::Auth
        include Spree::Core::ControllerHelpers::Order
        # This before_action comes from Spree::Core::ControllerHelpers::Order
        skip_before_action :set_current_order
    
                render_order(result)
          end
    
          def variant_attributes
        if @current_user_roles&.include?('admin')
          @@variant_attributes + [:cost_price]
        else
          @@variant_attributes
        end
      end
    end
  end
end
