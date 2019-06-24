
        
                def initialize(symbol)
          @symbol = symbol.to_sym
        end
    
          def test_helpers_with_module_through_block
        @controller = AbstractHelpersBlock.new
        @controller.process(:with_module)
        assert_equal 'Module Included', @controller.response_body
      end
    end
    
      def broadcast_params
    params.permit(:title, :processed_html, :type_of, :sent)
    # left out body_markdown and processed_html attributes
    #   until we decide we're using them
  end
end
