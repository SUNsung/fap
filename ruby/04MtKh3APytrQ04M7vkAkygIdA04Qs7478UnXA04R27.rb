
        
            find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
      # Finds the groups of the source user, optionally limited to those visible to
  # the current user.
  def execute(current_user = nil)
    segments = all_groups(current_user)
    
          options[:container] = '.container'
    end
  end
end

    
        self.name = 'Elixir'
    self.type = 'elixir'
    self.root_path = 'api-reference.html'
    self.links = {
      home: 'https://elixir-lang.org/',
      code: 'https://github.com/elixir-lang/elixir'
    }
    
        def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
            def meta_assignment_node
          unless instance_variable_defined?(:@meta_assignment_node)
            @meta_assignment_node =
              operator_assignment_node || multiple_assignment_node
          end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
            def autocorrect(node)
          center = multiple_compare?(node)
          new_center = '#{center.source} && #{center.source}'
    
            def on_send(node)
          return unless node.receiver && node.method?(:freeze) &&
                        immutable_literal?(node.receiver)
    
        context 'opening brace on same line as first element' do
      context 'last element has a trailing comma' do
        it 'autocorrects closing brace on different line from last element' do
          new_source = autocorrect_source(['#{prefix}#{open}#{a}, # a',
                                           '#{b}, # b',
                                           close,
                                           suffix])
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
        # resize to a new geometry
    # @param geometry [String] the Paperclip geometry definition to resize to
    # @example
    #   Paperclip::Geometry.new(150, 150).resize_to('50x50!')
    #   #=> Paperclip::Geometry(50, 50)
    def resize_to(geometry)
      new_geometry = Paperclip::Geometry.parse geometry
      case new_geometry.modifier
      when '!', '#'
        new_geometry
      when '>'
        if new_geometry.width >= self.width && new_geometry.height >= self.height
          self
        else
          scale_to new_geometry
        end
      when '<'
        if new_geometry.width <= self.width || new_geometry.height <= self.height
          self
        else
          scale_to new_geometry
        end
      else
        scale_to new_geometry
      end
    end
    
        def processor(name) #:nodoc:
      @known_processors ||= {}
      if @known_processors[name.to_s]
        @known_processors[name.to_s]
      else
        name = name.to_s.camelize
        load_processor(name) unless Paperclip.const_defined?(name)
        processor = Paperclip.const_get(name)
        @known_processors[name.to_s] = processor
      end
    end
    
                if options.has_key?(validator_kind)
              validator_options = options.delete(validator_kind)
              validator_options = {} if validator_options == true
              conditional_options = options.slice(:if, :unless)
              Array.wrap(validator_options).each do |local_options|
                method_name = Paperclip::Validators.const_get(constant.to_s).helper_method_name
                send(method_name, attributes, local_options.merge(conditional_options))
              end
            end
          end
        end
      end