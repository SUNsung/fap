
        
            private
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
        it 'returns a 404 for a post not visible to the user' do
      sign_in eve
      expect {
        get :index, params: {post_id: @message.id}
      }.to raise_error(ActiveRecord::RecordNotFound)
    end
    
        it 'supports a limit per_page parameter' do
      2.times { FactoryGirl.create(:notification, :recipient => alice, :target => @post) }
      get :index, params: {per_page: 2}
      expect(assigns[:notifications].count).to eq(2)
    end
    
        # Transform
    #
    #     foo
    #       bar
    #         color: blue
    #       baz
    #         color: blue
    #
    # into
    #
    #     foo
    #       bar, baz
    #         color: blue
    #
    # @param root [Tree::Node] The parent node
    def fold_commas(root)
      prev_rule = nil
      root.children.map! do |child|
        unless child.is_a?(Tree::RuleNode)
          fold_commas(child) if child.is_a?(Tree::DirectiveNode)
          next child
        end
    
            parser = Sass::SCSS::Parser.new(value,
          @options[:filename], @options[:importer],
          @line, to_parser_offset(@offset))
        parsed_value = parser.parse_declaration_value
        end_offset = start_offset + value.length
      elsif value.strip.empty?
        parsed_value = [Sass::Script::Tree::Literal.new(Sass::Script::Value::String.new(''))]
        end_offset = start_offset
      else
        expr = parse_script(value, :offset => to_parser_offset(start_offset))
        end_offset = expr.source_range.end_pos.offset - 1
        parsed_value = [expr]
      end
      node = Tree::PropNode.new(parse_interp(name), parsed_value, prop)
      node.value_source_range = Sass::Source::Range.new(
        Sass::Source::Position.new(line.index, to_parser_offset(start_offset)),
        Sass::Source::Position.new(line.index, to_parser_offset(end_offset)),
        @options[:filename], @options[:importer])
      if !node.custom_property? && value.strip.empty? && line.children.empty?
        raise SyntaxError.new(
          'Invalid property: \'#{node.declaration}\' (no value).' +
          node.pseudo_class_selector_message)
      end
    
          private
    
        def split_colon_path(path)
      one, two = path.split(':', 2)
      if one && two && Sass::Util.windows? &&
          one =~ /\A[A-Za-z]\Z/ && two =~ %r{\A[/\\]}
        # If we're on Windows and we were passed a drive letter path,
        # don't split on that colon.
        one2, two = two.split(':', 2)
        one = one + ':' + one2
      end
      return one, two
    end
    
          def executable_path
        <<-EOS
### Installation Source