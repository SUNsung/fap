
        
              # This inserts a block with the given key and value.
      #
      # @param [String] key
      # @param [String] value
      def insert(key, value)
        # Insert the new block into the value
        new_block = <<BLOCK
# VAGRANT-BEGIN: #{key}
#{value.strip}
# VAGRANT-END: #{key}
BLOCK
    
            type = argv.shift.to_sym
        name = argv.shift.to_sym
    
        # @abstract
    #
    # Create a (new) clone of the remote-repository on the deployment target
    #
    # @return void
    #
    def clone
      raise NotImplementedError, 'Your SCM strategy module should provide a #clone method'
    end
    
            def multiple_assignment?
          return false unless meta_assignment_node
          meta_assignment_node.type == MULTIPLE_ASSIGNMENT_TYPE
        end
    
    module RuboCop
  module Cop
    module Style
      # This cop checks against comparing a variable with multiple items, where
      # `Array#include?` could be used instead to avoid code repetition.
      #
      # @example
      #   # bad
      #   a = 'a'
      #   foo if a == 'a' || a == 'b' || a == 'c'
      #
      #   # good
      #   a = 'a'
      #   foo if ['a', 'b', 'c'].include?(a)
      class MultipleComparison < Cop
        MSG = 'Avoid comparing a variable with multiple items ' \
          'in a conditional, use `Array#include?` instead.'.freeze
    
            def each_misplaced_optional_arg(arguments)
          optarg_positions, arg_positions = argument_positions(arguments)
          return if optarg_positions.empty? || arg_positions.empty?
    
        expect(cop.offenses.size).to eq(1)
    expect(cop.messages).to eq(['Prefer `to_sym` over `intern`.'])
    expect(cop.highlights).to eq(%w[intern])