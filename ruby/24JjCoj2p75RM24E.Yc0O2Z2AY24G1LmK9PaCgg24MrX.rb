class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)
    
              expect(new_source)
            .to eq('#{prefix}#{open}#{a}, # a\n#{b},#{close} # b\n#{suffix}')
        end
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
        begin
      create_scaffold(source, @target_path)
    rescue Errno::EACCES => exception
      report_exception('Permission denied when executing the plugin manager', exception)
    rescue => exception
      report_exception('Plugin creation Aborted', exception)
    end
  end