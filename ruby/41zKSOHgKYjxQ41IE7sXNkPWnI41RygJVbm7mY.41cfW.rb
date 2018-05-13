
        
            assert_equal %(dont <\\/close> tags), j(%(dont </close> tags))
  end
    
      tests DummyController
    
            assert_equal 'summary, title', @controller.response.body
        assert @controller.params.has_key?(:summary)
        assert @controller.params.has_key?(:title)
        assert_equal 'content...', @controller.params['summary']
        assert_equal 'JSON', @controller.params['title']
      end
    end
  end
    
            mail.perform_deliveries    = perform_deliveries
        mail.raise_delivery_errors = raise_delivery_errors
      end
    end
    
          raise Discourse::InvalidParameters.new(:to_address) unless args[:to_address].present?
    
    end

    
      API_URL = 'https://api.github.com'.freeze
    
            def operator_assignment_node
          return nil unless node.parent
          return nil unless OPERATOR_ASSIGNMENT_TYPES.include?(node.parent.type)
          return nil unless node.sibling_index.zero?
          node.parent
        end
    
                unless assignment.run_exclusively_with?(reference)
              assignment.reference!(node)
            end
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)