
        
              delegate_to Type
    
          test 'when layout is specified as false, do not use a layout' do
        controller = WithFalseLayout.new
        controller.process(:index)
        assert_equal 'Hello false!', controller.response_body
      end
    
          def part_of_ignored_node?(node)
        ignored_nodes.map(&:loc).any? do |ignored_loc|
          if ignored_loc.expression.begin_pos > node.source_range.begin_pos
            next false
          end
    
            def message_for_normal_block(variable, all_arguments)
          if all_arguments.none?(&:referenced?) &&
             !define_method_call?(variable)
            if all_arguments.count > 1
              'You can omit all the arguments if you don't care about them.'
            else
              'You can omit the argument if you don't care about it.'
            end
          else
            message_for_underscore_prefix(variable)
          end
        end
    
          attr_reader :page, :content
    
        def self.setup(&block)
      define_method(:setup, &block)
    end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, false